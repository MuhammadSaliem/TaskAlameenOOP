#pragma once
#include "MoviePrice.h"
#include <string>
using namespace std;
class RegularPrice : MoviePrice
{
public:
	string category;

public:
	RegularPrice(string _name, string _releaseYear, float _price, string _category);
	int calculateCategoryExtra();
	float calculateMoviePrice();
};

