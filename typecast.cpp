#include <iostream>
 
using namespace std;
 
int main()
{

	cout<< static_cast<char> ( 65 ) <<"\n\n";

	for ( int x = 0; x < 128; x++ ) {
    	cout<< x <<". "<< (char)x <<" "; 
    //Note the use of the int version of x to 
    // output a number and the use of (char) to 
    // typecast the x into a character  
    // which outputs the ASCII character that 
    // corresponds to the current number
  }
  cin.get();
}