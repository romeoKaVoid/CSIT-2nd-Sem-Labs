#include<iostream>
using namespace std;
class student
{
    protected:
        int Rollno;
    public:
    //Constructor for student
        student(int a){
            Rollno = a;
        }
        void put_number(){
            cout<<"Roll Number = "<<Rollno<<endl;
        }
};
class test: virtual public student{
    protected:
        float sub1,sub2;
    public:
        test(int a, float s1, float s2): student(a), sub1(s1), sub2(s2){}
        void put_marks(){
            cout<<"Marks Obtained in 2 Subjects:\n";
            cout<<"Subject1 = "<<sub1<<endl;
            cout<<"Subject2 = "<<sub2<<endl;
        }
};
class sports:virtual public student{
    protected:
        float score;
    public:
        sports(int a, float s):student(a), score(s) {}
        void put_score(){
            cout<<"Sports Score = "<<score<<endl;
        }
};
class result:public test, public sports{
    float total;
    public:
        result(int a, float s1, float s2, float s):student(a), test(a, s1, s2), sports(a,s){}
        void display(){
            total = sub1 + sub2 + score;
            put_number();
            put_marks();
            put_score();
            cout<<"\nTotal Marks = "<<total<<endl;
        }
};
int main()
{
    result s(25,65.0,49.5,9.0);
    s.display();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}