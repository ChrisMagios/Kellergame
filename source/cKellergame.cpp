#include <unistd.h>
#include <iostream>
#include "Kellergame.h"


cKellergame::cKellergame() {
    this->ps = cPunktestand();
}

void cKellergame::idlePoints() {
    while (true) {
        usleep(1000000);
        this->ps.incKP();
    }
}   

void cKellergame::requestLP() {
    if(this->ps.buyLP()){
        std::cout << "Jetz haste mehr Lorins in deinem Keller!" << std::endl;
    }
    else {
        std::cout << "Lorin hat heute Nachtschicht und will nicht in deinen Keller!" << std::endl;
    }
}