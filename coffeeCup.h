//
// Created by MSY on 6/27/2022.
//

#ifndef CAR_PARK_COFFEECUP_H
#define CAR_PARK_COFFEECUP_H

#include "Cup.h"
#include <string>

class coffeeCup : public Cup {

protected:

float coffeeTempreture;
std::string cupColor;
int time;


public:
    coffeeCup(float cupSize, float cupFill, const std::string &cupName, tCupTypes type, float coffeeTempreture,
              const std::string &cupColor, int time);

    float getCoffeeTempreture() const;

    void setCoffeeTempreture(float coffeeTempreture);

    const std::string &getCupColor() const;

    void setCupColor(const std::string &cupColor);

    int getTime() const;

    void setTime(int time);

    tStatus cupState();

    void print() const;



};


#endif //CAR_PARK_COFFEECUP_H
