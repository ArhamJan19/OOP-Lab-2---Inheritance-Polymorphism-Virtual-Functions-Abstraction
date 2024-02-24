#pragma once
#include "Plant.h"
#include<iostream>
using namespace std;
class Bush : public Plant
{
private:
	double height;
	double growthRate;
public:
	Bush(double initialHeight);
	void grow() override;
	void displayHeight() const override;
};

