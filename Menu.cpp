//
// Created by katiikat on 4/19/20.
//

#include "Menu.h"
#include "Order.h"
#include <iostream>
#include <fstream>
#include <sstream>


void Menu::getRandom()
{

}

void Menu::createMenu()
{
    //create a file for writing
    //user input -- choose 1 for adding an item to the menu
    //user input -- choose 2 to continue on
    //must have at least 1 item on the menu
    //user input order -- food item (string) , food item price (float)

    //ofstream means that I can open a file for the purpose of writing to it.
    std::ofstream writeToFile;
    std::string menuItem;
    float menuItemPrice;
    std::string line;

    //              NOTES
    //ios::app : Append to the end of the file
    //ios::trunc : If the exists delete content
    //ios::in : Open file for reading
    //ios::out : Open file for writing
    //ios::ate : Open writing and move to the end of the file

    //ios_base::out for the purpose of writing, not reading.
    writeToFile.open("Menu.txt", std::ios_base::out);

    int choice;
    do
    {
        std::cout << "\nEnter an item to add to the menu: ";
        std::getline(std::cin, menuItem);
        menuItems.push_back(menuItem);
        std::cout << "\nEnter a price for " << menuItem << ":";
        std::getline(std::cin, line);
        std::stringstream(line) >> menuItemPrice;
        menuPrices.push_back(menuItemPrice);

        std::cout << "\nWhat Next? \n1: Add to Menu \n2: Open Restaurant" << std::endl;
        std::getline(std::cin, line);
        std::stringstream(line) >> choice;

        if(choice == 1)
        {
            //do nothing
        }
        else if(choice == 2)
        {
            break;
        }
        else
        {
            std::cout << "\nPlease enter either numerical 1 or 2." << std::endl;
            std::cin >> choice;
        }

    }while(choice == 1);

    writeToFile.close();
}

int Menu::size()
{
    return menuItems.size();
}

Order Menu::getItem(int menuIndex)
{
    return Order(menuItems.at(menuIndex), menuPrices.at(menuIndex));
}

