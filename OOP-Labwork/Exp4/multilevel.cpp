#include<iostream>
using namespace std;
class student
{
    int roll_number;
    public:
        void get_number(int);
        void put_number();
};
void student::get_number(int a){
    roll_number = a;
}
void student::put_number(){
    cout<<"Roll Number = "<<roll_number<<endl;
}
class test: public student{     //1st derivation
    protected:
        float x;
        float y;
    public:
        void get_marks(float, float);
        void put_marks();
};
void test::get_marks(float a, float b){
    x = a;
    y = b;
    }
void test::put_marks(){
    cout<<"Marks is subject1 = "<<x<<endl;
    cout<<"Marks in subject2 = "<<y<<endl;
}
class result: public test{          //2nd derivation
    float total;
    public:
        void display();
};
void result::display(){
    total = x + y;    //If x and y are not public or protected then they cannot be accessed here
    put_number();
    put_marks();
    cout<<"Total marks = "<<total<<endl;
}
int main()
{
    result student1;
    student1.get_number(25);
    student1.get_marks(88.05,90.5);
    student1.display();
    cout<<"\n\t\tBy Krishna Aryal";
return 0;
}