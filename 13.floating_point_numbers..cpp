#include <iostream>
#include <float.h> // make available constants we can get values from that tells us how many significant digits that says how many significant digits a data type is trustworthy to... 
using std::cout;

int main()
{   
    /*
    floats, double & long double are virtually the same data types. the difference is
    the amount of digits that they can store ACCURATELY or CORRECTLY, anything after 
    the range of values it can store correctly is NOT TO BE TRUSTED OR THERE IS NO
    GUARANTEE FOR ITS CORRECTNESS !
    */
    float a = 10.0 / 3;
    a *= 1000000000000;
    double b =  10.0 / 3;
    b *= 1000000000000;
    long double c =  10.0 / 3;
    c *= 1000000000000;

    cout << std::fixed << a << std::endl ;
    cout << b << std::endl ;
    cout << std::fixed << c << std::endl ;
    cout << FLT_DIG << std::endl ; //trustworthy to six digits
    cout << DBL_DIG << std::endl ; //trustworthy to 15 digits
    cout << LDBL_DIG << std::endl ; //trustworthy to 18 digits, hmmm... or is it, view output of line 22 to see what I mean...
    /*
    so the important thing to take note of is that values stored as float, double & 
    long double are ONLY ACCURATE to a particular range of digits and should not be
    used when very high accuracy is needed that would go out of its range of accuracy like when money ! is involved
    */
}