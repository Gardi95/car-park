//
// Created by MSY on 6/27/2022.
//

#ifndef CAR_PARK_CUP_H
#define CAR_PARK_CUP_H

#include <string>

enum tCupTypes {
    coffeeCup,
    teaCup,
    universalCup
};

enum tStatus {
    freshDrink,
    coldDrink,
    empty
};




class Cup {

protected:

float cupSize;
float cupFill;
std::string cupName;
tCupTypes type;




public:

    Cup(float cupSize, float cupFill, const std::string &cupName, tCupTypes type);

    float getCupSize() const;

    void setCupSize(float cupSize);

    float getCupFill() const;

    void setCupFill(float cupFill);

    const std::string &getCupName() const;

    void setCupName(const std::string &cupName);

    tCupTypes getType() const;

    void setType(tCupTypes type);

};


#endif //CAR_PARK_CUP_H
