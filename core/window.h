#ifndef WINDOW_H
#define WINDOW_H

#include "../include/spdlog/spdlog.h"
#include <glfw/glfw3.h>
#include <iostream>

class Window {
    public:
        virtual int CreateNewWindow() = 0;
        virtual void OpenWindow() = 0;
        virtual void WindowSettings() = 0;
        virtual void Terminate() = 0;
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