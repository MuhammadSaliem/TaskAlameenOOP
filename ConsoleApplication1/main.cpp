#include <iostream>
#include "ChildrenPrice.h"
#include "RegularPrice.h"

using namespace std;

int main()
{
	ChildrenPrice childrenPrice("The Hatful Eight", "2015", 100, 7);
	RegularPrice regularPrice("Quit Place", "2014", 100, "horror");

	cout << childrenPrice.calculateMoviePrice() << endl;
	cout << regularPrice.calculateMoviePrice() << endl;
}
