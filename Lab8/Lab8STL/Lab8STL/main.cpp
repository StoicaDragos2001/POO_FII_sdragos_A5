#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <map>
using namespace std;

void chLower(string& myString) {
	int n = size(myString);
	for (int i = 0; i < n; i++)
		if (myString[i] >= 'A' && myString[i] <= 'Z')
			myString[i] = myString[i] + 32;
}

class compareModule {
public:
	bool operator() (pair<string, int>p1, pair<string, int>p2)
	{
		if (p1.second < p2.second)
			return true;
		if (p1.second > p2.second)
			return false;
		if (p1.first > p2.first)
			return true;
		return false;

	}
};

int main() 
{
	string myString;
	ifstream myFile("input.txt");
	if (!myFile)
		cout << "Eroare la deschiderea fisierului: input.txt" << endl;
	if (!getline(myFile, myString)) {
		printf("error la citirea din fisier: input.txt");
		return 0;
	}
	cout << "Sirul de caractere citit este: " << myString << endl;

	chLower(myString);
	cout << "Sirul toLower: " << myString << endl;

	map<string, int>Words;
	//Words["Popescu"]++;
	//cout << Words["Popescu"]<<endl;
	string word = "";
	int n = size(myString);
	for (int i = 0; i < n; i++)
	{
		if (myString[i] == ' ' || myString[i] == ',' || myString[i] == '.' || myString[i] == '!' || myString[i] == '?')
		{
			//cout << word << endl;
			if (word[0] != NULL)
			{
				Words[word]++;
				word = "";
			}
		}
		else
			word = word + myString[i];
	}
	//cout << word << endl;
	if (word[0] != NULL)
	Words[word]++;
	cout << endl;
	cout << "Map-ul nesortat este:" << endl;

	map<string, int>::iterator it;
	for (it = Words.begin(); it != Words.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}
	cout << endl;
	
	cout << "Map-ul sortat cu priority queue este:" << endl;
	priority_queue<pair<string, int>, vector<pair<string, int>>, compareModule> queue;

	for (auto mapIterator = Words.begin(); mapIterator != Words.end(); mapIterator++) {
		queue.push(pair<string, int>(mapIterator->first, mapIterator->second));
	}

	while (!queue.empty())
	{
		cout << queue.top().first << " => " << queue.top().second << endl;
		queue.pop();
	}
	system("pause");
	return 0;
}