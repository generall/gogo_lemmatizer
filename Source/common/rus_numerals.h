#ifndef __rus_numerals
#define __rus_numerals

#include  "utilit.h"

struct CNumeralToNumber
{
	char				m_Cardinal[25]; // "���"
	char				m_Ordinal[25]; // "������"
	char				m_Adverb[25]; // "������"
	char				m_Noun[25]; //  "����"
	char				m_RomanNumber[25]; // II
	double				m_Number; // 2
};

const size_t NumeralToNumberCount = 40;
extern const CNumeralToNumber NumeralToNumber[];

extern string IntToStr (double i);
extern string FindByNumber(QWORD Number);
extern int IsAdverbRule(const string& Lemma);
extern double GetCardinalNumeral(const string& word);
extern QWORD GetOrdinalNumeral(const string& word);
extern QWORD GetNounNumeral(const string& word);


#endif


