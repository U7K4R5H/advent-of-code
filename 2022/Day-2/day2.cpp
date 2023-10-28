#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	cout << "Game Over!! Part 2" << "\n";

	fstream myFile;
	string line;
	
	unordered_map<string, int> game_state;
	game_state["A X"] = 3;
	game_state["A Y"] = 4;
	game_state["A Z"] = 8;
	game_state["B X"] = 1;
	game_state["B Y"] = 5;
	game_state["B Z"] = 9;
	game_state["C X"] = 2;
	game_state["C Y"] = 6;
	game_state["C Z"] = 7;

	int ans = 0;

	myFile.open("input.txt", ios::in);
	if (myFile.is_open()) {

		while(getline(myFile, line)) {

			if (game_state.find(line) == game_state.end()) 
				cout << line << " not found \n";
			
			else 
				ans += game_state[line];
		}
		
		myFile.close();
	}
	else {
		cout << "IO read fail \n";
	}
	
	cout << ans << "\n";
	return 0;
}

