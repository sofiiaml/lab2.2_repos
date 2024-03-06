#include <iostream>
#include "String.h"
using namespace std;
int main()
{
    String s1, s2;

    cout << "s1 "; cin >> s1; cout << endl;
    cout << "s2 "; cin >> s2; cout << endl;

    cout << "s1 > s2: " << (s1 > s2 ? "true" : "false") << endl;
    cout << "s1 < s2: " << (s1 < s2 ? "true" : "false") << endl;
    cout << "s1 >= s2: " << (s1 >= s2 ? "true" : "false") << endl;
    cout << "s1 <= s2: " << (s1 <= s2 ? "true" : "false") << endl;
    cout << "s1 == s2: " << (s1 == s2 ? "true" : "false") << endl;
    cout << "s1 != s2: " << (s1 != s2 ? "true" : "false") << endl;

    return 0;
}


