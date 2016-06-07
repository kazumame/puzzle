/*
 * gl_window.h
 *
 *  Created on: 2010/06/13
 *      Author: kourai
 */

#ifndef GL_WINDOW_H_
#define GL_WINDOW_H_

struct gl_window;

struct gl_window *gl_window_new(char *title);
void gl_window_add(struct gl_window *window, void *widget);
void gl_window_remove(struct gl_window *window, void *widget);
void gl_window_set_color(struct gl_window *window, char *col);

#endif /* GL_WINDOW_H_ */
