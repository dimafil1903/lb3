//
// Created by Дима Филипенко on 30.03.2021.
//

#include "figure.h"
#include <cmath>
#include "iostream"
#include "ball.h"
#include "triangle.h"
#include "square.h"

void figure::draw() {

    if (type == 1) {
        auto *b = new triangle();
        b->draw(this);
    }
    if (type == 2) {
        auto *b = new ball();
        b->draw(this);
    }
    if (type == 3) {
        auto *b = new square();
        b->draw(this);
    }
}

figure::figure() {

};

void figure::setType(int i) {
    this->type = i;
    std::cout << type << std::endl;

};







