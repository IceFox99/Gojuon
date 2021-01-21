#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Gojuon.h"

std::vector<Gojuon> gojuon = { Gojuon("a", "��", "��"), Gojuon("i", "��", "��"), Gojuon("u", "��", "��"), Gojuon("e", "��", "��"), Gojuon("o", "��", "��"),
									Gojuon("ka", "��", "��"), Gojuon("ki", "��", "��"), Gojuon("ku", "��", "��"), Gojuon("ke", "��", "��"), Gojuon("ko", "��", "��"),
									Gojuon("sa", "��", "��"), Gojuon("shi", "��", "��"), Gojuon("su", "��", "��"), Gojuon("se", "��", "��"), Gojuon("so", "��", "��"),
									Gojuon("ta", "��", "��"), Gojuon("chi", "��", "��"), Gojuon("tsu", "��", "��"), Gojuon("te", "��", "��"), Gojuon("to", "��", "��"),
									Gojuon("na", "��", "��"), Gojuon("ni", "��", "��"), Gojuon("nu", "��", "��"), Gojuon("ne", "��", "��"), Gojuon("no", "��", "��"),
									Gojuon("ha", "��", "��"), Gojuon("hi", "��", "��"), Gojuon("fu", "��", "��"), Gojuon("he", "��", "��"), Gojuon("ho", "��", "��"),
									Gojuon("ma", "��", "��"), Gojuon("mi", "��", "��"), Gojuon("mu", "��", "��"), Gojuon("me", "��", "��"), Gojuon("mo", "��", "��"),
									Gojuon("ya", "��", "��"), Gojuon("yu", "��", "��"), Gojuon("yo", "��", "��"),
									Gojuon("ra", "��", "��"), Gojuon("ri", "��", "��"), Gojuon("ru", "��", "��"), Gojuon("re", "��", "��"), Gojuon("ro", "��", "��"),
									Gojuon("wa", "��", "��"), Gojuon("wo", "��", "��"),
									Gojuon("n", "��", "��") };

std::vector<Gojuon> dakuon = { Gojuon("ga", "��", "��"), Gojuon("gi", "��", "��"), Gojuon("gu", "��", "��"), Gojuon("ge", "��", "��"), Gojuon("go", "��", "��"), 
										   Gojuon("za", "��", "��"), Gojuon("ji", "��", "��"), Gojuon("zu", "��", "��"), Gojuon("ze", "��", "��"), Gojuon("zo", "��", "��"), 
										   Gojuon("da", "��", "��"), Gojuon("ji", "��", "��"), Gojuon("zu", "��", "��"), Gojuon("de", "��", "��"), Gojuon("do", "��", "��"), 
										   Gojuon("ba", "��", "��"), Gojuon("bi", "��", "��"), Gojuon("bu", "��", "��"), Gojuon("be", "��", "��"), Gojuon("bo", "��", "��"), 
										   Gojuon("pa", "��", "��"), Gojuon("pi", "��", "��"), Gojuon("pu", "��", "��"), Gojuon("pe", "��", "��"), Gojuon("po", "��", "��") };

std::vector<Gojuon> yoon = { Gojuon("kya", "����", "����"), Gojuon("kyu", "����", "����"), Gojuon("kyo", "����", "����"), 
										 Gojuon("gya", "����", "����"), Gojuon("gyu", "����", "����"), Gojuon("gyo", "����", "����"), 
										 Gojuon("sha", "����", "����"), Gojuon("shu", "����", "����"), Gojuon("sho", "����", "����"), 
										 Gojuon("jya", "����", "����"), Gojuon("jyu", "����", "����"), Gojuon("jyo", "����", "����"), 
										 Gojuon("cha", "����", "����"), Gojuon("chu", "����", "����"), Gojuon("cho", "����", "����"), 
										 Gojuon("nya", "�ˤ�", "�˥�"), Gojuon("nyu", "�ˤ�", "�˥�"), Gojuon("nyo", "�ˤ�", "�˥�"), 
										 Gojuon("hya", "�Ҥ�", "�ҥ�"), Gojuon("hyu", "�Ҥ�", "�ҥ�"), Gojuon("hyo", "�Ҥ�", "�ҥ�"), 
										 Gojuon("bya", "�Ӥ�", "�ӥ�"), Gojuon("byu", "�Ӥ�", "�ӥ�"), Gojuon("byo", "�Ӥ�", "�ӥ�"), 
										 Gojuon("pya", "�Ԥ�", "�ԥ�"), Gojuon("pyu", "�Ԥ�", "�ԥ�"), Gojuon("pyo", "�Ԥ�", "�ԥ�"), 
										 Gojuon("mya", "�ߤ�", "�ߥ�"), Gojuon("myu", "�ߤ�", "�ߥ�"), Gojuon("myo", "�ߤ�", "�ߥ�"), 
										 Gojuon("rya", "���", "���"), Gojuon("ryu", "���", "���"), Gojuon("ryo", "���", "���") };

const auto size = gojuon.size();
const auto dakuon_size = dakuon.size();
const auto yoon_size = yoon.size();

const Gojuon* getGojuon(GojuonIndex index) {
	if (index < size)
		return &gojuon[index];
	else if (index < size + dakuon_size)
		return &dakuon[index - size];
	else
		return &yoon[index - size - dakuon_size];
}

GojuonIndex getRandomIndex() {
	GojuonIndex index = rand() % (size + dakuon_size + yoon_size);
	return index;
}

const Gojuon* getRandomGojuon() {
	return getGojuon(getRandomIndex());
}

