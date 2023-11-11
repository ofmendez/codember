#include <iostream>
#include <fstream>
#include <map>
#include <vector>

using namespace std;

typedef map<string, int> MSI;
typedef vector<string> VS;
const char* WS = " \t\n\r\f\v";

bool contains_key(MSI m, string idx) { return m.find(idx) != m.end(); }

string trim_tolower(string s) {    
	s.erase(0, s.find_first_not_of(WS));
	s.erase(s.find_last_not_of(WS) + 1);
	for(char &c : s)
		c = tolower(c);
	return s;
}

int main() {
	string l, word, ans;
	MSI map;
	VS order;

	ifstream msg("./message_01.txt");
	while (getline (msg, l,' ')) {
		word = trim_tolower(l) ;
		if (contains_key(map,word)) {
			map[word] += 1;
		} else {
			map[word] = 1;
			order.push_back(word);
		}
	}

	for (string item : order)
		cout << item << map[item] ;
	cout << endl;
}
