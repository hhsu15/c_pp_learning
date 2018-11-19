#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;


void manipulate(int* pValue ) {
	cout << "address in manipulate: " << pValue << endl;
    cout << "value in manipulate: " << *pValue << endl;
    //dereference
	*pValue = 10;
	cout << "value after manipulate: " << *pValue << endl;
}

void change_name(string* pname) {
	cout << "name's address passed to the function: " << pname << endl;
	cout << "name passed to the function: " << *pname << endl;

	*pname = "Hsin";
	cout << "name after change:" << *pname << endl;
}

int main() {
    
	int nValue = 8;
   
	cout << "Int value: " << nValue << endl;
	manipulate(&nValue); //pass the address
	cout << "Value after manipualte - outside of function: " << nValue << endl;

	string name = "Jess";
	change_name(&name);
	cout << "name after change - outside of function: " << name << endl;
	return 0;

}
