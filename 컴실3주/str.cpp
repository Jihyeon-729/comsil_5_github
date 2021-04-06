#include <iostream>
#include <cstring>
#include "str.h"
using namespace std;

#define MAX_SIZE 1000000000

Str::Str(int leng)
{
	if (leng<=0)
		cout << "size error!" << endl;
	else {
		len = leng;
	}
}

Str::Str(char *neyong) {
	len = strlen(neyong)+1;
	str = new char[len];
	strcpy(str, neyong);
}

Str::~Str() {
	delete(str);
}

int Str::length(void){
	return len;
}

char* Str::contents(void){
	return str;
}

int Str::compare(class Str& a) {
	return strcmp(str, a.str);
}

int Str::compare(char *a) {
	return strcmp(str, a);
}

void Str::operator=(char *a) {
	strcpy(str, a);	
	Str(strlen(str)+1);
}

void Str::operator=(class Str& a){
	strcpy(str, a.str);
	Str(strlen(str)+1);
}
