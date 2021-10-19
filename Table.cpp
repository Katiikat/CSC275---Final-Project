//
// Created by katiikat on 4/19/20.
//

#include "Table.h"
#include "Menu.h"
#include "Order.h"
#include "Kitchen.h"

Ticket Table::takeOrder(int partySize)
{
    std::cout << "\nAfter a few minutes to review the menu, the customers are ready to order."<< std::endl;
    Ticket orders;

    for(int x = 0; x < partySize; x++)
    {
        int whatToOrder;
        whatToOrder = rand() % menu.size();
        Order order = menu.getItem(whatToOrder);
        std::cout << "\n\"I would like the " << order.getMenuItem() << "\"";
        orders.addOrder(order);
    }

    std::cout << "\nYou head to the kitchen to submit the orders." << std::endl;
    return orders;
}

void Table::pay(Ticket x)
{
    std::cout << "\nTable " << iD << " has paid " << x.getPrice() << "." << std::endl;
}

Table::Table(Menu menu, int iD)
{
 this->menu = menu;
 this->iD = iD;
}
