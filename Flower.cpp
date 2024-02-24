#include "Flower.h"
#include<iostream>
using namespace std;
Flower :: Flower(double initialHeight) : height(initialHeight), growthRate(0.5) {}

void Flower::grow()
{
    height += growthRate;
}
void Flower::displayHeight() const 
{
    cout << "Flower height: " << height << " cm" << endl;
}