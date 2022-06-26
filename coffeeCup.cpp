//
// Created by MSY on 6/27/2022.
//

#include <iostream>
#include "coffeeCup.h"

coffeeCup::coffeeCup(float cupSize, float cupFill, const std::string &cupName, tCupTypes type, float coffeeTempreture,
                     const std::string &cupColor, int time) : Cup(cupSize, cupFill, cupName, type),
                                                              coffeeTempreture(coffeeTempreture), cupColor(cupColor),
                                                              time(time) {}

float coffeeCup::getCoffeeTempreture() const {
    return coffeeTempreture;
}

void coffeeCup::setCoffeeTempreture(float coffeeTempreture) {
    coffeeCup::coffeeTempreture = coffeeTempreture;
}

const std::string &coffeeCup::getCupColor() const {
    return cupColor;
}

void coffeeCup::setCupColor(const std::string &cupColor) {
    coffeeCup::cupColor = cupColor;
}

int coffeeCup::getTime() const {
    return time;
}

void coffeeCup::setTime(int time) {
    coffeeCup::time = time;
}

tStatus coffeeCup::cupState() {

    if(cupFill == 0) {
        return empty;
    } else if(coffeeTempreture < 75) {
        return coldDrink;
    } else if(time <= 30) {
        return freshDrink;
    }
}

void coffeeCup::print() const {
    Cup::print();
    std::cout << "coffee tempretue is" << coffeeTempreture << std::endl;
    std::cout << "cup color is" << cupColor << std::endl;
    std::cout << "time since last refill" << time << std::endl;
}
