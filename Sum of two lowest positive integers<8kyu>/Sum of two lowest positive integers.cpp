#include <iostream>
#include <vector>
using namespace std;

vector<long> test {312737311983123, -183921839189, 38291389121283019, 122313212131123121, 189238131239823919, 389123312389183913};


long sumTwoSmallestNumbers(vector<long> numbers)
{
	sort(numbers.begin(), numbers.end());
	
	for (int i = 0;i < numbers.size();i++) {
		if (numbers[i] > 0)
		{
			return (long)numbers[i] + (long)numbers[i+1];
		}
	}
	return 0;
}

int main() {
	cout << sumTwoSmallestNumbers(test) << endl;
	
}


