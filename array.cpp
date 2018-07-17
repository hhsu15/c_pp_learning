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
	//declear array with 5 elements
	int myFavNums[5];

	int badNums[5] = {4, 5, 6, 2, 6};

	cout << "bad number 1: " << badNums[0] << endl;
    
	//for loop to print out each element
	char myName[4] = {'h', 's', 'i', 'n'};
    for (int i=0; i<4; i++)
	{
		cout << myName[i] << endl;
	}
    
	//multi-array
    char myName2[4][4] = {{'h', 's', 'i', 'n'},
					       {'h', 's', 'u','a'}}; //has to be equal length
	cout << myName2[1] << endl; //this prints hsu
	
	return 0;


}
