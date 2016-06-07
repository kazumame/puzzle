/*
 * gl_vbox.h
 *
 *  Created on: 2010/06/13
 *      Author: kourai
 */

#ifndef GL_VBOX_H_
#define GL_VBOX_H_

struct gl_vbox;

struct gl_vbox *gl_vbox_new(void);
void gl_vbox_add_top(struct gl_vbox *vbox, void *widget);
void gl_vbox_add_bottom(struct gl_vbox *vbox, void *widget);
void gl_vbox_add(struct gl_vbox *vbox, void *widget);
void gl_vbox_remove(struct gl_vbox *vbox, void *widget);
void gl_vbox_set_spacing(struct gl_vbox *vbox, int spacing);

#endif /* GL_VBOX_H_ */
