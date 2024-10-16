 /*
 General Introduction to C++ concepts and Variables
 */

 #include <iostream>
 using std::cout; //using directive
 
int main()
{
    cout << "bismi llahi rahmaani raheem\n";

    int digits = 10; //declaration & initialization of a variable with the name "digits" and value "10"

    int wahid; //declaration of a variable with the name "wahid"
    wahid = 1; /* initialization(i.e giving an initial value) of the variable "wahid" 
                with a value of "1"
                */

    int biscuit = 3 + 7;
    cout << biscuit;

    int snack;
    snack = biscuit;
    cout << snack;

    return 0;
}