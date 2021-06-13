#ifndef ball_H
#define ball_H

#include "iostream"
#include "figure.h"

class ball : public figure {
public:
    ball();

    void draw(figure *f);
};

#endif
