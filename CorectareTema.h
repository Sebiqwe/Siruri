#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//e)Dublati grupurile de 3 litere identice.
void inserarePeoPozitie(char* s, int pozitie, char element) {
	for (int i = strlen(s); i >= pozitie; i--) {
		s[i + 1] = s[i];
	
	
	}
	s[pozitie] = element;

	s[strlen(s) + 1] = '/0';
} 

void testare() {
	char s[100] = "ana are mere ";
	char element = ' m';
		inserarePeoPozitie(s, 2, element);
	
	cout << s << endl;


}
void inserareGrupuri(char* s, char *grup,int pozitie) {
	

	for (int i = 0; i < strlen(grup); i++) {
		inserarePeoPozitie(s,pozitie, grup[i]);
		pozitie += 1;;
	}
	
}
void testare2() {
	char s[100] = "ana are pere ";
	char grup[100] = "text";

	inserareGrupuri(s, grup, 3);
	cout << "dupa inserare"<<endl;
	cout << s << endl;



}
bool are3LitereIdentice(char* s, int pozitie) {
	if (s[pozitie] == s[pozitie + 1] && s[pozitie] == s[pozitie + 2]) {
		return true;
	}
	return false;


}
void inserareGrupuriIdentice(char* s,char *grup) {
	for (int i = 0; i < strlen(grup); i++) {
		if (are3LitereIdentice(grup, i)) {
			inserareGrupuri(s, grup, i);
		}
	
	}

}
void sol1() {
	char s[100] = "	aaa";
	char grup[100] = "aaa";
	inserareGrupuriIdentice(s, grup);
	cout << s << endl;



}
//f)Trasformati ultima litera din fiecare cuvant (doar daca este litera mica ) in litera mare.
bool esteLiteraMica(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			return true;
		
		}
	
	
	}
	return false;

}
void testLitera() {
	char s[100] = "a";
	if (esteLiteraMica(s)) {
		cout << "are litera mica " << endl;
	

	}
	else {
		cout << "nu are litera mica " << endl;
	}



}
void transfInLiteraMare(char* s) {
	for (int i = 0; i < strlen(s); i++) {
		if (esteLiteraMica(s)) {
			s[i] = s[i] - 32;
		
		
		}
	
	
	}



}
char ultimaLitera(char* s) {
	for (int i = strlen(s); i > 0; i--) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			return i;
		}
	
	
	
	}

	return -1;


}
void testareUltimaLitera() {
	char s[100] = "ana";

	ultimaLitera(s);
	cout << s << endl;
}

void transfUltimaLit(char* s) {

	char litera = s[strlen(s) - 1];

	if (litera < 'a') {
		return;
	}

	s[strlen(s) - 1] = litera - 32;



}

void transformar(char* s,char *nou) {
	

	char delim[100] = " ";

	char* cuvant = strtok(s, delim);

	while (cuvant != NULL) {

		
		

		transfUltimaLit(cuvant);


		strcat(nou, cuvant);

		strcat(nou, delim);

		cuvant = strtok(NULL, delim);
	}



}


void test() {
	char s[100] = "ana are mere";

	char nou[100] = "";

	transformar(s,nou);

	cout << nou << endl;



}
//Stergeti toate literele c si dublati toate literele d (c si d citite de la tastatura)
void stergereLitere(char* s,char pozitie) {
	for (int i = pozitie; i < strlen(s); i++) {
		s[i] = s[i + 1];

	}
	s[strlen(s) - 1] = '\0';


}
void inserareLitera(char* s, int pozitie, char elem) {
	for (int i = strlen(s); i >= pozitie; i--) {
		s[i + 1] = s[i];
	
	
	
	}
	s[pozitie] = elem;
	s[strlen(s) - 1] = '\0';

}
void stergereLiteraPtElem(char* s, char elem) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == elem) {
			stergereLitere(s, i);
		
		}
	
	
	
	}




}
void dublareToateElem(char* s, char elem) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == elem) {
			 inserareLitera(s, i, elem);

		
		}
	
	
	
		
	}
	

}
void testareF() {
	char s[100] = "ana are mere ";
	char literaC;
	cout << "c=" << endl;
	cin >> literaC;
	stergereLiteraPtElem(s,literaC );
	cout << s << endl;






}



void sol() {
	char s[100] = "ana are mere ";
	char literaC;
	char literaD;
	cout << "c=" << endl;
	cin >> literaC;
	cout << "d=" << endl;
	cin >> literaD;
	dublareToateElem(s, literaD);
	stergereLiteraPtElem(s, literaC);
	cout << s << endl;

}
















