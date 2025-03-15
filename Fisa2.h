#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
////1)Scrie secventa de instructiuni care permite afisarea pe ecran a mesajului Corect daca un sir de maxim 100 de caractere retinut in variabila s contine caractere de tip cifra sau mesajul incorect in caz contrar 
void  contineCaractDeTipCif(char* s) {
	if (strpbrk(s, "0123456789")) {
		cout << "Corect" << endl;
	
	
	}
	else {
		cout << "Incorect" << endl;
	
	}



}
void sol1() {
	char s[100] = "abcde";
	contineCaractDeTipCif(s);



}
//2)Scrie un program cin c++ care citeste de la tastatura 2 siruri  de carcatere formate din maximum 100 de litere mici ale alfabetului englez si afiseaza pe ecran cel mai lung sufix comun al celor 2 siruri de carcatere.Daca cele doua siruri nu au niciun sufix comun atunci programul va afisa " NU EXISTA"
int sufixSir(char* s1,char*s2) {
	int sufix = 0;
	for (int i = 0; i < strlen(s1) && i < strlen(s2); i++) {
		if (s1[strlen(s1) - i] == s2[strlen(s2) - i]) {
			sufix++;
		
		}
	
	}
	return sufix;

}
void lungimeSufixEgala(char* s,int sufix) {
	if (sufix == 0) {
		cout << "NU EXISTA" << endl;
	}
	else {
		cout << "Cel mai lung sufix este " << endl;
		for (int i = strlen(s) - sufix; i < strlen(s); i++) {
			cout << s[i];
		}
		

	}



}
void sol2() {
	char s1[100] = "abcdef";
	char s2[100] = "acafefecdef";
	int sufix = sufixSir(s1, s2);
	lungimeSufixEgala(s1, sufix);



}
//3)Sirul de carctere s2 este "clona "sirului de caractere s1 daca se poate obtine din s1 prin eliminarea tuturor aparitiilor une singure vocale/Se considera voclala orice litera din multimea{a,e,i,o,u}.
// Scrieti un program in c++ care citeste de la tast cel mult 20 de litere mici si afiseaza pe ecran toate clonele acestui cuvant
bool esteVocala(char s) {
	if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') {
		return true;
	}
	else {
		return false;
	}

}
void clonaCuvant(char* s, char vocala) {
		char clona[20] = {};
		int d = 0;
		for (int i = 0; i<strlen(s); i++) {
			if (s[i] != vocala) {
				clona[d] = s[i];
				d++;
			}
		
		}
		cout << "clona este " << clona << endl;
	}
void afisareClone(char* s) {
	char vocale[100] = "aeiou";
	for (int i = 0; i<strlen(vocale); i++) {
		clonaCuvant(s, vocale[i]);
	
	}


}
void sol3() {
	char s[100] = "informatica";
	afisareClone(s);

}
//4)Scrie un program care citeste de la tastatura 2 carcatere c1 si c22 si un text avand cel mult 250 carcatere pe care il modifica inlocuid toate aparitiile caract memorat in c1 ci cel memorat in c2 si toate apariitile celui din c2 in c1.
//Programul afiseaza pe linii separate ale ecranului atat textul initial cat si textul obtinut dupa efectuarea inlocuirilor 
void inlocuire(char* s, char c1, char c2) {
	for (int i = 0; i <strlen(s); i++) {
		if (s[i] == c1) {
			s[i] = c2;
		}
		else if(s[i]==c2) {
			s[i] = c1;
		}
	
	
	
	}




}
void sol4() {
	char s[100] = " hocus pocus prepararus ";
	char c1;
	cout << "c1= " << endl;
	cin >> c1;
	char c2;
	cout << "c2= " << endl;
	cin >> c2;
	inlocuire(s, c1, c2);
	cout << "textul inlocuit este " << s << endl;


}