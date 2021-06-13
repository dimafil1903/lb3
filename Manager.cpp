//
// Created by Дима Филипенко on 30.03.2021.
//

#include "manager.h"
#include "ball.h"
#include "triangle.h"
#include <cmath>
#include "iostream"
#include <chrono>
#include <thread>
#include <fstream>

#include <sstream>
#include <string>

void manager::on_keydown(GLFWwindow *window, int key, int scancode, int action, int mods) {

//    std::cout << key << endl;
    if (key == GLFW_KEY_ENTER && action == GLFW_PRESS) {
        figureVector.push_back(*(new figure()));
        figureVector.back().setType(this->getRandomType());
        figureVector.back().red = (double) rand() / (RAND_MAX + 1.0f);
        figureVector.back().green = (double) rand() / (RAND_MAX + 1.0f);
        figureVector.back().blue = (double) rand() / (RAND_MAX + 1.0f);
    }
    if (key == 259 && action == GLFW_PRESS) {
//        printf("del");
        if (!figureVector.empty())
            figureVector.pop_back();
    }
    if (key == GLFW_KEY_1 && action == GLFW_PRESS) {
        figureVector.back().setType(1);
    }
    if (key == GLFW_KEY_2 && action == GLFW_PRESS) {
        figureVector.back().setType(2);
    }
    if (key == GLFW_KEY_3 && action == GLFW_PRESS) {
        figureVector.back().setType(3);
    }
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        this->saveToFile();
        glfwSetWindowShouldClose(window, 1);
    }
    if (key == GLFW_KEY_RIGHT)
        figureVector.back().x += 0.1;
    if (key == GLFW_KEY_LEFT)
        figureVector.back().x -= 0.1;
    if (key == GLFW_KEY_UP)
        figureVector.back().y += 0.1;
    if (key == GLFW_KEY_DOWN)
        figureVector.back().y -= 0.1;
    if (glfwGetKey(window, GLFW_KEY_MINUS) == GLFW_PRESS &&
        glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS) {
        if (figureVector.back().length >= 0.1)
            figureVector.back().length -= 0.05;
    }
    if (glfwGetKey(window, GLFW_KEY_EQUAL) == GLFW_PRESS &&
        glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS) {
        figureVector.back().length += 0.05;
    }
    if (key == GLFW_KEY_SPACE) {
        figureVector.back().red = (double) rand() / (RAND_MAX + 1.0);
        figureVector.back().green = (double) rand() / (RAND_MAX + 1.0);
        figureVector.back().blue = (double) rand() / (RAND_MAX + 1.0);
    }
}


void manager::glloop() {
    std::this_thread::sleep_for(std::chrono::milliseconds(20));
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    for (auto &it : figureVector) {
        it.draw();
    }

}

int manager::getRandomType() {
    return rand() % 3 + 1;     // v2 in the range 1 to 100

}

void manager::readSaved() {

    std::ifstream infile("save.txt");
    std::string line;
    while (std::getline(infile, line)) {
        std::istringstream iss(line);
        if (iss) {

            figureVector.push_back(*(new figure()));
            iss >>
                figureVector.back().type >>
                figureVector.back().length >>
                figureVector.back().x >>
                figureVector.back().y >>
                figureVector.back().vy >>
                figureVector.back().vx >>
                figureVector.back().red >>
                figureVector.back().green >>
                figureVector.back().blue;
            // error
            cout << line << endl;
        }
        // process pair (a,b)
    }
    infile.close();
};

void manager::saveToFile() {
    ofstream myFile;
    myFile.open("save.txt");


    for (auto &it : figureVector) {

        myFile << it.type << " "
        << it.length << " "
        << it.x<< std::setprecision(4)<< " "
        << it.y<< std::setprecision(4) << " "
        << it.vy<< std::setprecision(4) << " "
        << it.vx<< std::setprecision(4) << " "
        << it.red << " "
        << it.green << " "
        << it.blue  << endl;
    }
    myFile.close();
}



