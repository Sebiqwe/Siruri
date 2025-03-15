#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void teorie() {


	char x[100] = "ce mai faci";

	char  test[100] = "ana are o casa ";


	//cout << "Introduceti un text" << endl;

	//cin.getline(x, 100);

	//x[2] = '\0';
	//cout << x << endl;



	//cout << strlen(x);


	//strcpy_s(test, x);

	//cout << test << endl;

	// strcat_s(test, x);


	 //cout << test << endl;

	// strncat_s(test, x, 2);
	// cout << test << endl;
	//char literaCautata = 'a';
	//cout<<strchr(test,literaCautata);

	//cout<<strrchr(test, literaCautata);

	 char s1[100] = "sebi are mere ";
	 char s2[100] = "sebi nu  are pere  ";
		 //if (strcmp(s1, s2) == 0) {

		 //	cout << "S1=S2" << endl;

		 //}
		 //else {
		 //	cout << "s1 dif s2" << endl;

		 //}

		 //cout<<strstr(s1, s2);

		 // cout << _stricmp(s1, s2) << endl;

		 // cout << strcspn(s1, s2) << endl;
	 	 cout << strspn(s1, s2) << endl;

}
void functieStrTok() {

	char text[100] = "Acesta este un exemplu de text  cu mai multe cuvinte separate prin spatii si semne de punctuatie.";
	char delim[] = " ";
	char* cuvant = strtok(text, " ");

	while (cuvant != NULL) {
		cout << cuvant << endl;
		cuvant = strtok(NULL, delim);
	}


}
void functii() {
	char s[100] = "SEBI ARE MERE ";
	char a[100] = "sebi are pere  ";
	char s2[100] = "12345649.90";
	//cout << _strlwr(s) << endl;
	//cout << _strupr(a) << endl;
	//cout<<strpbrk(s, a) << endl;
	//double n = atof(s2);
	//cout << "n convetit este " << n << endl;
	//int n = atoi(s2);
	//cout << "sirulu convetit in n este " << n << endl;
	int n = 12345;
	char s3[100];
	_itoa(n, s3, 10);
	cout << "nr convetit este  " << s3 << endl;


}







