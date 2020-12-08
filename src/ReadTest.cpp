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
	bool isHiragana;

	isHiragana = rand() % 2;
	const Syllable* temp_syllable = getRandomSyllable();
	cout << "Please read \"" << getRandomKana(temp_syllable, isHiragana) << "\":";
	while (cin.ignore()) {
		cout << "The romaji is \"" << temp_syllable->getRomaji()
			<< "\", the hiragana is \"" << temp_syllable->getHiragana()
			<< "\", the katakana is \"" << temp_syllable->getKatakana()
			<< "\"." << endl << endl;

		isHiragana = rand() % 2;
		temp_syllable = getRandomSyllable();
		cout << "Please read \"" << getRandomKana(temp_syllable, isHiragana) << "\":";
	}
	return 0;
}

/*
int main()
{
	const auto size = syllables.size();
	const auto dakuon_size = dakuon_syllables.size();
	const auto yoon_size = yoon_syllables.size();
	decltype(syllables.size()) index;

	bool isHiragana;
	srand((unsigned)time(0));

	index = rand() % size;
	isHiragana = rand() % 2;
	cout << "Please read \"" << getKana(index, isHiragana) << "\":";
	while (cin.ignore()) {
		cout << "The romaji is \"" << syllables[index].getRomaji() 
			<< "\", the hiragana is \"" << syllables[index].getHiragana()
			<< "\", the katakana is \"" << syllables[index].getKatakana()
			<< "\"." << endl << endl;

		index = rand() % size;
		isHiragana = rand() % 2;
		cout << "Please read \"" << getKana(index, isHiragana) << "\":";
	}
	return 0;
}
*/

