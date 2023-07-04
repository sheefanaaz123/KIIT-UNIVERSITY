//WAP for the demonstration of objects passed an arguments.

#include <iostream>
using namespace std;

class Student {
                                        //compared the marks of 2 students
   public:
    double marks;

    Student(double m) {
        marks = m;
    }
};

void Compare_Marks(Student s1, Student s2) {
    cout<<"Whose marks is greater? Student 1 or Student 2"<<endl<<endl;
    if(s1.marks>s2.marks)
     cout <<"Student 1 marks is greater than Student 2" << endl;
    else
     cout<<"Student 2 marks is greater than Student 1"<<endl;
}

int main() {
    Student student1(89.0), student2(90.0);
    Compare_Marks(student1, student2);

    return 0;
}
