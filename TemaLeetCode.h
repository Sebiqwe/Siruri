#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//1)String t is generated by random shuffling string s and then add one more letter at a random position.
//Return the letter that was added to t.
char literaInPlus(char* s1, char* s2) {
	for (int i = 0; i < strlen(s2); i++) {
		if (strchr(s1, s2[i])==0) {
			return s2[i];
		
		}
	
	
	
	}

	


}
void sol1() {
	char s1[100] = "abcd";
	char s2[100] = "abcde";
	char litera = literaInPlus(s1, s2);
	if (literaInPlus(s1, s2)!=0) {
		cout << "litera in plus este " << litera << endl;
	
	
	}
	else {
		cout << "nu exista litera in plus " << endl;
	}


}
//2)Given a string s, reverse only all the vowels in the string and return it.
//The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
bool esteVocala(char s) {
	if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') {
		return true;
	}
	else {
		return false;
	}
}
void inverasareVocaleSir(char* s) {
	int sfSir = strlen(s) - 1;
	for (int i = 0; i < sfSir;i++) {
		if (esteVocala(s[i])) {
			while (i < sfSir && !esteVocala(s[sfSir])) {
				sfSir--;
			}
		
			if (i < sfSir) {
				char aux = s[i];
				s[i] = s[sfSir];
				s[sfSir] = aux;
				sfSir--;
			}
		}
	
	
	}


}
void sol2() {
	char s[100] = "IceCream";
	inverasareVocaleSir(s);
	cout << "sirul dupa moduificare este ";
	cout << s << endl;




}
//3)Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
int frecvLitere(char* s, int f[]) {
	for (int i = 0; i < strlen(s); i++) {
		char lit = s[i];
		f[lit]++;
	
	
	
	}

	return 0;


}
bool poateFiConstruit(char* s1, char* s2) {
	int f1[100] = {};
	int f2[100] = {};
	frecvLitere(s1, f1);
	frecvLitere(s2, f2);
	for (int i = 0; i < strlen(s2); i++) {
		if (f2[i] > f1[i]) {
			return false;
		}
	
	}
	return true;

}
void sol3() {
	char ransomNote[100] = "aa";
	char magazine[100] = "aab";
	if (poateFiConstruit(ransomNote, magazine)) {
		cout << "ransoNote poate fi contruit din magazine ";

	}else{
		"ransoNote NU poate fi contruit din magazine ";
	}





}
//4)We define the usage of capitals in a word to be right when one of the following cases holds:
//All letters in this word are capitals, like "USA".
//All letters in this word are not capitals, like "leetcode".
//Only the first letter in this word is capital, like "Google".
//Given a string word, return true if the usage of capitals in it is right.
bool toateLitSunMaj(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] < 'A' || s[i] > 'Z') {
			return false;
		}
	
	}
	return true;


}
bool toateLitSuntMici(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] < 'a' || s[i] > 'z') {
			return false;
		}
	
	}
	return true;

}
bool doarPrimaLitMaj(char* s) {
	if (s[0] < 'A' || s[0] > 'Z') {
		return false;
	}
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] < 'a' || s[i] > 'z') {
			return false;
		}
	
	}
	return true;
}
void sol4() {
	char s[100] = "Flag";
	if (toateLitSunMaj(s)) {
		cout << "toate lit sunt majuscule ";
	}
	else if (toateLitSuntMici(s)) {
		cout << "toate lit sunt mici  ";
	}
	else if (doarPrimaLitMaj(s)) {
		cout << "daor prima lit e majuscula ";
	}
	else {
		cout << "nu se indeplinesc cond ";
	}
}
//5)Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.Given a roman numeral, convert it to an integer.
int valCifRomane(char s) {
	if (s == 'I') {
		return 1;
	}if (s == 'V') {
		return 5;
	}if (s == 'X') {
		return 10;
	}
	if (s == 'L') {
		return 50;
	}
	if (s == 'C') {
		return 100;
	}
	if (s == 'D') {
		return 500;
	}
	if (s == 'M') {
		return 1000;
	}

}
int transfRomane(char* s) {
	int nrRez = 0;
	for (int i = 0; i < strlen(s); i++) {
		int valCif = valCifRomane(s[i]);
		int urmVal = valCifRomane(s[i + 1]);
		if (valCif < urmVal) {
			nrRez = nrRez - valCif;
		}
		else {
			nrRez = nrRez + valCif;
		}
	}
	return nrRez;

}
void sol5() {
	char s[100] = {};
	cout << s << endl;
	cin >> s;
	int nrRez = transfRomane(s);
	cout << nrRez << endl;


}
//6)You are given a string s consisting of digits. Perform the following operation repeatedly until the string has exactly two digits:
//For each pair of consecutive digits in s, starting from the first digit, calculate a new digit as the sum of the two digits modulo 10.
//Replace s with the sequence of newly calculated digits, maintaining the order in which they are computed.
//Return true if the final two digits in s are the same; otherwise, return false.
void calculSir(char* s, char*sNou) {
	for (int i = 0; i < strlen(s); i++) {
		int c1 = s[i] - '0';
		int c2 = s[i + 1] - '0';
		int cfinal = (c1 + c2) % 10;
		sNou[i] = cfinal + '0';
	
	}

	sNou[strlen(s) - 1] = 0;


}
bool uCifegale(char* s) {
	char sNou[100] = "";
	while (strlen(s) > 2) {
		calculSir(s, sNou);
		strcpy(s, sNou);
	
	}
	return s[0] == s[1];

}
void sol6() {
	char s[100] = "34789";
	if (uCifegale(s)) {
		cout << "adevarat" << endl;
	}
	else {
		cout << "fals" << endl;
	}


}
//7)Given a string s consisting of lowercase English letters, return the first letter to appear twice.
bool primaLitapareDeDouaOri(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		for (int j = i+1; j < strlen(s); j++) {
			if (s[i] == s[j]) {
				return true;
			}
		
		}

	}
	return false;

}
void sol7() {
	char s[100] = "abccbaacz";
	if (primaLitapareDeDouaOri(s)) {
		cout << "prima lit apare de doua ori " << endl;
	}
	else {
		cout << "prima lit nu apare de ddoua ori " << endl;
	}


}
//8)You are given a string s consisting only of letters 'a' and 'b'. In a single step you can remove one palindromic subsequence from s.
//Return the minimum number of steps to make the given string empty.
bool estePalindrom(char* s) {
	for (int i = 0; i < strlen(s)/2; i++) {
		if (s[i] != s[strlen(s)-1-i]) {
			return false;
		}
	}
	return true;


}
void eliminarePalindrom(char* s) {
	if (estePalindrom(s)) {
		s[0] = '\0';
	}


}
void sol8() {
	char s[100] = "abba";
	eliminarePalindrom(s);
	cout << "sirul dupa elimiare este " << s << endl;


}
//10)You are given a string title consisting of one or more words separated by a single space, where each word consists of English letters. Capitalize the string by changing the capitalization of each word such that:
//If the length of the word is 1 or 2 letters, change all letters to lowercase.
//Otherwise, change the first letter to uppercase and the remaining letters to lowercase.
//Return the capitalized title.
bool esteLitMare(char s) {
	if (s >= 'A' && s <= 'Z') {
		return true;
	}
	return false;



}
char transfInLitMica(char s) {
	if (esteLitMare(s)) {
		s = s + 32;
	
	}

	return s;



}
char transfInLiteraMare(char s) {
	if (s >= 'a' && s <= 'z') {
		s = s - 32;
	}
	return s;

}
void transfCuv(char* s) {
	if (strlen(s) < 2) {
		for (int i = 0; i < strlen(s); i++) {
			s[i] = transfInLitMica(s[i]);
		
		}
	
	
	}
	else {
		s[0] = transfInLiteraMare(s[0]);
		for (int i = 1; i < strlen(s); i++) {
			s[i] = transfInLitMica(s[i]);
		
		
		}
	}

}
void transfTitlu(char* s) {
	char* cuv = strtok(s, " ");
	while (cuv != 0) {
		transfCuv(cuv);
		cuv = strtok(0, " ");
	
	
	}



}
void sol10() {
	char s[100] = "cuMparaTuri";
	transfTitlu(s);
	cout << "titlul dupa ce a fost transf este:  " << s << endl;





}