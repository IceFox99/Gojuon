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
	const Gojuon* temp_syllable = getRandomGojuon();
	cout << "Please write \"" << temp_syllable->getRomaji() << "\":";

	while (cin.ignore()) {
		cout << "The hiragana is \"" << temp_syllable->getHiragana()
			<< "\", the katakana is \"" << temp_syllable->getKatakana()
			<< "\"." << endl << endl;

		temp_syllable = getRandomGojuon();
		cout << "Please write \"" << temp_syllable->getRomaji() << "\":";
	}
	return 0;
}


