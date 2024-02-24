#pragma once
#include "Animal.h"
class Bird : public Animal
{
public:
    void makeSound() const override;
};

