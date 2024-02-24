#pragma once
#include "Plant.h"
#include<iostream>
using namespace std;
class Flower : public Plant
{
private:
    double height;
    double growthRate; 
public:
    Flower(double initialHeight);
    void grow() override;
    void displayHeight() const override;

};
