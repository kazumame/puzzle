/*
 * gl_panel.h
 *
 *  Created on: Jun 19, 2012
 *      Author: kourai
 */

#ifndef GL_PANEL_H_
#define GL_PANEL_H_

#include "gl_event.h"

struct gl_panel;
struct gl_image;

struct gl_panel *gl_panel_new(void);
void gl_panel_destroy(struct gl_panel *panel);
void gl_panel_set_image(struct gl_panel *panel, struct gl_image *img);
void gl_panel_set_color(struct gl_panel *panel, char *color);
void gl_panel_set_callback(struct gl_panel *panel, GlMouseCb callback, void *arg);

#endif /* GL_PANEL_H_ */
