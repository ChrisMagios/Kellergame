#include "Punktestand.h"

cPunktestand::cPunktestand() {
    this->kellerPunkte = 10;
    this->lorinPunkte = 0;
}

void cPunktestand::incKP() {
    this->kellerPunkte += 1 * lorinPunkte; 
}

bool cPunktestand::buyLP() {
    if (this->kellerPunkte >= 10) {
        this->lorinPunkte++;
        this->kellerPunkte -= 10;
        return true;
    }
    return false;     
}