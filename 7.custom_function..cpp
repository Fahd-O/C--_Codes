#include <iostream>
#include <cmath>

 using namespace std; 
 
//arguements are entered into parameters. parameters are all that is within the parenthesis of a function

double Ferari(double arg1, int arg2) //this is a custom made function, here this block of code serves as both function declaration & definition at the same time.
{
    double answer = 1;
    for(int i = 0; i < arg2; i++)
    {
        answer = answer * arg1 ;
    }
    return answer;
}
/* 
a function may be declared and defined at the same time like done above...
a function may also be declared in one place and then defined at another place ABOVE in a code file and is
done like so below... so the function declaration gives the defined function more field for it to 
operate in, as a defined function can only be used below it in a code and not before it unless it is
otherwise declared above it, view example below 

double power(double, int); <- this is function declaration
.
.
.
double power(double number, int exponent) <- and here is the definition, somewhere else in the code
{
    return 0.0;
}

when declaring and defining a custom function at different places, the function declaration has to 
always come first, before the function definition or before the custom function is used, else error ! 
 */
int main()
{
   int number, exponent;
    cout<< "i need a number: ";
    cin>> number;
    cout<< "give me an exponent for the number: ";
    cin>> exponent;
    double horsepower = Ferari(number, exponent);
    //double power = pow(number, exponent);
    cout<< horsepower << endl << endl;
    return 0;
}