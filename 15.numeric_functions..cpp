#include <iostream>
#include <cmath> //gives access to the "math library" for functions about to be used in this code

int main()
{
    std::cout << "output 1. " << sqrt (25) << std::endl;//used to get the squareroot of a number
    std::cout << "output 2. " << sqrt (-25) << std::endl;//output of this is an imaginary number "nan" short for "not a number".
    std::cout << "output 3. " << NAN <<std::endl;//this also prints out "nan"

    //another example of imaginary numbers are "inf" & "-inf" short for "infinity" & "-ve infinit", gotten when the value of a mathematical expression is equal to infinity or the result of the expression is a really big number

    std::cout << "output 4. " << pow (9,999) << std::endl; // the function here is used to raise a number to particular power, as used here, 9 to the power of 999, which is a really big number...
    std::cout << "output 5. " << INFINITY << std::endl;//this also prints out "infinity"

    std::cout << "output 6. " << pow (-9,999) << std::endl;//-ve number = -ve inf
    std::cout << "output 7. " << -INFINITY << std::endl;//this also prints out "-ve infinity"

    std::cout << "output 8. " << remainder(10, 3.25) << std::endl;//used to get the remainder of the division between two numbers, whether the remainder is whole number or decimal 
    
    std::cout << "output 9. " << 10 % 3 << std::endl;//used to get the remainder of the division between two whole numbers only 

    std::cout << "output 10. " << fmod(10, 3.2559878237) << std::endl;//works just like the "remainder" function however they have some minor differences, has to do with rounding and truncation

    std::cout << "output 11. " << fmax(10, 3.25) << std::endl;//prints out the bigger value of the two arguements entered, can be used for simple comparison

    std::cout << "output 12. " << fmin(10, 3.25) << std::endl;//prints out the smaller value of the two arguements entered

    std::cout << "13. " << ceil(3.012345) << std::endl; //rounds up a decimal number to a whole number increamenting it by "one" regardless of the digit immediately after the decimal point.

    std::cout << "14. " << floor(fmin(10, 3.25)) << std::endl;//crops off the decimal part

    std::cout << "15. " << trunc(fmin(10, 3.25)) << std::endl;//crops off the decimal part also

    //view difference between floor and trunc below...

    std::cout << "16. " << trunc(-1.5) << std::endl; //in this case, the decimal is just chopped off nothing more

    std::cout << "17. " << floor(-1.5) << std::endl;//in this case, the opposite happens between "ceil" and "floor" in the -ve kind of way. the -ve 1.5 gets lowered to -2 and for "ceiling", it just chops off the decimal part...

    std::cout << "18. " << ceil(-1.5) << std::endl;

    //so the difference between floor and trunc is only obvious when dealing with -ve numbers

    std::cout << "19. " << round(-1.5) << std::endl; //works like regular rounding of numbers that we are familiar with in school
    std::cout << "20. " << round(-1.49) << std::endl; //the +ve or -ve sign does not affect the rounding






}