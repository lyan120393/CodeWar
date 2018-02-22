#include <iostream>
#include <vector>
using namespace std;

vector<int> v {1, 2, 3, 4, 5, 20, 50 ,100 ,2200, 11002, 210301, 29310 , 31, 1231, 1319313011, -212};

//Function Prototype
int max(vector<int>);
int min(vector<int>);



int main() {
	cout << max(v) << endl;
	cout << min(v) << endl;
	return 0;
}

int min(vector<int> list){
	int smallestnumber = 0;
	bool isSet = false;
	smallestnumber = list[0];
	isSet = true;	
	for (int i = 0;i < list.size();i++) {
	
		if (list[i] < smallestnumber && isSet == true ) {
			smallestnumber = list[i];
		}
	}
	return smallestnumber;
}


int max(vector<int> list){
	int largestnumber = 0;
	bool isSet = false;
	largestnumber = list[0];
	isSet = true;
	for (int i = 0;i < list.size();i++) {
		
		if (list[i] > largestnumber && isSet == true ) {
			largestnumber = list[i];
		}


	}
	return largestnumber;
}


