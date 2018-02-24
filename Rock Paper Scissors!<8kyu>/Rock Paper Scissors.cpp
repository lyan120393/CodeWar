#include <iostream>
#include <string>
using namespace std;

string rps(const string& p1, const string& p2)
{
	if (p1 == p2)
	{
		return "Draw!"; //They are equal
	}else if(p1 == "scissors")
	{
		if(p2 == "rock")
		{
			return "Player 2 won!";
		}else if (p2 == "paper")
		{
			return "Player 1 won!";
		}
	}else if(p1 == "rock")
	{
		if(p2 == "paper")
		{
			return "Player 2 won!";
		}else if (p2 == "scissors")
		{
			return "Player 1 won!";
		}
	}else if(p1 == "paper")
	{
		if(p2 == "scissors")
		{
			return "Player 2 won!";
		}else if (p2 == "rock")
		{
			return "Player 1 won!";
		}
	}
	return 0;
}

int main() {
	cout << rps("scissors", "rock") << endl;;
	
}




