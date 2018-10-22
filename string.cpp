#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

	char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'}; // string in c which is still valid in c++

    string birthdayString = " Birthday"; // in c++ you can do this
	cout << happyArray + birthdayString << endl;

	string yourName;
	cout << "What is your name? :";
	getline(cin, yourName);

	cout << "Hi " + yourName + "!" << endl;

	//geuss age
	double ageGuessConstant = 38.0;
	string ageGuess;
	int ageGuessDouble;

	cout << "What is your age? ";
	getline(cin, ageGuess);

	ageGuessDouble = stod(ageGuess); //convert string to double

	if(ageGuessDouble == ageGuessConstant) {

		cout << "You are right!!" << endl;
	}

	//string comparison
	string dogString = "dog";
	string catString = "cat";

	cout << dogString.compare(catString) << endl; //will be 1 which means it's less than
	cout << dogString.compare(dogString) << endl; // will be 0 which means it's the same
	cout << catString.compare(dogString) <<endl; // will be -1 which means it's greater than

	// get substring
	string wholeName = yourName.assign(yourName);
	cout << wholeName << endl;
	string firstName = wholeName.assign(wholeName, 0, 4); //first to the 4th
	cout << firstName << endl;

	//find index of a string
	int lastNameIndex = yourName.find("Hsu", 0);
	cout << "Index of last name:" <<  lastNameIndex << endl;

	//insert, erase, and replace
	yourName.insert(4, "heng");
	cout << yourName << endl;

	yourName.erase(5, 7);
	cout << yourName << endl;
	
	yourName.replace(5, 7, "Max");
	cout << yourName << endl;

	

    return 0;
}

