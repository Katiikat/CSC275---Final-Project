//
// Created by katiikat on 4/19/20.
//

#include "Story.h"
#include <iostream>

void Story::Intro()
{
    std::cout << "\n\n\t\t\t ~~~ Welcome to: Restaurant Simulator! ~~~\n\n" << std::endl;
    std::cout << "\nYou are the proud owner and worker of your very own Restaurant!";
    std::cout << "\nToday is a very normal day in your life, wake up and go to the restaurant.";
    std::cout << "\nBefore opening, you always make your daily menu.";
    std::cout << "\nEveryone loves your daily changing menu and look forward to new experiences every day.";
    std::cout << "\nLet's build the menu: " << std::endl;
}

int Story::openingTheStore()
{
    std::cout << "\nNow that the menu is all ready it's time to open her up!";
    std::cout << "\nOnce 11am hits, the lunch crowd starts to trickle in, slowly but surely.";
    std::cout << "\nOh boy! Your first table has officially arrived.";
    int people;
    people = rand() % 12;
    std::cout << "\nThe party size is " << people << std::endl;
    std::cout << "\nYou hand them a menu and allow them a chance to look it over." << std::endl;
    return people;
}
