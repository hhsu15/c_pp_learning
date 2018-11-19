#include <iostream>
using namespace std;

int main() {
	
	int nValue = 8;
    
	//declare pointer variable 
	// & to get the address of variable nValue
	// this means a pointer to an integer
	int *pnValue = &nValue;
	// you can also use this which I think might be less confusing
	// int* pnValue = &nValue
   
	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int address: " << pnValue << endl;

	//to get the value in that pointer, use *
	//this is called dereferrence
	cout << "The value in this pointer " << *pnValue << endl;

	return 0;

}
