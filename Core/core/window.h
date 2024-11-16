#ifndef WINDOW_H
#define WINDOW_H

#include "../include/spdlog/spdlog.h"
#include <glfw/glfw3.h>
#include <iostream>

class Window {
    public:
        Window(int height = 600, int width = 900) : Height(height), Width(width) {}
        int CreateNewWindow();
        void OpenWindow();
        void WindowSettings();
        void Terminate();
        void HandleGeneralInput();
        void HandleSceneInput();
        int GetHeight(){
            return Height;
        }
        int GetWidth(){
            return Width;
        }
        void SetHeight(int height){
            Height = height;
        }
        void SetWidth(int width){
            Width = width;
        }

    private:
        GLFWwindow* window;
        int Width = 600;
        int Height = 400;
        bool isOpen;
};

#endif