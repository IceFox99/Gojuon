#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Syllable.h"

std::vector<Syllable> syllables = { Syllable("a", "あ", "ア"), Syllable("i", "い", "イ"), Syllable("u", "う", "ウ"), Syllable("e", "え", "エ"), Syllable("o", "お", "オ"),
									Syllable("ka", "か", "カ"), Syllable("ki", "き", "キ"), Syllable("ku", "く", "ク"), Syllable("ke", "け", "ケ"), Syllable("ko", "こ", "コ"),
									Syllable("sa", "さ", "サ"), Syllable("shi", "し", "シ"), Syllable("su", "す", "ス"), Syllable("se", "せ", "セ"), Syllable("so", "そ", "ソ"),
									Syllable("ta", "た", "タ"), Syllable("chi", "ち", "チ"), Syllable("tsu", "つ", "ツ"), Syllable("te", "て", "テ"), Syllable("to", "と", "ト"),
									Syllable("na", "な", "ナ"), Syllable("ni", "に", "ニ"), Syllable("nu", "ぬ", "ヌ"), Syllable("ne", "ね", "ネ"), Syllable("no", "の", "ノ"),
									Syllable("ha", "は", "ハ"), Syllable("hi", "ひ", "ヒ"), Syllable("fu", "ふ", "フ"), Syllable("he", "へ", "ヘ"), Syllable("ho", "ほ", "ホ"),
									Syllable("ma", "ま", "マ"), Syllable("mi", "み", "ミ"), Syllable("mu", "む", "ム"), Syllable("me", "め", "メ"), Syllable("mo", "も", "モ"),
									Syllable("ya", "や", "ヤ"), Syllable("yu", "ゆ", "ユ"), Syllable("yo", "よ", "ヨ"),
									Syllable("ra", "ら", "ラ"), Syllable("ri", "り", "リ"), Syllable("ru", "る", "ル"), Syllable("re", "れ", "レ"), Syllable("ro", "ろ", "ロ"),
									Syllable("wa", "わ", "ワ"), Syllable("wo", "を", "ヲ"),
									Syllable("n", "ん", "ン") };

std::vector<Syllable> dakuon_syllables = { Syllable("ga", "が", "ガ"), Syllable("gi", "ぎ", "ギ"), Syllable("gu", "ぐ", "グ"), Syllable("ge", "げ", "ゲ"), Syllable("go", "ご", "ゴ"), 
										   Syllable("za", "ざ", "ザ"), Syllable("ji", "じ", "ジ"), Syllable("zu", "ず", "ズ"), Syllable("ze", "ぜ", "ゼ"), Syllable("zo", "ぞ", "ゾ"), 
										   Syllable("da", "だ", "ダ"), Syllable("ji", "ぢ", "ヂ"), Syllable("zu", "づ", "ヅ"), Syllable("de", "で", "デ"), Syllable("do", "ど", "ド"), 
										   Syllable("ba", "ば", "バ"), Syllable("bi", "び", "ビ"), Syllable("bu", "ぶ", "ブ"), Syllable("be", "べ", "ベ"), Syllable("bo", "ぼ", "ボ"), 
										   Syllable("pa", "ぱ", "パ"), Syllable("pi", "ぴ", "ピ"), Syllable("pu", "ぷ", "プ"), Syllable("pe", "ぺ", "ペ"), Syllable("po", "ぽ", "ポ") };

std::vector<Syllable> yoon_syllables = { Syllable("kya", "きゃ", "キャ"), Syllable("kyu", "きゅ", "キュ"), Syllable("kyo", "きょ", "キョ"), 
										 Syllable("gya", "ぎゃ", "ギャ"), Syllable("gyu", "ぎゅ", "ギュ"), Syllable("gyo", "ぎょ", "ギョ"), 
										 Syllable("sha", "しゃ", "シャ"), Syllable("shu", "しゅ", "シュ"), Syllable("sho", "しょ", "ショ"), 
										 Syllable("jya", "じゃ", "ジャ"), Syllable("jyu", "じゅ", "ジュ"), Syllable("jyo", "じょ", "ジョ"), 
										 Syllable("cha", "ちゃ", "チャ"), Syllable("chu", "ちゅ", "チュ"), Syllable("cho", "ちょ", "チョ"), 
										 Syllable("nya", "にゃ", "ニャ"), Syllable("nyu", "にゅ", "ニュ"), Syllable("nyo", "にょ", "ニョ"), 
										 Syllable("hya", "ひゃ", "ヒャ"), Syllable("hyu", "ひゅ", "ヒュ"), Syllable("hyo", "ひょ", "ヒョ"), 
										 Syllable("bya", "びゃ", "ビャ"), Syllable("byu", "びゅ", "ビュ"), Syllable("byo", "びょ", "ビョ"), 
										 Syllable("pya", "ぴゃ", "ピャ"), Syllable("pyu", "ぴゅ", "ピュ"), Syllable("pyo", "ぴょ", "ピョ"), 
										 Syllable("mya", "みゃ", "ミャ"), Syllable("myu", "みゅ", "ミュ"), Syllable("myo", "みょ", "ミョ"), 
										 Syllable("rya", "りゃ", "リャ"), Syllable("ryu", "りゅ", "リュ"), Syllable("ryo", "りょ", "リョ") };

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

