#include "Pointer_function.cpp"
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[] = "I want 1000 dollars";
    char original[50];
    strcpy(original, a);

    reverse(a);
    cout << a << endl;

    strcpy(a, original);
    delete_char(a, '1');
    cout << a << endl;

    strcpy(a, original);
    pad_right(a, 5);
    cout << a << endl;
    trim_right(a);
    cout << a << endl;

    strcpy(a, original);
    pad_left(a, 5);
    cout << a << endl;
    trim_left(a);
    cout << a << endl;

    strcpy(a, original);
    truncate(a, 6);
    cout << a << endl;

    strcpy(a, original);
    char b[] = "ValoolaV";
    cout << is_palindrome(a) << endl;
    cout << is_palindrome(b) << endl;


    return 0;
}