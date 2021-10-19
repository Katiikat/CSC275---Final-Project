//
// Created by katiikat on 4/19/20.
//

#ifndef CPLUSPLUS_FINAL_II_TABLE_H
#define CPLUSPLUS_FINAL_II_TABLE_H
#include <iostream>
#include <vector>
#include "Order.h"
#include "Menu.h"
#include "Ticket.h"

class Table
{
public:
    Table(Menu menu, int i);
    Ticket takeOrder(int partySize);
    void pay(Ticket x);

private:
    Menu menu;
    float bill;
    int iD;
};


#endif //CPLUSPLUS_FINAL_II_TABLE_H