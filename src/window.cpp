
#include <drawmki/window.h>
#include <GLFW/glfw3.h>

#include <stdexcept>

namespace drawmki {

window::window() {
    if (glfwInit() != GLFW_TRUE) {
        throw std::runtime_error("Failed to initialize GLFW.");
    }

    ptr = glfwCreateWindow(640, 480, "Draw: Mark I", nullptr, nullptr);
}

window::~window() {
    glfwTerminate();
}

}
