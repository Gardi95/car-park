//
// Created by MSY on 6/26/2022.
//

#include "coffeeMachine.h"

float coffeeMachine::getCoffeeCapacity() const {
    return coffeeCapacity;
}

void coffeeMachine::setCoffeeCapacity(float coffeeCapacity) {
    coffeeMachine::coffeeCapacity = coffeeCapacity;
}

float coffeeMachine::getCurrentCoffee() const {
    return currentCoffee;
}

void coffeeMachine::setCurrentCoffee(float currentCoffee) {
    coffeeMachine::currentCoffee = currentCoffee;
}

int coffeeMachine::getCoffeePrice() const {
    return coffeePrice;
}

void coffeeMachine::setCoffeePrice(int coffeePrice) {
    coffeeMachine::coffeePrice = coffeePrice;
}

float coffeeMachine::requestCoffee(float amount) {

    float temp = currentCoffee - amount;
    if(temp >= 0) {
        return temp;
    } else {
        return currentCoffee;
    }
}

coffeeMachine::coffeeMachine(float currentCoffee, int coffeePrice, float coffeeCapacity) : currentCoffee(currentCoffee),
                                                                                           coffeePrice(coffeePrice),
                                                                                           coffeeCapacity(
                                                                                                   coffeeCapacity) {}
