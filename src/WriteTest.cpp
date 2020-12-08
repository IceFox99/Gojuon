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
	const Syllable* temp_syllable = getRandomSyllable();
	cout << "Please write \"" << temp_syllable->getRomaji() << "\":";

	while (cin.ignore()) {
		cout << "The hiragana is \"" << temp_syllable->getHiragana()
			<< "\", the katakana is \"" << temp_syllable->getKatakana()
			<< "\"." << endl << endl;

		temp_syllable = getRandomSyllable();
		cout << "Please write \"" << temp_syllable->getRomaji() << "\":";
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

	srand((unsigned)time(0));
	index = rand() % (size + dakuon_size + yoon_size);
	const Syllable* temp_syllable = getSyllable(index);
	cout << "Please write \"" << temp_syllable->getRomaji() << "\":";
	
	while (cin.ignore()) {
		cout << "The hiragana is \"" << temp_syllable->getHiragana()
			<< "\", the katakana is \"" << temp_syllable->getKatakana() 
			<< "\"." << endl << endl;
		
		index = rand() % (size + dakuon_size + yoon_size);
		temp_syllable = getSyllable(index);
		cout << "Please write \"" << temp_syllable->getRomaji() << "\":";
	}
	return 0;
}
*/

