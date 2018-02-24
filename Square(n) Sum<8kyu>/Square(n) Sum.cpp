#include <iostream>
#include <vector>
using namespace std;
int y = 0;
vector<int> test {1,2,3,4};

int square_sum(const vector<int>& numbers)
{
	vector<int> stage;
	int x = 0;
	for (int i = 0;i < numbers.size();i++) {
		stage.push_back(numbers[i] * numbers[i]);
		x += stage[i];
	};
	return x;
}

int main() {
	y = square_sum(test);
	cout << y << endl;
	return 0;
}

