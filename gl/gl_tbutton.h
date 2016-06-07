/*
 * gl_tbutton.h
 *
 *  Created on: 2010/06/12
 *      Author: kourai
 */

#ifndef GL_TBUTTON_H_
#define GL_TBUTTON_H_

#include "gl_event.h"

struct gl_tbutton;

struct gl_tbutton *gl_tbutton_new(void);
void gl_tbutton_destroy(struct gl_tbutton *button);
void gl_tbutton_set_label(struct gl_tbutton *button, char *label);
void gl_tbutton_set_image(struct gl_tbutton *button, struct gl_image *img);
void gl_tbutton_activate(struct gl_tbutton *button);
void gl_tbutton_inactivate(struct gl_tbutton *button);
void gl_tbutton_set_callback(struct gl_tbutton *button, GlMouseCb callback, void *arg);
void gl_tbutton_add(struct gl_tbutton *button, void *widget);
void gl_tbutton_remove(struct gl_tbutton *button, void *widget);
void gl_tbutton_set_size(struct gl_tbutton *button, int width, int height);

#endif /* GL_TBUTTON_H_ */
