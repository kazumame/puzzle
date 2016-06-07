/*
 * gl_label.h
 *
 *  Created on: Mar 23, 2011
 *      Author: kourai
 */

#ifndef GL_LABEL_H_
#define GL_LABEL_H_

struct gl_label;

struct gl_label *gl_label_new(char *text);
void gl_label_set_text(struct gl_label *label, const char *text);
int gl_label_set_font(struct gl_label *label, char *name, int size);
void gl_label_set_fontname(struct gl_label *label, char *name);
void gl_label_set_fontsize(struct gl_label *label, int size);
void gl_label_set_size(struct gl_label *label, int width, int height);
void gl_label_set_color(struct gl_label *label, char *fgcol, char *bgcol);

#endif /* GL_LABEL_H_ */
