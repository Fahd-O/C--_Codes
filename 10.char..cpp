#include <iostream>
#include <cmath>
#include<climits>
using namespace std;

int main()
{
char x = 'A';
cout << x << endl;

char y = 'A';
cout << (int) y << endl;

char z = 48;
cout << z << endl;

char w = 65;
cout << w << endl;

char v = 127;
cout << v << endl;

char s = 127;
cout << (int) s << endl;

char u = 128;
cout << (int) u << endl;
/* the highest number that can be stored in CHAR data type is +ve 127, once passed 
127,i.e "128", the number is reverted to the absolutely lowest number that can
be stored as a CHAR which is -ve 128 as output. And the conversion CYCLE continues 
for bigger numbers... view the output for the variable "r" below */
char t = 129;
cout << (int) t << endl;

char r = 1280;
cout << (int) r << endl;

//Unsigned Char...
/* unsigned char in line with the Extended ASCII table open up the chance for 128
more characters, however, they are non-standard and when tried to use them, it just
prints out a QUESTION MARK character in the console. */

string k = "Unsigned Char Begins Here on";
cout<< k << endl;

unsigned char A = 128;
cout << A << endl;

unsigned char B = 129;
cout << B << endl;
//so yeah, numbers above 127 can be saved using UNSIGNED CHAR
unsigned char C = 190;
cout << (int) C << endl;

unsigned char D = 200;
cout << (int) D << endl;

unsigned char E = 254;
cout << (int) E << endl;

unsigned char F = 255;
cout << (int) F << endl;

unsigned char G = 256;
cout << (int) G << endl;

return 0;
}