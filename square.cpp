//
// Created by Дима Филипенко on 30.03.2021.
//

#include "square.h"
#include <cmath>
#include "iostream"


void square::draw(figure *f) {
    glColor3f(f->red, f->green, f->blue);

    glBegin(GL_POLYGON);

    glVertex2f(-f->length + f->x, -f->length + f->y);
    glVertex2f(-f->length + f->x, f->length + f->y);
    glVertex2f(f->length + f->x, f->length + f->y);
    glVertex2f(f->length + f->x, -f->length + f->y);
    glEnd();
}

square::square() {

}




