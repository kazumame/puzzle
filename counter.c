/*
 * counter.c
 *
 *  Created on: 2015/07/21
 *      Author: m237083j
 */
#include "gl/gl.h"

struct gl_image *digit[10];

struct counter{
	struct gl_hbox *hbox;
	struct gl_panel *panel[3];
	int num;
};

void counter_init(void)
{
	char filename[32];
	int i;

	for(i = 0; i < 10; i++){
		sprintf(filename, "image/d%d.png",i);
		digit[i] = gl_image_new(filename);
	}
}

int counter_timeout(void *arg)
{
	struct counter *counter = (struct counter *)arg;

	counter_set_num(counter,(counter->num) + 1);

	return 1;
}

struct counter *counter_new(void)
{
    struct counter *counter;
    int i;

    counter = (struct counter *)malloc(sizeof(struct counter));

    counter->hbox = gl_hbox_new();
    counter->num = 0;

    for(i = 0; i < 3; i++){
    	counter->panel[i] = gl_panel_new();
    	gl_panel_set_image(counter->panel[i],digit[0]);
    	gl_hbox_add_left(counter->hbox,counter->panel[i]);
    }
    return counter;
}


struct gl_hbox *counter_get_widget(struct counter *counter)
{
	return counter->hbox;
}


void counter_set_num(struct counter *counter, int num)
{
	int fig;
	int i;

	counter->num = num;

	for(i = 2; i >= 0; i--){
		fig = num % 10;
		num /= 10;

		gl_panel_set_image(counter->panel[i],digit[fig]);
	}
}

void counter_start(struct counter *counter)
{
	gl_timer_add(1000, counter_timeout, counter);
}



void counter_increase(struct counter *counter)
{
	counter_set_num(counter,(counter->num) + 1);
}
