//
// Created by katiikat on 4/19/20.
//

#include "Order.h"
#include <thread>
#include <unistd.h>


bool Order::isReady()
{
    return ready;
}

void Order::done()
{
    std::cout << "\n" << this->menuItem << " is ready in the kitchen." << std::endl;
    ready = true;
}

void Order::start()
{
    t = new std::thread(&Order::cook, this);
}

Order::Order(std::string menuItem, int menuPrice)
{
    this->menuItem = menuItem;
    this->menuPrice = menuPrice;
    this->cookTime = rand() % 10;
    this->ready = false;

}

void Order::cook()
{
    usleep(this->cookTime * 1000000);
    //after time has past, send the ping to alert
    done();
}

void Order::wait()
{
    t->join();
}

const std::string &Order::getMenuItem() const {
    return menuItem;
}

int Order::getMenuPrice() const {
    return menuPrice;
}

int Order::getCookTime() const {
    return cookTime;
}
