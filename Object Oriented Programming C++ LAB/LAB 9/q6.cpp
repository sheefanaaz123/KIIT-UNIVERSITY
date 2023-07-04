#include <iostream>
using namespace std;

class Celsius {
    float a = 33;
    public:
    int get_int(){
        return (a);
    }
    void display(){
        cout << "CELSIUS : "<<a << endl;
    }
};

class Fahreinheit {
    float b,f;
    public:
    void operator = (Celsius a){
        b = a.get_int();
        f = (1.8 * b) + 32;
    }
    void display(){
        cout <<"FAHREINHEIT : "<< f << endl;
    }
};
int main(){
    Celsius a;
    Fahreinheit b;
    b = a;
    a.display();
    b.display();
    return 0;
}

