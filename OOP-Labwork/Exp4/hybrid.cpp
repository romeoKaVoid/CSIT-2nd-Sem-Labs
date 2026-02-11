#include<iostream>
using namespace std;
class Student       //base class for Student
{
    int roll;
    string name;
    public:
        void get_details(int r, string n){
            roll = r;
            name = n;
        }
        void put_details(){
            cout<<"\nStudent Name: "<<name<<endl;
            cout<<"Roll Number: "<<roll<<endl;
        }
};
class test:public Student{      //single inhertance
    protected:
        float t_score;
    public:
        void get_tScore(float t){
            t_score = t;
        }
        void put_tScore(){
            cout<<"Test Score = "<<t_score<<endl;
        }
};
class Sports{       //base class for sports
    protected:
        float s_score;
    public:
        void get_sScore(float s){
            s_score = s;
        }
        void put_sScore(){
            cout<<"Sports Score = "<<s_score<<endl;
        }
};
class result:public test,public Sports{     //multiple inheritance 
    public:
        void display_result(){
            put_details();
            put_tScore();
            put_sScore();
            float total = t_score + s_score;
            cout<<"Total Score = "<<total<<endl;
        }
};
int main()
{
    result r;
    string name;
    int rollno;
    float tscore,sScore;
    cout<<"Enter the Name of Student: ";
    getline(cin,name);
    cout<<"Enter Roll No: ";
    cin>>rollno;
    r.get_details(rollno,name);
    cout<<"Enter Test Score: ";
    cin>>tscore;
    r.get_tScore(tscore);
    cout<<"Enter Sports score: ";
    cin>>sScore;
    r.get_sScore(sScore);
    r.display_result();
    cout<<"\n\t\tBy Krishna Aryal";
    return 0;
}