#pragma once
#include "Plant.h"
#include<iostream>
using namespace std;
class Tree : public Plant
{
private:
	double height;
	double growthRate;
public:
	Tree(double initialHeight);
	void grow() override;
	void displayHeight() const override;
};

