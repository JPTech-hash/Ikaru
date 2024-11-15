#include "window.h"


int Window::CreateNewWindow(){
    if (!glfwInit()){
        std::cerr << "GLFW FAILED TO INITIALIZE" << std::endl;
        return -1;
    }
    spdlog::info("Creating the window");
    window = glfwCreateWindow(Width, Height, "ikaru", nullptr, nullptr);
    if (!window) {
        std::cerr << "WINDOW INITIALIZATION FAILED" << std::endl;
        return -1;
    }
    glfwMakeContextCurrent(window);
    return 0;
}