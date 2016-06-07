/*
 * gl_widget.h
 *
 *  Created on: 2010/06/13
 *      Author: kourai
 */

#ifndef GL_WIDGET_H_
#define GL_WIDGET_H_

#include "gl.h"

struct gl_widget;

void gl_widget_add(struct gl_widget *container, void *widget);
void gl_widget_remove(struct gl_widget *container, void *widget);
void gl_widget_show(struct gl_widget *widget);
void gl_widget_destroy(struct gl_widget *widget);

void gl_widget_set_size(struct gl_widget *widget, int width, int height);
void gl_widget_set_bgcolor(struct gl_widget *widget, char *col);
void gl_widget_set_fgcolor(struct gl_widget *widget, char *col);

#endif /* GL_WIDGET_H_ */
