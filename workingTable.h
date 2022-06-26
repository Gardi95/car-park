//
// Created by MSY on 6/27/2022.
//

#ifndef CAR_PARK_WORKINGTABLE_H
#define CAR_PARK_WORKINGTABLE_H

#include "coffeeCup.h"
#include "Cup.h"

class workingTable {

protected:

    int amountOfEmptyCups;
    int amountOfFullCups;



public:
    workingTable(int amountOfEmptyCups, int amountOfFullCups);

    int getAmountOfEmptyCups() const;

    void setAmountOfEmptyCups(int amountOfEmptyCups);

    int getAmountOfFullCups() const;

    void setAmountOfFullCups(int amountOfFullCups);

    void procesCup(Cup* cup);

};


#endif //CAR_PARK_WORKINGTABLE_H
