#include "Tree.h"
#include<iostream>


Tree :: Tree(double initialHeight) : height(initialHeight), growthRate(0.25){}

void Tree :: grow()
{
    height += growthRate;
}
void Tree::displayHeight() const
{
    cout << "Tree height: " << height << " cm" << endl;
}