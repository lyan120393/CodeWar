#include <iostream>
using namespace std;
//FUnction prototye
int centuryFromYear(int );

int main() {
	cout << centuryFromYear(20) << endl;
	
}

int centuryFromYear(int year) 
{
	int centry = year / 100 ;
	if (year - centry * 100 != 0) 
	{
		centry += 1;
		return centry;
	}else {
		return centry;
	}
}