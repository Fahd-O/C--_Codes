#include <iostream>
#include <cmath>

 using namespace std; 

double Ferari(double arg1, int arg2) //this is a custom made function, here this block of code serves as both function declaration & definition at the same time.
{
    double answer = 1;
    for(int i = 0; i < arg2; i++)
    {
        answer = answer * arg1 ;
    }
    return answer;
}

void print_stuffs(double argue1, int argue2)//void functions do not have a return value like other functions
{
    double horsepower = Ferari(argue1, argue2);
    cout<< "then " << argue1 << " to the exponent " << argue2 << " is " << horsepower << endl << endl << "The end...  i.e End of Code" << endl << endl;
}

int main()
{
    double number;
    int exponent;
    cout << "i need a number: ";
    cin >> number;
    cout << "give me an exponent for the number: ";
    cin >> exponent;
    print_stuffs(number, exponent);
    print_stuffs(2, 3);
    print_stuffs(3, 2);
    print_stuffs(5, 3);
}
