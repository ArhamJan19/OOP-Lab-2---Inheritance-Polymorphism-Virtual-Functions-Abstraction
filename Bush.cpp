#include "Bush.h"
#include<iostream>

Bush::Bush(double initialHeight) : height(initialHeight), growthRate(0.75) {}

void Bush::grow()
{
    height += growthRate;
}
void Bush::displayHeight() const
{
    cout << "Bush height: " << height << " cm" << endl;
}