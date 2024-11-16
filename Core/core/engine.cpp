#include "engine.h"

int Engine::run(){
    spdlog::info("Running CreateNewWindow at engine.cpp");
    window.CreateNewWindow();
    spdlog::info("Running OpenWindow at engine.cpp");
    window.OpenWindow();
    return 0;
}