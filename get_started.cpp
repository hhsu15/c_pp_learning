#include <iostream> //for cout function  
#include <vector>
#include <string> //for string
#include <fstream>

/*
multi line comment
*/

using namespace std; //so you don't have to type std::cout when you try to use the function

int main()
{
   //std::cout  (normally you would need this but since we have the using namespace
   //cout is like the "printf" function
	cout << "Hello World" << endl;
    
	//declear variable
	int myAge = 38;
	const double PI = 3.14;
	char myGrade = 'A';
	bool isHappy = true;
	float favNum = 3.14;
	double otherfavNum = 1.69897666666;
	cout << "Favorite Number: " << favNum << endl; //print out the variable
    cout << "Size of int: " << sizeof(myAge)  << endl; //size of datatype
    
	//increment 
    int five = 5;
	five++;
	cout << five << endl; //this will print 6

    int Five = 5;
	++five;
	cout << five << endl; //this will print 7
	return 0;
}
