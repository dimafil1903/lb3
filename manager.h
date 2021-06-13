#ifndef manager_H
#define manager_H

#include "iostream"
#include "program.h"
#include <array>
#include <vector>


#include "figure.h"

using namespace std;

class manager : public program {
public:
    std::vector<figure> figureVector;
    figure *f;

    manager(const std::string &window_title, int window_width, int window_height) :
            program{window_title, window_width, window_height} {
        this->readSaved();

    }

    void on_keydown(GLFWwindow *window, int key, int scancode, int action, int mods) override;

    void glloop() override;
    void saveToFile();
    void readSaved();
public:
    int type;


    int getRandomType();
};

#endif
