//============================================================================
// Name        : hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "escribe una verdad y yo la repito" << endl;
	char cadena[100];
	cin.getline(cadena, 100);
	cout << cadena << endl; // prints !!!Hello World!!!
	return 0;
}
