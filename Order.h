//
// Created by katiikat on 4/19/20.
//

#ifndef CPLUSPLUS_FINAL_II_ORDER_H
#define CPLUSPLUS_FINAL_II_ORDER_H
#include <iostream>
#include <thread>

class Order
{
public:

    Order(std::string menuItem, int menuPrice);
    //returns boolean if the kitchen is finished cooking the menu item
    bool isReady();
    //alerts on screen that the food is ready to be picked up and served
    void done();
    void start();
    void cook();
    void wait();

    const std::string &getMenuItem() const;

    int getMenuPrice() const;

    int getCookTime() const;

private:
    std::thread* t;
    bool ready;
    std::string menuItem;
    int menuPrice;
    int cookTime;
};


#endif //CPLUSPLUS_FINAL_II_ORDER_H
