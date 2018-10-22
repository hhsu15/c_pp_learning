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

	//random numbner and while lool
	int randNum = (rand() % 100) + 1; //random num from 1 to 100
	while(randNum != 100){
		cout << randNum << ", ";
		randNum = (rand() % 100) + 1;
	}

	cout << "Finally hit 100!! " << endl;

   // do while loop
	string numberGuessed;
	int intNumberGuessed = 0;

	do {  
		cout << "Guess between 1 and 10: ";
		getline(cin, numberGuessed); //get user input. cin is the soruce of user input: keyboard
		intNumberGuessed = stoi(numberGuessed); //convert string to integer
		cout << intNumberGuessed << endl;

	} while (intNumberGuessed != 4);

	cout << "You win!" << endl;

	return 0;


}
