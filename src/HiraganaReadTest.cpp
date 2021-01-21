#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Gojuon.h"

using std::cin; using std::cout; using std::endl;
using std::string; using std::vector; using std::begin; using std::end;

int main()
{
	auto size = gojuon.size();
	GojuonIndex index;
	srand((unsigned)time(0));

	index = rand() % size;
	cout << "Please read \"" << gojuon[index].getHiragana() << "\":";
	while (cin.ignore()) {
		cout << "The romaji is \"" << gojuon[index].getRomaji()
			<< "\", the hiragana is \"" << gojuon[index].getHiragana()
			<< "\", the katakana is \"" << gojuon[index].getKatakana()
			<< "\"." << endl << endl;

		index = rand() % size;
		cout << "Please read \"" << gojuon[index].getHiragana() << "\":";
	}
	return 0;
}