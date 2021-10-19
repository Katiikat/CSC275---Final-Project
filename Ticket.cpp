//
// Created by katiikat on 4/19/20.
//

#include "Ticket.h"

Ticket::Ticket()
{

}

void Ticket::addOrder(Order x)
{
    orders.push_back(x);
}

int Ticket::size()
{
    return orders.size();
}
float Ticket::getPrice()
{
    float overallTotal = 0;

    for(Order a: orders)
    {
        overallTotal += a.getMenuPrice();
    }
    return overallTotal;
}

void Ticket::start()
{
    for(int i = 0; i < orders.size(); i++)
    {
        orders.at(i).start();
    }
}

void Ticket::wait()
{
    for(int i = 0; i < orders.size(); i++)
    {
        orders.at(i).wait();
    }
}

void Ticket::isReady()
{
    for(int i = 0; i < orders.size(); i++)
    {
        if(!orders.at(i).isReady())
        {
            throw std::exception();
        }
    }
}
