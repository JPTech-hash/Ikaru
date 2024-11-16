#include "window.h"


int Window::CreateNewWindow(){
    if (!glfwInit()){
        std::cerr << "GLFW FAILED TO INITIALIZE" << std::endl;
        Terminate();
        return -1;
    }
    spdlog::info("Creating the window");
    window = glfwCreateWindow(Width, Height, "ikaru", nullptr, nullptr);
    if (!window) {
        std::cerr << "WINDOW INITIALIZATION FAILED" << std::endl;
        Terminate();
        return -1;
    }
    spdlog::info("There isn't any initialization errors");
    glfwMakeContextCurrent(window);
    spdlog::info("Made the current context window");
    return 0;
}

void Window::OpenWindow(){
    while (!glfwWindowShouldClose(window)){
        WindowSettings();
        HandleGeneralInput();
        HandleSceneInput();
        glfwSwapBuffers(window);
    }
    spdlog::info("Terminating the window");
    Terminate();
}

void Window::WindowSettings(){
    glfwPollEvents();
}

void Window::HandleGeneralInput(){
    if (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) && glfwGetKey(window, GLFW_KEY_N)){
        //Create a new project
    }
    else if (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) && glfwGetKey(window, GLFW_KEY_O)){
        //Open an existing project
    }
    else if (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) && glfwGetKey(window, GLFW_KEY_S)) {
        //Save the project
    }
    else if (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) && glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) && glfwGetKey(window, GLFW_KEY_S)){
        //Save all of the scenes and the project files
    }
    else if (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) && glfwGetKey(window, GLFW_KEY_Q)){
        Terminate(); //Quit the application
        return;
    }
}
void Window::HandleSceneInput(){
    if (glfwGetKey(window, GLFW_KEY_W)){
        //Move / translate the tool
    }
    else if (glfwGetKey(window, GLFW_KEY_E)){
        //Rotate the tool
    }
    else if (glfwGetKey(window, GLFW_KEY_R)){
        //Scale the tool
    }
    else if (glfwGetKey(window, GLFW_KEY_F)){
        //Focus on selected object
    }
    else if (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) && glfwGetKey(window, GLFW_KEY_F)){
        //Frame all objects in the scene
    }
    else if (glfwGetKey(window, GLFW_KEY_LEFT_ALT) && glfwGetKey(window, GLFW_MOUSE_BUTTON_LEFT)) {
        //Rotate camera around focus point
    }
    else if (glfwGetKey(window, GLFW_KEY_LEFT_ALT) && glfwGetKey(window, GLFW_MOUSE_BUTTON_RIGHT)){
        //Zoom in or out
    }
    else if (glfwGetKey(window, GLFW_KEY_LEFT_ALT) && glfwGetKey(window, GLFW_MOUSE_BUTTON_MIDDLE)){
        //Pan the camera
    }
}

void Window::Terminate(){
    spdlog::info("This is GLFW Terminate working");
    glfwTerminate();
}