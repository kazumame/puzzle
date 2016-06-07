/*
 * main.c
 *
 *  Created on: 2015/07/21
 *      Author: m237083j
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gl/gl.h"
#include "tile.h"
#include "counter.h"

struct gl_table *table;
struct tile *board[4][4];
struct counter *step;

int main(void)
{
	struct gl_window *window;
	struct gl_panel *panel;
	struct gl_hbox *hbox;
	struct gl_vbox *vbox;
	struct tile *tile;
	struct counter *timer;
	int x,y,k,tmp,i = 0;
	int init[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	gl_init();
	counter_init();
    srandom(time(NULL));
	window = gl_window_new("15 Puzzle");
	table = gl_table_new(4, 4);
	hbox = gl_hbox_new();
	vbox = gl_vbox_new();
	step = counter_new();
	timer = counter_new();

	counter_set_num(step, 0);
	counter_set_num(timer, 0);
	counter_start(timer);

	//シャッフル
	for(x = 1; x <= 10; x++){
	        k = (random() % 14) + 1;
	        tmp = init[0];
	        init[0] = init[k];
	        init[k] = tmp;
	    }
	for(y = 0; y < 4; y++){
		for(x = 0; x < 4; x++){
            tile = tile_new(init[i]);
            i++;
            board[y][x] = tile;
            tile_set_pos(tile, x, y);
            panel = tile_get_widget(tile);
			gl_table_add(table, panel, x, y);

		}
	}

    gl_hbox_add_left(hbox,counter_get_widget(step));
    gl_hbox_add_right(hbox,counter_get_widget(timer));
	gl_vbox_add_top(vbox, hbox);
	gl_vbox_add_bottom(vbox, table);

	gl_widget_add(window, vbox);

	gl_main();

	return 0;
}
