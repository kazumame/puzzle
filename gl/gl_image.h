/*
 * image.h
 *
 *  Created on: 2010/06/12
 *      Author: kourai
 */

#ifndef GL_IMAGE_H_
#define GL_IMAGE_H_

struct gl_image;

struct gl_image *gl_image_new(char *filename);
void gl_image_destroy(struct gl_image *img);
struct gl_image *gl_image_get(struct gl_image *img);
void gl_image_put(struct gl_image *img);

#endif /* GL_IMAGE_H_ */
