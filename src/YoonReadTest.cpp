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
	srand((unsigned)time(0));
	auto yoon_size = yoon.size();

	bool isHiragana;
	GojuonIndex index;

	isHiragana = rand() % 2;
	index = rand() % yoon_size;
	const Gojuon* temp_Gojuon = &yoon[index];
	cout << "Please read \"" << getRandomKana(temp_Gojuon, isHiragana) << "\":";
	while (cin.ignore()) {
		cout << "The romaji is \"" << yoon[index].getRomaji()
			<< "\", the hiragana is \"" << yoon[index].getHiragana()
			<< "\", the katakana is \"" << yoon[index].getKatakana()
			<< "\"." << endl << endl;

		isHiragana = rand() % 2;
		index = rand() % yoon_size;
		temp_Gojuon = &yoon[index];
		cout << "Please read \"" << getRandomKana(temp_Gojuon, isHiragana) << "\":";
	}
	return 0;
}