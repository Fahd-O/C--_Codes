#include <iostream>
 using namespace std; 
 
int main()
{
    int green = 114 ;//use "indentation" to make your codes easier to read through
    cout<< green << endl;

    int cloud = 100; 
    int Cloud = 111;
    int cLoUd = 101; //cloud ≠ Cloud ≠ cLoUd. C++ is case sensitive
    cout<< cloud << endl << Cloud << endl << cLoUd << endl;
    //by convention, it is not adviceable to have variables with the same name but different case 
   
    int macbook;



    macbook = 1000000;

    cout<< macbook << endl; //c++ is white space insensitive

    //comments are used to explain your code, by the way, this is a comment, a single line comment, for a single line ONLY.
    /*
    this is also a comment, a MULTI-LINE kind of comment, self explanatory...
    this is another LINE of comment...
    this is also ANOTHER LINE of comment...
    like that, like that, like that... all within the opening and closing marker.
    */
   //comments should always be up-to-date with the codes they are explaining  
}