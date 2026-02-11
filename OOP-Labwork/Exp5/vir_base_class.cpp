#include<iostream>
using namespace std;
class student
{
    protected:
        int Rollno;
    public:
        void get_number(int a){
            Rollno = a;
        }
        void put_number(){
            cout<<"Roll Number = "<<Rollno<<endl;
        }
};
class test:virtual public student{
    protected:
        float sub1,sub2;
    public:
        void get_marks(float s1, float s2){
            sub1 = s1, sub2 = s2;
        }
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
        void get_score(float s){
            score = s;
        }
        void put_score(){
            cout<<"Sports Score = "<<score<<endl;
        }
};
class result:public test, public sports{
    float total;
    public:
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
    result s;
    s.get_number(25);
    s.get_marks(65.0,49.75);
    s.get_score(9.5);
    s.display();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}