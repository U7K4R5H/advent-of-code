#include <bits/stdc++.h>
using namespace std;

#define ll long long

//push https://github.com/U7K4R5H/cses.fi-problemset.git master

int main() {
	cout << "Game Over!! Part 2" << "\n";
	fstream myFile;
	string line;
	ll curr = 0;
	ll sum = 0;
	vector<ll> vec;
	//size_t sz;
	myFile.open("input.txt", ios::in);
	if (myFile.is_open()) {

		while(getline(myFile, line)) {
			if(line == "") {
				if (sum < curr) {
					sum = curr;
				}
				vec.push_back(curr);
				curr = 0;
			}
			else {
			curr += (ll)stol(line, nullptr);
			}
		}
		
		myFile.close();
	}
	else {
		cout << "IO read fail \n";
	}
	sort(vec.begin(), vec.end());
	int n = vec.size();
	ll three_sum = vec[n - 1] + vec[n - 2] + vec[n -3];

	cout << three_sum << "\n"; 
	return 0;
}
