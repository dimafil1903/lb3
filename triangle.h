#ifndef Triangle_H
#define Triangle_H

#include "iostream"
#include "figure.h"

class triangle : public figure {
public:
    triangle();

    void draw(figure *f);

};

#endif
