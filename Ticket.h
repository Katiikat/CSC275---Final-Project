//
// Created by katiikat on 4/19/20.
//

#ifndef CPLUSPLUS_FINAL_II_TICKET_H
#define CPLUSPLUS_FINAL_II_TICKET_H
#include <iostream>
#include <vector>
#include "Order.h"


class Ticket
{
public:
    Ticket();
    void start();
    void addOrder(Order x);
    int size();
    float getPrice();
    void wait();
    void isReady();

private:
    std::vector<Order> orders;
};


#endif //CPLUSPLUS_FINAL_II_TICKET_H
