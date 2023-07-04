#include<iostream>
#include<conio.h>
using namespace std;

void A(int x) {
    try {
        if (x > 0)
            throw x;
        else
            throw 'x';
    } catch (int x) {
        cout << "Catching a integer " << x;
    } catch (char x) {
        cout << "Catch a character and that character is:" << x;
    }
}

int main() {
    
    cout << "Testing multiple catches\n:";
    A(10);
    A(0);
    return 0;
} 
