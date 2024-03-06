//String.cpp
#include "String.h"
#include <iostream>
#include <string.h>
using namespace std;
String::String() {
	str = new char[100];
	str[0] = '\0';
}
String::String(char* str) {
	this->str = new char[strlen(str) + 1];
	strcpy_s(this->str,strlen(str)+1,str);
}
String::String(const String& s) {
	this->str = new char[strlen(s.str) + 1];
	strcpy_s(this->str, strlen(s.str) + 1, s.str);
}
bool String::operator>(const String& s) {
	int size = strlen(str) > strlen(s.str) ? strlen(s.str) : strlen(str);
	for (int i = 0;i < size;i++) {
		if (str[i] > s.str[i]) {
			return true;
		}
	}
	return false;
}
bool String::operator<(const String& s) {
	int size = strlen(str) > strlen(s.str) ? strlen(s.str) : strlen(str);
	for (int i = 0;i < size;i++) {
		if (str[i] < s.str[i]) {
			return true;
		}
	}
	return false;
}
bool String::operator>=(const String& s) {
	return *this > s || *this == s;
}
bool String::operator<=(const String& s) {
	return *this < s || *this == s;
}
bool String::operator==(const String& s) {
	if (strlen(str) != strlen(s.str)) {
		return false;
	}
	for (int i = 0;i < strlen(str);i++) {
		if (str[i] != s.str[i]) {
			return false;
		}
	}
	return true;
	/*return strcmp(str, s.str) == 0;*/
}
bool String::operator!=(const String& s) {
	return strcmp(str, s.str) != 0;
}

ostream& operator<<(ostream& out, const String& s) {
	out << s;
	return out;
}
istream& operator>>(istream& in, String& s) {
	cout << " Enter string: ";
	in.getline(s.str, 100);
	return in;
}