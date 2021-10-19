#include <iostream>

#include "Menu.h"
#include "Kitchen.h"
#include "Order.h"
#include "Table.h"
#include "Story.h"

void prompt(std::string output)
{
    std::cout << output << std::endl;
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    //creation of all necessary objects
    Story storyObj;
    Menu menuObj;
    Kitchen kitchenObj;

    //user intro
    storyObj.Intro();
    //creation of the Menu
    menuObj.createMenu();
    Table tableObj(menuObj, 0);
    //now the menu has food items, and prices for each, time to open the store
    int partySize = storyObj.openingTheStore();

    Ticket ticket = tableObj.takeOrder(partySize);
    kitchenObj.submitOrder(&ticket);
    try
    {
        ticket.isReady();
    }
    catch(std::exception)
    {
        std::cout << "\nOrder is not ready."<< std::endl;
    }
    ticket.wait();
    try
    {
        ticket.isReady();
        std::cout << "\nOrder is ready." << std::endl;
    }
    catch(std::exception)
    {
        std::cout << "\nOrder is not ready."<< std::endl;
    }
    tableObj.pay(ticket);


    return 0;
}
