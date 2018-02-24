#include <iostream>
using namespace std;

bool xorf(bool a, bool b)
{
	if (a == true && a == b)
	{
		return false;
	}else if (a == true && a != b)
	{
		return true;
	}else if (a == false && a == b)
	{
		return false;
	}else if (a == false && a != b)
	{
		return true;
	}
	return 0;
}

int main() {
	cout << xorf(true, false) << endl;;
	return 0;
}


