#include <iostream>
using std::cout;
#define A 10 //2. another way to create a constant in "C" which is also valid in "C++". known as macros. there is no type in it. the variable is global

int main()
    {
       const int x = 3;//the keyword "const" short for constant is used make a data type value constant, i.e it  can't be changed once it is declared with the keyword "const", and if the variable was not given an initial value at declaration, it can't be changed afterwards, in fact, an error will be generated. "const" with "int" makes the data type "int" more discriptive

        //x = 10; //error gets generated here when attempt was made to CHANGE the value of the variable "x".

        cout << "1. x = " << x << std::endl;

        cout << "2. A has the value of " << A << std::endl;

        int y = 17;

        int z = x + y;

        cout << "3. z is equal to " << z << std::endl;

        enum { w = 99 }; // 3. 3rd way to create a constant variable
        cout << "4. w = " << w << std::endl;

    }