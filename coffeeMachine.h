//
// Created by MSY on 6/26/2022.
//

#ifndef CAR_PARK_COFFEEMACHINE_H
#define CAR_PARK_COFFEEMACHINE_H



class coffeeMachine {

public:
    coffeeMachine(float currentCoffee, int coffeePrice, float coffeeCapacity);

    float getCoffeeCapacity() const;

    void setCoffeeCapacity(float coffeeCapacity);

    float getCurrentCoffee() const;

    void setCurrentCoffee(float currentCoffee);

    int getCoffeePrice() const;

    void setCoffeePrice(int coffeePrice);


    float requestCoffee(float amount);


protected:
    float currentCoffee;
    int coffeePrice;
    float coffeeCapacity;
};


#endif //CAR_PARK_COFFEEMACHINE_H
