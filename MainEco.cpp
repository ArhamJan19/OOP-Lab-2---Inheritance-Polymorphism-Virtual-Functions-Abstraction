#include<iostream>
#include"Flower.h"
#include"Tree.h"
#include"Bush.h"

int main()
{
	Flower Rose(15);
	Tree Alpine(3000);
	Bush Willow(75);
	
	for (int i = 1; i <= 30; i++)
	{
		Rose.grow();
		Alpine.grow();
		Willow.grow();
	}
	Rose.displayHeight();
	Alpine.displayHeight();
	Willow.displayHeight();

	return 0;
}
