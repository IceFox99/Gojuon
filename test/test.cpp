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
	for (int i = 0; i < 100; ++i) {
		cout << getRandomIndex() << endl;
	}
	return 0;
}