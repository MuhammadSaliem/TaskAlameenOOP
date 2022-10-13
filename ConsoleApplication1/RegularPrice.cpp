#include "RegularPrice.h"

RegularPrice::RegularPrice(string _name, string _releaseYear, float _price, string _category)
	: MoviePrice(_name, _releaseYear, _price), category(_category)
{

}

int RegularPrice::calculateCategoryExtra()
{
	int extra = 0;

	if (category == "drama")
		extra = 10;
	else if (category == "action")
		extra = 25;
	else if (category == "horror")
		extra = 50;
	else
		throw exception("Wrong Entry!"); 

	return extra;
}

float RegularPrice::calculateMoviePrice()
{
	float extra = calculateCategoryExtra();
	float extraAmount = price * (extra / 100);
	return price + extraAmount;
}
