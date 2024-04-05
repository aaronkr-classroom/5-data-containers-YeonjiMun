//chp4ex5.cpp
#include <iostream>
#include <unordered_map>
#include <vector>


using namespace std;

int main(){

	vector<string> words;
	unordered_map <string, int>wordcount;

	cout << "Enter words: " << endl;

	string word;
	while (cin >> word) {
		words.push_back(word);
	}

	for (auto& w : words) {
		wordcount[w]++;
	}

	cout << "Word count: " << endl;

	for (auto& pair : wordcount) {
		cout << pair.first << ": " << pair.second << endl;
	}
	return 0;
}