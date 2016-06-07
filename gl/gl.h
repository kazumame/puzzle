/*
 * gl.h
 *
 *  Created on: 2010/06/13
 *      Author: kourai
 */

#ifndef GL_H_
#define GL_H_

#include "gl_widget.h"
#include "gl_event.h"
#include "gl_window.h"
#include "gl_dialog.h"
#include "gl_button.h"
#include "gl_tbutton.h"
#include "gl_image.h"
#include "gl_panel.h"
#include "gl_hbox.h"
#include "gl_vbox.h"
#include "gl_table.h"
#include "gl_label.h"

typedef int (*GlCallback)(void *arg);

void gl_init(void);
void gl_main(void);

int gl_timer_add(int timeout, GlCallback callback, void *arg);
void gl_timer_remove(int tag);

#define GL_BACKTRACE() { \
	void *array[10]; \
	char **strings; \
	int size, i; \
	\
	size = backtrace(array, 10); \
	strings = backtrace_symbols(array, size); \
	\
	fprintf(stderr, "Backtrace:\n"); \
	for (i = 0; i < size; i++) \
		fprintf(stderr, "%s\n", strings[i]); \
	\
	free (strings); \
}

#endif /* GL_H_ */
