/*
 * gl_table.h
 *
 *  Created on: 2010/06/13
 *      Author: kourai
 */

#ifndef GL_TABLE_H_
#define GL_TABLE_H_

struct gl_table;

struct gl_table *gl_table_new(int width, int height);
void gl_table_add(struct gl_table *table, void *widget, int x, int y);
void gl_table_remove(struct gl_table *table, void *widget);

#endif /* GL_TABLE_H_ */
