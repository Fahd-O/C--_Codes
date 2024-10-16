#include <iostream>

using std::cout;

int main()
{

bool the_sun_is_a_star = true;
cout << the_sun_is_a_star << std::endl; //output will be "1"

bool fishes_grow_on_trees = false;
cout << fishes_grow_on_trees << std::endl; //output will be "0"

/*  
* the output value of true or any number apart from zero is always going to be 1 even
if the number is negative
* the output value of false or the number zero alone is "0" 
*/

bool cumulus = -987;
cout << cumulus << std::endl;

bool Gatekeeper = 99;
cout << std::boolalpha << Gatekeeper << std::endl;//used to print true or false instead of "1" or "0"

}