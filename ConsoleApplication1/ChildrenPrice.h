#pragma once
#include "MoviePrice.h"
class ChildrenPrice : MoviePrice
{
public:
	int age;

public:
	ChildrenPrice(string _name, string _releaseYear, float _price, int _age);
	int calculateChildDiscount();
	float calculateMoviePrice();
};

