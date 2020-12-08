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
	auto size = syllables.size();
	SyllableIndex index;
	srand((unsigned)time(0));

	index = rand() % size;
	cout << "Please read \"" << syllables[index].getHiragana() << "\":";
	while (cin.ignore()) {
		cout << "The romaji is \"" << syllables[index].getRomaji()
			<< "\", the hiragana is \"" << syllables[index].getHiragana()
			<< "\", the katakana is \"" << syllables[index].getKatakana()
			<< "\"." << endl << endl;

		index = rand() % size;
		cout << "Please read \"" << syllables[index].getHiragana() << "\":";
	}
	return 0;
}