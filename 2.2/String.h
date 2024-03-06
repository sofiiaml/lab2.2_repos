//String.h
#pragma once
#include <iostream>
using namespace std;
class String
{
private:
    char* str;
public:
    String();
    String(char* str);
    String(const String&);
    bool operator>(const String&);
    bool operator<(const String&);
    bool operator>=(const String&);
    bool operator<=(const String&);
    bool operator==(const String&);
    bool operator!=(const String&);
    
    friend ostream& operator<<(ostream&, const String&);
    friend istream& operator>>(istream&, String&);
};