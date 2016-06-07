/*
 * tile.h
 *
 *  Created on: 2015/07/21
 *      Author: m237083j
 */

#ifndef TILE_H_
#define TILE_H_

struct tile;

struct tile *tile_new(int num);
struct gl_panel *tile_get_widget(struct tile *tile);
void tile_clicked(struct gl_mouse_event *event,void *arg);
void tile_set_pos(struct tile *tile, int x, int y);
void tile_swap(struct tile *tile1, struct tile *tile2);
int tile_is_complete(void);

#endif /* TILE_H_ */
