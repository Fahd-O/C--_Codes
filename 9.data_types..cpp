//c++ is known as a statically typed programming language

#include <iostream>
#include <cmath>
#include<climits>
using namespace std;

int main()
{
int x = 5;
int y = 2;

//integral and double data types...
cout<< x/y << endl;
cout<< 5/2 << endl;
cout<< 5.0/2 << endl;
cout<< 5/2.0 << endl;
cout<< 5.0/2.0 << endl;
cout<< -5/2 << endl;
cout<< -5.0/2 << endl;


short a;
int b;
long c;
long long d;
//short ≤ int ≤ long ≤ long long
unsigned short aa;
unsigned int bb;
unsigned long cc;
unsigned long long dd;

cout << sizeof(short) << endl;
cout << sizeof(int) << endl;
cout << sizeof(long) << endl;
cout << sizeof(long long) << endl;
cout << sizeof(unsigned short) << endl;

cout << SHRT_MAX << endl;
cout << INT_MAX << endl;
cout << LONG_MAX << endl;
cout << LLONG_MAX << endl;
cout << UINT_MAX << endl;


return 0;
}