#include <iostream>
#include <cmath>

 using namespace std; 
 
int main()
{
    int answer = pow(10, 2); //this is a function, to use the function "pow", the include statement "include (cmath)" has to be used for it to work. 
    /*
    the two data "10" & "2" entered into the parenthesis of the made up function above are called "arguments"
    
    */
    cout<<answer<<endl;

    int base, index;
    cout<< "gimme a base: ";
    cin>> base;
    cout<< "i'll aslo need an index for the base: ";
    cin>> index;
    cout<< "then " << base << " to the index " << index << " is " <<pow(base, index) << endl;

    //OR

    int number, exponent;
    cout<< "i need a number: ";
    cin>> number;
    cout<< "give me an exponent for the number: ";
    cin>> exponent;
    int power = pow(number, exponent);
    cout<< "then " << number << " to the exponent " << exponent << " is " << power << endl << endl << "The end...  i.e End of Code" << endl << endl;
}