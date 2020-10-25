#include <iostream>
#include <string>
#include <thread>
#include "Kellergame.h"

int main() {
    std::string input = "";
    cKellergame game = cKellergame();

    std::cout << "Welcome to the KELLERGAME!" << std::endl;

    std::thread t1(&cKellergame::idlePoints, &game);
    t1.detach();

    do {
        std::getline(std::cin, input);
        
        if (input == "L") {
            game.requestLP();
        }

    } while(input != "Bin Raus");
    

    return 0;
}