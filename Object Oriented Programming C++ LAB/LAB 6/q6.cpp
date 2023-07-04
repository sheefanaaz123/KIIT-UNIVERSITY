 #include<iostream>
using namespace std;
class student
{
 protected:
 int roll_number;
 char name[];
 int section;
 public:
 void get_number(int a)
 {
  roll_number = a;
 }
 void put_number(void)
 {
  cout<<"Roll No:"<<roll_number<<"\n";
 }
 void get_section(int b)
 {
  section = b;
 }
 void put_section(void)
 {
  cout<<"Section:"<<section<<"\n";
 }
 
 void put_name(void)
 {
  cout<<"Name:"<<"she"<<"\n";
 }
};
class test : public student
{
 protected:
 float part1, part2;
 public:
 void get_marks(float x, float y)
 {
  part1 = x;
  part2 = y;
 }
 void put_marks(void)
 {
  cout<<"Marks obtained"<<"\n"<<"Test class ="<<part1<<"\n"<<"Sport class ="<<part2<<"\n";
 }
};
class sports
{
 protected:
 float score;
 public:
 void get_score(float s)
 {
  score = s;
 }
 void put_score(void)
 {
 }
};
class result : public test, public sports
{
 float total;
 public:
 void display(void);
};
void result ::display(void)
{
 total = part1 + part2 ;
 put_number();
 put_marks();
 put_score();
 cout<<"Total Score:"<<total<<"\n";
}
int main()
{
 result student_1;
 student_1.get_number (8);
 student_1.get_section (2);
 student_1.put_name();
 student_1.get_marks (500,499);
 student_1.get_score (99);
 student_1.display ();
 return 0;
}
