#ifndef square_H
#define square_H

#include "iostream"
#include "figure.h"

class square : public figure {
public:
    square();

    void draw(figure *f);

};

#endif
