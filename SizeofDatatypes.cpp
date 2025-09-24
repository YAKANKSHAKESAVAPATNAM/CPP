#include<iostream>
using namespace std;
int main(){
	//cout << "size of int: "<< sizeof int<<"  ";
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	 //cout << "size of char: "<< sizeof char<< " ";
	cout << "Size of char: " << sizeof(char) << " byte" << endl;
	  //cout << "size of float: "<< sizeof float<< " ";
	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	   //cout << "size of double: "<< sizeof double<< " ";
	cout << "Size of double: " << sizeof(double) << " bytes";
	return 0;
}

//output
//Size of int: 4 bytes
//Size of char: 1 byte
//Size of float: 4 bytes
//Size of double: 8 bytes
