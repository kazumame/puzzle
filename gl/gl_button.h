/*
 * gl_button.h
 *
 *  Created on: 2010/06/21
 *      Author: kourai
 */

#ifndef GL_BUTTON_H_
#define GL_BUTTON_H_

#include "gl_event.h"

struct gl_button;
struct gl_image;

struct gl_button *gl_button_new(void);
void gl_button_destroy(struct gl_button *button);
void gl_button_set_label(struct gl_button *button, char *label);
void gl_button_set_image(struct gl_button *button, struct gl_image *img);
void gl_button_set_callback(struct gl_button *button, GlMouseCb callback, void *arg);
void gl_button_add(struct gl_button *button, void *widget);
void gl_button_remove(struct gl_button *button, void *widget);
void gl_button_set_size(struct gl_button *button, int width, int height);

#endif /* GL_BUTTON_H_ */
