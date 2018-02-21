#include <iostream>
using namespace std;

//Function Prototype
string evenorOdd(int);

int main() {
	int n = 0;
	cin >> n;
	cout << evenorOdd(n) << endl;
}

string evenorOdd(int a)
{
	double b = 0;
	b = a / 2;
	if (a/2 == b & b * 2 == a)
	{
		return "Even";
	}else
		return "Odd";
}