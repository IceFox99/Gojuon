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
	bool isHiragana;

	isHiragana = rand() % 2;
	const Gojuon* temp_Gojuon = getRandomGojuon();
	cout << "Please read \"" << getRandomKana(temp_Gojuon, isHiragana) << "\":";
	while (cin.ignore()) {
		cout << "The romaji is \"" << temp_Gojuon->getRomaji()
			<< "\", the hiragana is \"" << temp_Gojuon->getHiragana()
			<< "\", the katakana is \"" << temp_Gojuon->getKatakana()
			<< "\"." << endl << endl;

		isHiragana = rand() % 2;
		temp_Gojuon = getRandomGojuon();
		cout << "Please read \"" << getRandomKana(temp_Gojuon, isHiragana) << "\":";
	}
	return 0;
}


