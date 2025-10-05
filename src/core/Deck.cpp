#include <iostream>
#include "Card.h"
#include <vector>
#pragma once

class Deck{
    public :
    Deck(int numDecks=1);
    void shuffle();
    bool isEmpty() const;
    void reset();

    private:
    std::vector<Card> cards;
    int numDecks;
    void initialize();            
};
