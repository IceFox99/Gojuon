#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Syllable.h"

std::vector<Syllable> syllables = { Syllable("a", "��", "��"), Syllable("i", "��", "��"), Syllable("u", "��", "��"), Syllable("e", "��", "��"), Syllable("o", "��", "��"),
									Syllable("ka", "��", "��"), Syllable("ki", "��", "��"), Syllable("ku", "��", "��"), Syllable("ke", "��", "��"), Syllable("ko", "��", "��"),
									Syllable("sa", "��", "��"), Syllable("shi", "��", "��"), Syllable("su", "��", "��"), Syllable("se", "��", "��"), Syllable("so", "��", "��"),
									Syllable("ta", "��", "��"), Syllable("chi", "��", "��"), Syllable("tsu", "��", "��"), Syllable("te", "��", "��"), Syllable("to", "��", "��"),
									Syllable("na", "��", "��"), Syllable("ni", "��", "��"), Syllable("nu", "��", "��"), Syllable("ne", "��", "��"), Syllable("no", "��", "��"),
									Syllable("ha", "��", "��"), Syllable("hi", "��", "��"), Syllable("fu", "��", "��"), Syllable("he", "��", "��"), Syllable("ho", "��", "��"),
									Syllable("ma", "��", "��"), Syllable("mi", "��", "��"), Syllable("mu", "��", "��"), Syllable("me", "��", "��"), Syllable("mo", "��", "��"),
									Syllable("ya", "��", "��"), Syllable("yu", "��", "��"), Syllable("yo", "��", "��"),
									Syllable("ra", "��", "��"), Syllable("ri", "��", "��"), Syllable("ru", "��", "��"), Syllable("re", "��", "��"), Syllable("ro", "��", "��"),
									Syllable("wa", "��", "��"), Syllable("wo", "��", "��"),
									Syllable("n", "��", "��") };

std::vector<Syllable> dakuon_syllables = { Syllable("ga", "��", "��"), Syllable("gi", "��", "��"), Syllable("gu", "��", "��"), Syllable("ge", "��", "��"), Syllable("go", "��", "��"), 
										   Syllable("za", "��", "��"), Syllable("ji", "��", "��"), Syllable("zu", "��", "��"), Syllable("ze", "��", "��"), Syllable("zo", "��", "��"), 
										   Syllable("da", "��", "��"), Syllable("ji", "��", "��"), Syllable("zu", "��", "��"), Syllable("de", "��", "��"), Syllable("do", "��", "��"), 
										   Syllable("ba", "��", "��"), Syllable("bi", "��", "��"), Syllable("bu", "��", "��"), Syllable("be", "��", "��"), Syllable("bo", "��", "��"), 
										   Syllable("pa", "��", "��"), Syllable("pi", "��", "��"), Syllable("pu", "��", "��"), Syllable("pe", "��", "��"), Syllable("po", "��", "��") };

std::vector<Syllable> yoon_syllables = { Syllable("kya", "����", "����"), Syllable("kyu", "����", "����"), Syllable("kyo", "����", "����"), 
										 Syllable("gya", "����", "����"), Syllable("gyu", "����", "����"), Syllable("gyo", "����", "����"), 
										 Syllable("sha", "����", "����"), Syllable("shu", "����", "����"), Syllable("sho", "����", "����"), 
										 Syllable("jya", "����", "����"), Syllable("jyu", "����", "����"), Syllable("jyo", "����", "����"), 
										 Syllable("cha", "����", "����"), Syllable("chu", "����", "����"), Syllable("cho", "����", "����"), 
										 Syllable("nya", "�ˤ�", "�˥�"), Syllable("nyu", "�ˤ�", "�˥�"), Syllable("nyo", "�ˤ�", "�˥�"), 
										 Syllable("hya", "�Ҥ�", "�ҥ�"), Syllable("hyu", "�Ҥ�", "�ҥ�"), Syllable("hyo", "�Ҥ�", "�ҥ�"), 
										 Syllable("bya", "�Ӥ�", "�ӥ�"), Syllable("byu", "�Ӥ�", "�ӥ�"), Syllable("byo", "�Ӥ�", "�ӥ�"), 
										 Syllable("pya", "�Ԥ�", "�ԥ�"), Syllable("pyu", "�Ԥ�", "�ԥ�"), Syllable("pyo", "�Ԥ�", "�ԥ�"), 
										 Syllable("mya", "�ߤ�", "�ߥ�"), Syllable("myu", "�ߤ�", "�ߥ�"), Syllable("myo", "�ߤ�", "�ߥ�"), 
										 Syllable("rya", "���", "���"), Syllable("ryu", "���", "���"), Syllable("ryo", "���", "���") };

const auto size = syllables.size();
const auto dakuon_size = dakuon_syllables.size();
const auto yoon_size = yoon_syllables.size();

const Syllable* getSyllable(SyllableIndex index) {
	if (index < size)
		return &syllables[index];
	else if (index < size + dakuon_size)
		return &dakuon_syllables[index - size];
	else
		return &yoon_syllables[index - size - dakuon_size];
}

SyllableIndex getRandomIndex() {
	SyllableIndex index = rand() % (size + dakuon_size + yoon_size);
	return index;
}

const Syllable* getRandomSyllable() {
	return getSyllable(getRandomIndex());
}

