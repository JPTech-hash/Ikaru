#include "engine.h"

int main(void){
    try {
        Engine engine;
        spdlog::info("Running the engine at startpoint.cpp");
        engine.run();
        spdlog::info("The engine has ran at startpoint.cpp");
    } catch (const std::exception e){
        std::cerr << "There was an error that happened when trying to initialize the engine: " << e.what() << std::endl;
        return -1;
    }
    return 0;
}