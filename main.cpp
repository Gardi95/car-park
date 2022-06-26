#include <iostream>
#include <string>

#include "Cup.h"
#include "coffeeCup.h"
#include "workingTable.h"
#include "coffeeMachine.h"



int main() {

    coffeeCup* c01 = new coffeeCup(100, 100, "hello", CoffeeCup, 80, "yellow", 10);

    c01->print();


    return 0;
}
