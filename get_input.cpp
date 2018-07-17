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
	string numberGuessed; //use this later on to store user input. which is going to be a string
	int intNumberGuessed = 0;

	do {
		cout << "Guess between 1 and 10: ";
		getline(cin, numberGuessed); //cin is source of the user input and we store it in numberGuessed
		intNumberGuessed = stoi(numberGuessed); //convert string into int
		cout << intNumberGuessed << endl;
	} while(intNumberGuessed != 4);

	cout << "You win!" << endl;
	return 0;


}
