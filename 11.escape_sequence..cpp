#include <iostream>
using namespace std;

/*escape sequences are special characters that means something and are not literal
in meaning, they are interpreted and not just printed out
*/

int main()
{
    
cout<<"Alhamdu lilah\tupon the blessing of Islam"<<endl; //horizontal tab
cout<<"Alhamdu lilahi\b upon the blessing of Islam"<<endl; //backspace
cout<<"Alhamdu lilah\nupon the blessing of Islam"<<endl; //new line
cout<<"Alhamdu lilah\vupon the blessing of Islam"<<endl; //vertical tab
cout<<"Alhamdu lilah\a\a\a\a\a\a\a\a upon the blessing of Islam"<<endl; //sounds the computer's alert sound
cout<<"Alhamdu lilah upon the blessing of Islam\0"<<endl; //null terminating character; will be used later to indicate the end of a "C" style string
cout<<"Alhamdu lilah \"upon the blessing of Islam\""<<endl; //used to print double quotation marks same thing applies to single quotes
cout<<"alHamdu lilah \\ subHana llahi alAdheem"<<endl;

    return 0;
}