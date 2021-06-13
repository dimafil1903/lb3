#include "istream"
#include "GLFW/glfw3.h"

#ifndef PROG_H
#define PROG_H

class program {


public:
    program(const std::string &window_title, int window_width, int window_height);

    int width, height;
    void make(const std::string &window_title, int window_width, int window_height);
    int getWidth() const;

    int getHeight() const;

    virtual ~program();

    void start();

    static program *event_handling_instance;


    static void keycallback_dispatch(GLFWwindow *window,
                                     int key,
                                     int scancode,
                                     int action,
                                     int mods);

    virtual void on_keydown(GLFWwindow *window, int key, int scancode, int action, int mods);

    virtual void on_error(int error, const char *desc);

    virtual void on_resize(GLFWwindow *window, int width, int height);

    virtual void glloop() = 0;

    void myloop();


    GLFWwindow *_window;
    GLFWwindow *_window2;



    GLFWwindow * getWindow() ;
};

#endif