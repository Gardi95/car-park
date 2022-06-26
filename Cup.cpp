//
// Created by MSY on 6/27/2022.
//

#include <iostream>
#include "Cup.h"

Cup::Cup(float cupSize, float cupFill, const std::string &cupName, tCupTypes type) : cupSize(cupSize), cupFill(cupFill),
                                                                                     cupName(cupName), type(type) {}

float Cup::getCupSize() const {
    return cupSize;
}

void Cup::setCupSize(float cupSize) {
    Cup::cupSize = cupSize;
}

float Cup::getCupFill() const {
    return cupFill;
}

void Cup::setCupFill(float cupFill) {
    Cup::cupFill = cupFill;
}

const std::string &Cup::getCupName() const {
    return cupName;
}

void Cup::setCupName(const std::string &cupName) {
    Cup::cupName = cupName;
}

tCupTypes Cup::getType() const {
    return type;
}

void Cup::setType(tCupTypes type) {
    Cup::type = type;
}

void Cup::fillCup(coffeeMachine *CoffeeMachine) {
    cupFill = CoffeeMachine->requestCoffee(cupSize);
}

void Cup::print() const {
    std::cout << "cup name is: " << cupName << std::endl;
    std::cout << "cup fill is: " << cupFill << std::endl;
    std::cout << "cup size is: " << cupSize << std::endl;
}
