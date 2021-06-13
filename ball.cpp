//
// Created by Дима Филипенко on 30.03.2021.
//

#include "ball.h"
#include <cmath>
#include "iostream"

void  ball::draw(figure* f)
{


    glMatrixMode(GL_PROJECTION);

//    glOrtho(-ratio, ratio, -1.f, 1.f, 1.f, -1.f);
    glMatrixMode(GL_MODELVIEW);

    //Bounce on window bottom
    if (f->y + f->radius <= f->radius)
        f->vy = abs(f->vy);
    else
        f->vy -= f->gravity; //Apply gravity

//    if (x_ball + radius <= radius)
//        vx_ball = abs(vx_ball);
//    else
//        vx_ball -= gravity; //Apply gravity
    //Update ball coordinates
    f->x += f->vx;
    f->y += f->vy;
    const float full_angle = 2.0f*3.141592654f;
    float x_a, y_a;

    glBegin(GL_POLYGON);
    glColor3f(f->red, f->green, f->blue);

    for (std::size_t i = 0; i < 50; ++i)
    {
        x_a = f->x + f->length*(cos(i*full_angle / 50.0f));
        y_a = f->y + f->length*(sin(i*full_angle / 50.0f));
        glVertex2f(x_a, y_a);
    }

    glEnd();


}

ball::ball() {

}




