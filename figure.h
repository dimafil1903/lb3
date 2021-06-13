#ifndef FIGURE_H
#define FIGURE_H

#include "iostream"
#include "program.h"

class figure {
public:

    figure();

    void draw();

public:
    float x=0.0f, y=0.0f;
    float vx=0.0f, vy=0.0f;
    const float gravity = 0.001;
    const float radius = 0.05;
    float length = 0.3;
    float red = 1.0f, green = 1.0f, blue = 1.0f;
    int type;

    void setType(int i);
};

#endif
