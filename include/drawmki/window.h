
#pragma once

struct GLFWwindow;
namespace drawmki {

class window {
public:
    window();
    ~window();

    // move-only
    window(const window &other) = delete;
    window &operator=(const window &other) = delete;
    window(window &&other) = default;
    window &operator=(window &&other) = default;

    int run();

private: 
    GLFWwindow *ptr;
};

} // namespace drawmki
