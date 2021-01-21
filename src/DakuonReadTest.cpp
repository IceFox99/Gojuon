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
	auto dakuon_size = dakuon.size();

	bool isHiragana;
	GojuonIndex index;

	isHiragana = rand() % 2;	
	index = rand() % dakuon_size;
	const Gojuon* temp_syllable = &dakuon[index];
	cout << "Please read \"" << getRandomKana(temp_syllable, isHiragana) << "\":";
	while (cin.ignore()) {
		cout << "The romaji is \"" << dakuon[index].getRomaji()
			<< "\", the hiragana is \"" << dakuon[index].getHiragana()
			<< "\", the katakana is \"" << dakuon[index].getKatakana()
			<< "\"." << endl << endl;

		isHiragana = rand() % 2;
		index = rand() % dakuon_size;
		temp_syllable = &dakuon[index];
		cout << "Please read \"" << getRandomKana(temp_syllable, isHiragana) << "\":";
	}
	return 0;
}