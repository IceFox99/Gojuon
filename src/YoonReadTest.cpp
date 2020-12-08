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
	auto yoon_size = yoon_syllables.size();

	bool isHiragana;
	SyllableIndex index;

	isHiragana = rand() % 2;
	index = rand() % yoon_size;
	const Syllable* temp_syllable = &yoon_syllables[index];
	cout << "Please read \"" << getRandomKana(temp_syllable, isHiragana) << "\":";
	while (cin.ignore()) {
		cout << "The romaji is \"" << yoon_syllables[index].getRomaji()
			<< "\", the hiragana is \"" << yoon_syllables[index].getHiragana()
			<< "\", the katakana is \"" << yoon_syllables[index].getKatakana()
			<< "\"." << endl << endl;

		isHiragana = rand() % 2;
		index = rand() % yoon_size;
		temp_syllable = &yoon_syllables[index];
		cout << "Please read \"" << getRandomKana(temp_syllable, isHiragana) << "\":";
	}
	return 0;
}