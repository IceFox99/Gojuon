#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Gojuon.h"

std::vector<Gojuon> gojuon = { Gojuon("a", "あ", "ア"), Gojuon("i", "い", "イ"), Gojuon("u", "う", "ウ"), Gojuon("e", "え", "エ"), Gojuon("o", "お", "オ"),
									Gojuon("ka", "か", "カ"), Gojuon("ki", "き", "キ"), Gojuon("ku", "く", "ク"), Gojuon("ke", "け", "ケ"), Gojuon("ko", "こ", "コ"),
									Gojuon("sa", "さ", "サ"), Gojuon("shi", "し", "シ"), Gojuon("su", "す", "ス"), Gojuon("se", "せ", "セ"), Gojuon("so", "そ", "ソ"),
									Gojuon("ta", "た", "タ"), Gojuon("chi", "ち", "チ"), Gojuon("tsu", "つ", "ツ"), Gojuon("te", "て", "テ"), Gojuon("to", "と", "ト"),
									Gojuon("na", "な", "ナ"), Gojuon("ni", "に", "ニ"), Gojuon("nu", "ぬ", "ヌ"), Gojuon("ne", "ね", "ネ"), Gojuon("no", "の", "ノ"),
									Gojuon("ha", "は", "ハ"), Gojuon("hi", "ひ", "ヒ"), Gojuon("fu", "ふ", "フ"), Gojuon("he", "へ", "ヘ"), Gojuon("ho", "ほ", "ホ"),
									Gojuon("ma", "ま", "マ"), Gojuon("mi", "み", "ミ"), Gojuon("mu", "む", "ム"), Gojuon("me", "め", "メ"), Gojuon("mo", "も", "モ"),
									Gojuon("ya", "や", "ヤ"), Gojuon("yu", "ゆ", "ユ"), Gojuon("yo", "よ", "ヨ"),
									Gojuon("ra", "ら", "ラ"), Gojuon("ri", "り", "リ"), Gojuon("ru", "る", "ル"), Gojuon("re", "れ", "レ"), Gojuon("ro", "ろ", "ロ"),
									Gojuon("wa", "わ", "ワ"), Gojuon("wo", "を", "ヲ"),
									Gojuon("n", "ん", "ン") };

std::vector<Gojuon> dakuon = { Gojuon("ga", "が", "ガ"), Gojuon("gi", "ぎ", "ギ"), Gojuon("gu", "ぐ", "グ"), Gojuon("ge", "げ", "ゲ"), Gojuon("go", "ご", "ゴ"), 
										   Gojuon("za", "ざ", "ザ"), Gojuon("ji", "じ", "ジ"), Gojuon("zu", "ず", "ズ"), Gojuon("ze", "ぜ", "ゼ"), Gojuon("zo", "ぞ", "ゾ"), 
										   Gojuon("da", "だ", "ダ"), Gojuon("ji", "ぢ", "ヂ"), Gojuon("zu", "づ", "ヅ"), Gojuon("de", "で", "デ"), Gojuon("do", "ど", "ド"), 
										   Gojuon("ba", "ば", "バ"), Gojuon("bi", "び", "ビ"), Gojuon("bu", "ぶ", "ブ"), Gojuon("be", "べ", "ベ"), Gojuon("bo", "ぼ", "ボ"), 
										   Gojuon("pa", "ぱ", "パ"), Gojuon("pi", "ぴ", "ピ"), Gojuon("pu", "ぷ", "プ"), Gojuon("pe", "ぺ", "ペ"), Gojuon("po", "ぽ", "ポ") };

std::vector<Gojuon> yoon = { Gojuon("kya", "きゃ", "キャ"), Gojuon("kyu", "きゅ", "キュ"), Gojuon("kyo", "きょ", "キョ"), 
										 Gojuon("gya", "ぎゃ", "ギャ"), Gojuon("gyu", "ぎゅ", "ギュ"), Gojuon("gyo", "ぎょ", "ギョ"), 
										 Gojuon("sha", "しゃ", "シャ"), Gojuon("shu", "しゅ", "シュ"), Gojuon("sho", "しょ", "ショ"), 
										 Gojuon("jya", "じゃ", "ジャ"), Gojuon("jyu", "じゅ", "ジュ"), Gojuon("jyo", "じょ", "ジョ"), 
										 Gojuon("cha", "ちゃ", "チャ"), Gojuon("chu", "ちゅ", "チュ"), Gojuon("cho", "ちょ", "チョ"), 
										 Gojuon("nya", "にゃ", "ニャ"), Gojuon("nyu", "にゅ", "ニュ"), Gojuon("nyo", "にょ", "ニョ"), 
										 Gojuon("hya", "ひゃ", "ヒャ"), Gojuon("hyu", "ひゅ", "ヒュ"), Gojuon("hyo", "ひょ", "ヒョ"), 
										 Gojuon("bya", "びゃ", "ビャ"), Gojuon("byu", "びゅ", "ビュ"), Gojuon("byo", "びょ", "ビョ"), 
										 Gojuon("pya", "ぴゃ", "ピャ"), Gojuon("pyu", "ぴゅ", "ピュ"), Gojuon("pyo", "ぴょ", "ピョ"), 
										 Gojuon("mya", "みゃ", "ミャ"), Gojuon("myu", "みゅ", "ミュ"), Gojuon("myo", "みょ", "ミョ"), 
										 Gojuon("rya", "りゃ", "リャ"), Gojuon("ryu", "りゅ", "リュ"), Gojuon("ryo", "りょ", "リョ") };

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

