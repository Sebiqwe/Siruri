#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//2)a)Realizati un nou sir cu toate cuvintele palindroame
bool estePalindrom(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] != s[strlen(s) - i - 1]) {
			return false;
		
		}
	
	
	}


	return true;

}
void sol1() {
	char s1[100] = "AnA are mere si pere ";
	char* sirCuvinte = {};
	char sNou[100]="";
	sirCuvinte = strtok(s1, " ");
	while (s1 != 0) {
		if (estePalindrom(sirCuvinte)) {
			strcat(sNou, sirCuvinte);
			strcat(sNou, " ");

		}
		sirCuvinte=strtok(0, "");
	}
	cout << "sirul nou este ";
}
//b)Afisati cuvantul cu cele mai multe vocale 
int contorVocale(char* s) {
	int contor = 0;
	for (int i = 0; i < strlen(s); i++) {
		char litera = s[i];
		if (litera == 'a' || litera == 'e' || litera == 'i' || litera == 'o' || litera == 'u') {
			contor++;
		
		}
	
	
	}
	return contor;
}
void sol2() {
	char s1[100] = " ana are portocale";
	char* cuvant;
	char cuvantCuCeleMaiMulteVocale[100] = "";
	int maximVocala = 0;
	cuvant = strtok(s1, " ");
	while (cuvant != NULL) {
		int contorV = contorVocale(cuvant);
		if (contorV > maximVocala) {
			maximVocala = contorV;
			strcpy(cuvantCuCeleMaiMulteVocale, cuvant);
		
		}
	
		cuvant = strtok(NULL, " ");
	}

	cout << "cuvantul cu cele mai multe vocale este " << cuvantCuCeleMaiMulteVocale << endl;

}
//c)Modificati sirul citit astfel incat sa stergeti toate cuvintele ce au mai  putin de 4 caractere
void stergereCuvCu4Litere(char* s) {
	char* cuvant;
	char sNou[100] = "";
	int litereCuv = 4;
	cuvant = strtok(s, " ");
	while (cuvant != NULL) {
		if (strlen(cuvant) >=litereCuv) {
			strcat(sNou, cuvant);
			strcat(sNou, " ");
		
		}
		cuvant = strtok(NULL, " ");
	}

	strcpy(s, sNou);


}
void sol3() {
	char s1[100] = "Sebastian nu are mere ";
	stergereCuvCu4Litere(s1);
	cout << "sirul dupa stergere este " << s1 << endl;



}
//d)Care este al treilea cuvant citit.Daca sirul nu are cel putin 3 cuvinte se va afisa un mesaj -->Nu imi iese 
//e)Dublati grupurile de 3 litere identice -->NU stiu 
bool areLitereIdentice(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
			return true;
		
		}
	
	
	
	}
	return false;
	


}
//f)Trasformati ultima litera din fiecare cuvant (doar daca este litera mica ) in litera mare-->NU stiu 
bool esteLiteraMica(char* s) {
	char ultimaLitera = s[strlen(s) - 1];
	if (ultimaLitera >= 'a' && ultimaLitera <= 'z') {
		return true;
	
	}
	return false;

}
void transfInFliteraMare(char* s) {
	






}
//h)Sa se afiseze toate cuvintele ce au prefix pe primul cuvant al textului.
bool incepeCuPrefix(char* s, char* prefix) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] != prefix[i]) {
			return false;



		}
	
	
	}
	return true;


}
void cuvCuPrefix(char* s, char* prefix) {
	char* cuvant = strtok(s, " ");
	while (cuvant != NULL) {
		if (incepeCuPrefix(s, prefix)) {
			cout << cuvant << endl;
		
		}
		cuvant = strtok(NULL, " ");
	
	}



}
void sol7() {
	char s[100] = "ana are mere si ana are pere ";
	char primulCuv[100];
	strcpy(primulCuv, strtok(s, " "));
	cout << "prefixul este " << primulCuv << endl;



}
//1)Dublati toate vocalele mari si tregeti toate vocalele mici 
bool esteVocalaMare(char s) {
	if (s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U') {
		return true;
	}
	return false;


}
bool esteVocalaMica(char s) {
	if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') {
		return true;
	}
	return false;


}
void dublareVocaleMari(char* s,int &n,int pozitie) {
	if (esteVocalaMare(s[pozitie])) {
		for (int i = n; i > pozitie; i--) {
			s[i+1] = s[i];

		}
		s[pozitie + 1] = s[pozitie];
		n++;
	}


}
void stergereVocalaMica(char* s, int&n, int pozitie) {
	if (esteVocalaMica(s[pozitie])) {
		for (int i = pozitie; i < n; i++) {
			s[i] = s[i + 1];
		
		}
		n--;
	
	}




}
void sirFinal(char* s) {
	int n = strlen(s);
	for (int i = 0; i < strlen(s); i++) {
		if (esteVocalaMare(s[i])) {
			dublareVocaleMari(s, n, i);
			i++;
		}
		else if (esteVocalaMica(s[i])) {
			stergereVocalaMica(s, n, i);
			i--;
		
		}
	
	
	
	}


}
void sol10() {
	char s[100] = "Ana are mere si pere ";
	sirFinal(s);
	cout << "sirul transf este " << s << endl;


}
//Realizati suma tuturor cifrelor din sir.
int sumaCifreSir(char* s) {
	int suma = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			suma = suma + (s[i]-'0');
		}
	
	
	}
	return suma;


}
void sol11() {
	char s[100] = "Ana are 6 mere si 8 pere ";
	int suma = sumaCifreSir(s);
	cout << "suma cif din sir este " << suma << endl;


}
//Realizati media aritmetica a tuturor codurilor ASCII la caracterele de tip litera mica
int CodAscii(char* s) {
	int suma = 0;
	for (int i = 0; i < strlen(s); i++) {
		suma = suma + s[i];
	
	}
	return suma;
}
double mediaAritmetica(char* s) {
	int suma = CodAscii(s);
	int contor = strlen(s);
	if (contor > 0) {
		return (double)suma / contor;
	}

}
void sol12() {
	char s[100] = "ana are mere si pere";
	double media = mediaAritmetica(s);
	cout << "media codurilor ascii este " << media << endl;


}
//Interschimbati elementele sirului in oglinda fata de mijloc 
void interschimbareElemInOglind(char* s) {
	for (int i = 0; i < strlen(s) / 2; i++) {
		for (int j = strlen(s); j > strlen(s) / 2; j--) {
			if (i + j == strlen(s) - 1) {
				char aux = s[i];
				s[i] = s[j];
				s[j] = aux;
			}
		}
	
	
	}





}
void sol13() {
	char s[100] = "Ana are mere ";
	interschimbareElemInOglind(s);
	cout << "sirul dupa interschimbare este " << endl;
	cout << s << endl;


}
//Cate litere mici avem?Sunt toate consoane?
bool esteLiteraMica(char s) {
	if (s >= 'a' && s <= 'z') {
		return true;
	}
	return false;



}
int contorLitereMici(char* s) {
	int contor = 0;
	for (int i = 0; i < strlen(s); i++) {

		if (esteLiteraMica(s[i])) {
			contor++;

		}
	
	}
	return contor;
}
void sol14() {
	char s[100] = "Ana nu are mere ";
	int contor = contorLitereMici(s);
	cout << "nr de litere mici este " << contor << endl;


}
//Sa se faca prima litera din fiecare cuvant mare si sa se inlocuiasca ultima litera cu urmatoarea din alfabet--Nu stiu 
//Stergeti toate literele c si dublati toate literele d (c si d citite de la tastatura)--Nu stiu  


