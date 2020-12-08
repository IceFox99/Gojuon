#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Syllable.h"

using std::cin; using std::cout; using std::endl;
using std::string; using std::vector; using std::begin; using std::end;

int main()
{
	srand((unsigned)time(0));
	auto dakuon_size = dakuon_syllables.size();

	bool isHiragana;
	SyllableIndex index;

	isHiragana = rand() % 2;	
	index = rand() % dakuon_size;
	const Syllable* temp_syllable = &dakuon_syllables[index];
	cout << "Please read \"" << getRandomKana(temp_syllable, isHiragana) << "\":";
	while (cin.ignore()) {
		cout << "The romaji is \"" << dakuon_syllables[index].getRomaji()
			<< "\", the hiragana is \"" << dakuon_syllables[index].getHiragana()
			<< "\", the katakana is \"" << dakuon_syllables[index].getKatakana()
			<< "\"." << endl << endl;

		isHiragana = rand() % 2;
		index = rand() % dakuon_size;
		temp_syllable = &dakuon_syllables[index];
		cout << "Please read \"" << getRandomKana(temp_syllable, isHiragana) << "\":";
	}
	return 0;
}