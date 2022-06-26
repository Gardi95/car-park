//
// Created by MSY on 6/27/2022.
//

#include <iostream>
#include "workingTable.h"

workingTable::workingTable(int amountOfEmptyCups, int amountOfFullCups) : amountOfEmptyCups(0),
                                                                          amountOfFullCups(0) {}

int workingTable::getAmountOfEmptyCups() const {
    return amountOfEmptyCups;
}

void workingTable::setAmountOfEmptyCups(int amountOfEmptyCups) {
    workingTable::amountOfEmptyCups = amountOfEmptyCups;
}

int workingTable::getAmountOfFullCups() const {
    return amountOfFullCups;
}

void workingTable::setAmountOfFullCups(int amountOfFullCups) {
    workingTable::amountOfFullCups = amountOfFullCups;
}

void workingTable::procesCup(Cup *cup) {

    if(cup->cupState() == empty) {
        std::cout << "NEXT EMPTY CUP" << std::endl;
        amountOfEmptyCups++;
    } else{
        std::cout << "NEXT FULL CUP" << std::endl;
        amountOfFullCups++;
    }

    std::cout << "number of empty cup" << amountOfEmptyCups << "number of full cups" <<  amountOfFullCups <<std::endl;

}
