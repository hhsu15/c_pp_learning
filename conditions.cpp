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
	int age = 81;
	int ageAtLastExam = 30;
	bool isNotIntoxicated = true;

	//it statement
	if ((age > 80) || (! isNotIntoxicated)) 
	{
		cout << "You cannot drive" << endl;
	}
	else if ((ageAtLastExam < 10) && (age > 20))
	{
		cout << "You cannot drive" << endl;

	}
	else 
	{
		cout << "you can drive" << endl;
	}
    
	int yourAge = 10;

	//switch statement
	switch (yourAge)
	{
     	case 5 :
			cout << "too young" << endl;
            break;

     	case 10 :
			cout << "just right" << endl;
			break;

     	case 15 :
			cout << "too old" << endl;
			break;
	}

	//ternary
	// variable = (condition) ? true : false
	int largestNum = (5 > 3) ? 5 : 2;
	cout << "Largest Number:" << largestNum << endl;


	return 0;
}
