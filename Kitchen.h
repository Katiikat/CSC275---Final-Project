//
// Created by katiikat on 4/19/20.
//

#ifndef CPLUSPLUS_FINAL_II_KITCHEN_H
#define CPLUSPLUS_FINAL_II_KITCHEN_H
#include <iostream>
#include <vector>
#include "Ticket.h"
#include "Order.h"

class Kitchen
{
public:
    void submitOrder(Ticket* ticket);
    void getOrder(Ticket* order);

private:
};


#endif //CPLUSPLUS_FINAL_II_KITCHEN_H