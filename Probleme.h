#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std; 

//1)Sa se elimine spatiile multiple dintre cuvinte 
void eliminareDePePozitie(char *s, int pozitie ) {
	int n = strlen(s);
	for (int i = pozitie; i < strlen(s); i++) {
		s[i] = s[i + 1];
	
	
	}


	s[strlen(s) - 1] = '\0';

}


bool esteVocala(char s) {
	char v[100] = "aeiouAEIOU";
	return strchr(v, s);
}
void stergereVocale(char *s) {
	for (int i = 0; i < strlen(s); i++) {
		if (esteVocala( s[i])) {
			eliminareDePePozitie(s, i);
		}
	
	
	}
	
	
	
}







void testare() {
	char s[100] = "Ana are mere ";
	//eliminareDePePozitie(s, 2);
	//cout << "sirul dupa stergere este ";
	//cout << s << endl;
	stergereVocale(s);

	cout << s << endl;

}
//1c)Dublati toate vocalele mari si stergeti toate vocalele mici 
bool esteVocalaMica(char s) {
	char v1[100] = "aeiou";
	return strchr(v1, s);



}
bool esteVecoalaMare(char s) {
	char v2[100] = "AEIOU";
	return strchr(v2, s);

}																						
void inserareElem(char* s, int  pozitie,char key ) {										
	for (int i = s[strlen(s)-1] ; i >= pozitie; i--) {
		s[i + 1] = s[i];
		
	}
	s[pozitie] = key;


}
void dublareVocale(char* s) {
	for (int i = 0; i < s[strlen(s)]; i++) {
		if (esteVecoalaMare(s[i])) {
			inserareElem(s, i + 1, s[i]);
		
		}

	
	}




}
void strgVocaleMiciSiInserareVocaleMar(char* s) {

	for (int i = 0; i < strlen(s); i++) {
		if (esteVocalaMica(s[i])) {
			stergereVocale(s);
		}
		else if (esteVecoalaMare(s[i])) {
			dublareVocale(s);

		
		}
	
	
	}




}
void testare2() {
	char v[100] = "aeiclmAEI";
	strgVocaleMiciSiInserareVocaleMar(v);
	cout << v << endl;



}
