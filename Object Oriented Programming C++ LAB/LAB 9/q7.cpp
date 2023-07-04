//WAP to convert currency specified in Rupees in one class into Dollar in another
//class

#include <iostream>
using namespace std;

class Rupee {
    float a = 100;
    public:
    int get_int(){
        return (a);
    }
    void display(){
        cout << "RUPEE : "<<a << endl;
    }
};

class Dollar {
    float b,d;
    public:
    void operator = (Rupee a){
        b = a.get_int();
        d = b*0.012;
    }
    void display(){
        cout <<"DOLLAR : "<< d << endl;
    }
};
int main(){
    Rupee a;
    Dollar b;
    b = a;
    a.display();
    b.display();
    return 0;
}
