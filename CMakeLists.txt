cmake_minimum_required(VERSION 3.17)
project(lb3)




set(CMAKE_CXX_STANDARD 11)

add_executable(lb3 main.cpp program.cpp ball.cpp triangle.cpp square.cpp figure.cpp Manager.cpp)

find_package(glfw3 3.3 REQUIRED)
find_package(GLEW REQUIRED)
find_package(GLUT REQUIRED)
target_link_libraries(lb3 glfw)


find_package(OpenGL REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )


if (APPLE)
    target_link_libraries(lb3 ${GLEW_LIBRARY})
    target_link_libraries(lb3 "-framework GLUT")
    target_link_libraries(lb3 "-framework OpenGL")
endif()
target_link_libraries(lb3 glfw)
target_link_libraries(lb3 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )
target_link_libraries(lb3 OpenGL::GL)

target_link_libraries(lb3 glfw ${GLEW_LIBRARIES})
