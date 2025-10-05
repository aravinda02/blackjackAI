#pragma once

#include <string>

class Card {
    public:
    Card();
    Card(const std::string value, const std::string colour): 
    value(value), colour(colour) {};


    std::string getValue() const;
    std::string getColour() const;

    
    void setValue(std::string v);{
        value = v;

    }
    void setColour(std::string c){
        colour = c
    };



}
