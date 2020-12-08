#pragma once
#include <iostream>
#include <string>
#include <vector>

class Syllable {
private:
	std::string romaji;
	std::string hiragana;
	std::string katakana;
public:
	Syllable(const std::string& romaji, const std::string& hiragana, const std::string& katakana) :
		romaji(romaji), hiragana(hiragana), katakana(katakana) {}
	const std::string& getRomaji() const {
		return this->romaji;
	}
	const std::string& getHiragana() const {
		return this->hiragana;
	}
	const std::string& getKatakana() const {
		return this->katakana;
	}
};

extern std::vector<Syllable> syllables;
extern std::vector<Syllable> dakuon_syllables;
extern std::vector<Syllable> yoon_syllables;
typedef decltype(syllables.size()) SyllableIndex;

const Syllable* getSyllable(SyllableIndex index);
SyllableIndex getRandomIndex();
const Syllable* getRandomSyllable();
inline const std::string& getRandomKana(const Syllable* syllable, bool isHiragana) {
	return (isHiragana) ? syllable->getHiragana() : syllable->getKatakana();
}