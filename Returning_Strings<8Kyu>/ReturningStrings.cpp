#include <iostream>
#include <string>
using namespace std;
//Declare and Definition
string n = "n/a";

// Function Prototype
string greet(const string& );

int main(){
	cin >> n;
	cout << greet(n);
	return 0;
}


string greet(const string& n){
	string a = "Hello, ";
	string b = n;
	string c = " how are you doing today?";
	
	return a + b + c;
}
