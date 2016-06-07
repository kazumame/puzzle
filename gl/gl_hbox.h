/*
 * gl_hbox.h
 *
 *  Created on: 2010/06/13
 *      Author: kourai
 */

#ifndef GL_HBOX_H_
#define GL_HBOX_H_

struct gl_hbox;

struct gl_hbox *gl_hbox_new(void);
void gl_hbox_add_left(struct gl_hbox *hbox, void *widget);
void gl_hbox_add(struct gl_hbox *hbox, void *widget);
void gl_hbox_add_right(struct gl_hbox *hbox, void *widget);
void gl_hbox_remove(struct gl_hbox *hbox, void *widget);
void gl_hbox_set_spacing(struct gl_hbox *hbox, int spacing);

#endif /* GL_HBOX_H_ */
