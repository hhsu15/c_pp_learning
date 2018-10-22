#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
	
	//vector that contains integers
	vector <int> lotteryNumVect(10);

	int lotteryNumArray[5] = {4, 12, 25, 34, 55};

    //insert from the beginning and the object, and only the first 3 elements
	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);
    // print out the index at 2 (the third one)
	cout << lotteryNumVect.at(2) << endl;
	
	//insert a value
	lotteryNumVect.insert(lotteryNumVect.begin()+5, 77);

	cout << lotteryNumVect.at(5) << endl;


	return 0;
}
