/*
 * counter.h
 *
 *  Created on: 2015/07/21
 *      Author: m237083j
 */

#ifndef COUNTER_H_
#define COUNTER_H_

struct counter;

void counter_init(void);
struct counter *counter_new(void);
struct gl_hbox *counter_get_widget(struct counter *counter);
void counter_set_num(struct counter *counter, int num);
void counter_start(struct counter *counter);
void counter_increase(struct counter *counter);

#endif /* COUNTER_H_ */
