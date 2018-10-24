#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{

   string steveQuote = "A day without sunshine is like, you know, night";
	
   //write into a file
   ofstream writer("stevequote.txt");

   if(! writer){
       cout << "Error opening file" << endl;
	   return -1;
   } else{
   	writer << steveQuote << endl;
	writer.close();
	}

   ofstream writer2("stevequote.txt", ios::app); //append to existing file
   
   if(! writer2){
       cout << "Error opening file" << endl;
	   return -1;
   } else{
   	writer2 << "\n -Steve Martin " << endl;
	writer.close();
	}
   
   char letter;
   ifstream reader("stevequote.txt"); //ifstream stands for input file stream
   if (! reader){ 
   	cout << "Error opening file" << endl;
	return -1;
	} else{
		for(int i=0; ! reader.eof()g i++){ //eof: end of file
			reader.get(letter);
			cout << letter;
    	}
		cout << endl;
		reader.close();
	}
   return 0; //you need to have ;

}
