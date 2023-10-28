#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	cout << "Game Over!! Part 3" << "\n";

	fstream myFile;
	string line1;
	string line2;
	string line3;
	
	int ans = 0;
	myFile.open("input.txt", ios::in);
	if (myFile.is_open()) {

		while(getline(myFile, line1) && getline(myFile, line2) && getline(myFile, line3)) {

			int N1 = line1.length();
			int N2 = line2.length();
			int N3 = line3.length();
			set<char> set1;
			set<char> set2;
			set<char> set3;
			int count[53] = {0};

			for(int i=0; i<N1; i++) {
				set1.insert(line1[i]);
			}
			for(int i=0; i<N2; i++) {
				set2.insert(line2[i]);
			}
			for(int i=0; i<N3; i++) {
				set3.insert(line3[i]);
			}
			for(char x : set1) {
				if (x >= 65 && x <= 90) count[x - 'A' + 27]++;
				if (x >= 97 && x <= 122) count[x - 'a' + 1]++;
			}
			for(char x : set2) {
				if (x >= 65 && x <= 90) count[x - 'A' + 27]++;
				if (x >= 97 && x <= 122) count[x - 'a' + 1]++;
			}
			for(char x : set3) {
				if (x >= 65 && x <= 90) count[x - 'A' + 27]++;
				if (x >= 97 && x <= 122) count[x - 'a' + 1]++;
			}
			for(int i=1; i<53; i++) {
				if (count[i] == 3) ans += i;
			}
		}
		myFile.close();
	}
	else {
		cout << "IO read fail \n";
	}

	cout << ans << "\n";
	return 0;
}
