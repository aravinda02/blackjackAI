
#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

class Card{
    public:
    std::string value;
    std::string colour;
    
    private:
    std::string colours[4] = {"Hearts", "Diamonds", "Spades", "Clubs"};

};
