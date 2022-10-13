#include "ChildrenPrice.h"
//Constructor initialization
ChildrenPrice::ChildrenPrice(string _name, string _releaseYear, float _price, int _age)
	: MoviePrice(_name, _releaseYear, _price), age(_age)
{

};

//Calculate discount for childrent
int ChildrenPrice::calculateChildDiscount()
{
	//return 0 if age > 18
	int discount = 0;
	
	if (age < 8)
		discount = 15;
	else if (age >= 8 && age <= 12)
		discount = 10;
	else if (age >= 12 && age <= 18)
		discount = 5;
	
	return discount;
}

//Calculate movie price for children
float ChildrenPrice::calculateMoviePrice()
{
	//Get discount for the child
	float discount = calculateChildDiscount();
	float discountAmount = price * (discount / 100); //Calculate the discount amount

	return price - discountAmount; //Subtract the discount from the movie price
}

