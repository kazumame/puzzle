/*
 * gl_event.h
 *
 *  Created on: 2010/06/13
 *      Author: kourai
 */

#ifndef GL_EVENT_H_
#define GL_EVENT_H_

struct gl_mouse_event;
struct gl_widget;

typedef void (*GlMouseCb)(struct gl_mouse_event *event, void *arg);

struct gl_mouse_event *gl_mouse_event_new(int button);
void gl_mouse_event_destroy(struct gl_mouse_event *event);
int gl_mouse_button_num(struct gl_mouse_event *event);
int gl_mouse_left_button(struct gl_mouse_event *event);
int gl_mouse_right_button(struct gl_mouse_event *event);
void gl_mouse_event_set_callback(struct gl_widget *widget, char *etype,
		GlMouseCb callback, void *arg, int delegate);

#endif /* GL_EVENT_H__ */
