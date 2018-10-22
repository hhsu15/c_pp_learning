#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

//functions appear before the main
int addNumbers(int firstNum, int secondNum=0){
	int combinedVal = firstNum + secondNum;
	return combinedVal;
}

//you can have the same name function, this is "overload"
//same name function that takes different args
int addNumbers(int firstNum, int secondNum, int thirdNum){
	int combinedVal = firstNum + secondNum + thirdNum;
	return combinedVal;
}

//recursion
int getFactorial(int number){
	int sum;
	if(number == 1) sum=1;
	else sum = getFactorial(number - 1) * number;
	return sum;

}

int main(){
	cout << addNumbers(2) << endl;
	cout << addNumbers(2, 4, 5) << endl;
    cout << getFactorial(4) << endl;
	
	return 0;
}
