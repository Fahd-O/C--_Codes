#include<iostream>
using namespace std;
//program to test score
int main() 
{
int gala;
cout<<"please enter score here: ";
cin>> gala;
//testing student score using switch statement
switch (gala)
{
case 70:
cout<< "A"<< "\n";
    break;
   
/*Once ONE of these numbers are entered by a user, the instruction directly underneat
it is carried out and then EVERY other instruction within the curly bracket of the 
SWITCH STATEMENT is literally  ignored due to the BREAK reserved word*/
case 60:
cout<< "B"<< "\n";
    break;

 case 55:
cout<< "C"<< "\n";
    break;

case 50:
cout<< "D"<< "\n";
    break;

case 45:
cout<< "E"<< "\n";
    break;

case 40:
cout<< "F"<< "\n";
    break;   
}

return 0;
}