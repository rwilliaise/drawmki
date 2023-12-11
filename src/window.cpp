
#include <drawmki/drawmki.hpp>
#include <drawmki/window.h>

#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <stdexcept>

namespace drawmki {

window::window() {
    if (glfwInit() != GLFW_TRUE)
        throw std::runtime_error("Failed to initialize GLFW.");

    ptr = glfwCreateWindow(640, 480, "Alpha", nullptr, nullptr);

    if (ptr == nullptr)
        throw std::runtime_error("Failed to create window.");

    glfwMakeContextCurrent(ptr);
    gladLoadGL(glfwGetProcAddress);
}

window::~window() {
    glfwTerminate();
}

int window::run() {
    while (!glfwWindowShouldClose(ptr)) {
        glfwSwapBuffers(ptr);
        glfwPollEvents();
    }

    return 0;
}

}
