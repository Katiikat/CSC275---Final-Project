//
// Created by katiikat on 4/19/20.
//
#include <iostream>
#include <vector>
#include "Order.h"

#ifndef CPLUSPLUS_FINAL_II_MENU_H
#define CPLUSPLUS_FINAL_II_MENU_H


class Menu
{
public:
    int size();
    Order getItem(int menuIndex);
    std::vector<std::string> menuItems;
    std::vector<float> menuPrices;
    void getRandom();
    void createMenu();

};


#endif //CPLUSPLUS_FINAL_II_MENU_H
