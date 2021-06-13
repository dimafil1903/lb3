//
// Created by Дима Филипенко on 06.04.2021.
//

#include "program.h"
#include "GLFW/glfw3.h"
#include "iostream"

#ifndef M_PI
# define M_PI 3.141592653
#endif

program::program(const std::string &window_title, int window_width, int window_height) {

    if (!glfwInit())
        throw std::runtime_error
                {
                        "Unable to initialize glfw runtime"
                };

    _window = glfwCreateWindow(window_width, window_height, window_title.c_str(), nullptr, nullptr);
    width=window_width;
    height=window_height;
    if (!_window)
        throw std::runtime_error
                {
                        "Unable to initialize glfw window"
                };

    glfwMakeContextCurrent(_window);
    glfwSwapInterval(10);
}
int program::getWidth() const{
    return this->width;
}

GLFWwindow * program::getWindow(){
    return this->_window;
}
int program::getHeight() const{
    return this->height;
}
program::~program() {
    glfwDestroyWindow(_window);
    glfwTerminate();
}

void program::myloop() {

    while (!glfwWindowShouldClose(_window)) {
        //Here we call our custom loop body
        this->glloop();

        glfwSwapBuffers(_window);
        glfwPollEvents();
        auto keyCallback = [](GLFWwindow *window, int key, int scancode, int action, int mods) {
            auto me = (program *) glfwGetWindowUserPointer(window);
            me->on_keydown(window, key, scancode, action, mods);
        };
        auto resizeCallback = [](GLFWwindow *window, int widthd, int heightd) {
            auto me = (program *) glfwGetWindowUserPointer(window);
            me->on_resize(window,  widthd,  heightd);
        };
        glfwSetWindowUserPointer(_window, this);
        glfwSetKeyCallback(_window, keyCallback);
        glfwSetWindowSizeCallback(_window,resizeCallback);

    }
    glfwDestroyWindow(_window);

    glfwTerminate();


}
void program::make(const std::string &window_title, int window_width, int window_height){

    _window = glfwCreateWindow(window_width, window_height, window_title.c_str(), nullptr, nullptr);
    width=window_width;
    height=window_height;
    if (!_window)
        throw std::runtime_error
                {
                        "Unable to initialize glfw window"
                };

    glfwMakeContextCurrent(_window);
    glfwSwapInterval(10);
}
void program::start() {
    myloop();
}


void program::on_keydown(GLFWwindow *window, int key, int scancode, int action, int mods) {
    //Does nothing by default. Override to customize
}

void program::on_error(int error, const char *desc) {
    //Does nothing by default
}

void program::on_resize(GLFWwindow *window, int widthd, int heightd) {
    //By default rearranges OpenGL viewport to the current framebuffer size.
    glfwGetWindowSize(_window, &width, &height);

    glViewport(0, 0, widthd, heightd);

}


void program::keycallback_dispatch(GLFWwindow *window, int key, int scancode, int action, int mods) {

}
