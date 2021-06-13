//
// Created by Дима Филипенко on 30.03.2021.
//

#include "triangle.h"
#include <cmath>
#include "iostream"


void triangle::draw(figure *f) {
    glColor3f(f->red, f->green, f->blue);

    glBegin(GL_TRIANGLES);
    glVertex2f(-f->length + f->x, -f->length + f->y);
    glVertex2f(f->length + f->x, -f->length + f->y);
    glVertex2f(0 + f->x, 0 + f->y);

    glEnd();

}

triangle::triangle() {

}




