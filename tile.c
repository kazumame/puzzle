/*
 * tile.c
 *
 *  Created on: 2015/07/21
 *      Author: m237083j
 */

#include <stdio.h>
#include <stdlib.h>
#include "gl/gl.h"

extern struct gl_table *table;
extern struct tile *board[4][4];
extern struct counter *step;

struct tile{
	struct gl_panel *panel;
	int num;
	int x, y;
};

void tile_clicked(struct gl_mouse_event *event,void *arg)
{
	int x, y;
	struct tile *tile = (struct tile *)arg;

	printf("tile: %d\n", tile->num);
	x = tile->x;
	y = tile->y;
	if(x != 0 && board[y][x-1]->num == 16){
		tile_swap(tile, board[y][x-1]);
	    counter_increase(step);
	}else if(x != 3 && board[y][x+1]->num == 16){
		tile_swap(tile, board[y][x+1]);
	     counter_increase(step);
	}else if(y != 0 && board[y-1][x]->num == 16){
		tile_swap(tile, board[y-1][x]);
	    counter_increase(step);
	}else if(y != 3 && board[y+1][x]->num == 16){
	    tile_swap(tile, board[y+1][x]);
	    counter_increase(step);
	}
	if(tile_is_complete()==1){
		gl_dialog_new("CLEAR!!");
	}
}

struct tile *tile_new(int num)
{
	struct tile *tile;
	char filename[32];
	struct gl_image *img;

	tile = (struct tile *)malloc(sizeof(struct tile));

	tile->panel = gl_panel_new();

	sprintf(filename, "image/%d.png", num);
	img = gl_image_new(filename);

	gl_panel_set_image(tile->panel, img);
	tile->num = num;

	gl_panel_set_callback(tile->panel, tile_clicked, tile);

	return tile;
}

struct gl_panel *tile_get_widget(struct tile *tile)
{
	return tile->panel;
}

void tile_set_pos(struct tile *tile, int x, int y)
{
	tile->x = x;
	tile->y = y;
}

void tile_swap(struct tile *tile1, struct tile *tile2)
{
    int x1, y1, x2, y2;
    struct gl_panel *panel1 = tile1->panel, *panel2 = tile2->panel;

    x1 = tile1->x;
    y1 = tile1->y;
    x2 = tile2->x;
    y2 = tile2->y;

    //2次元配列での入れ替え
    board[y2][x2] = tile1;
    board[y1][x1] = tile2;
    //表ウィジェットでの入れ替え
    gl_table_remove(table, panel1);
    gl_table_remove(table, panel2);
    gl_table_add(table, panel1, x2, y2);
    gl_table_add(table, panel2, x1, y1);
    //タイル位置の変更
    tile_set_pos(tile1, x2, y2);
    tile_set_pos(tile2, x1, y1);
}

int tile_is_complete(void){
	int x, y, i = 1;
	for(y = 0;y < 4; y++){
		for(x = 0;x < 4; x++){
			if(board[y][x]->num != i){
				return 0;
		}
			i++;
	 }
	}
	return 1;
}
