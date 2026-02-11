#include<iostream>
using namespace std;
class marks
{
    double assess_marks, prac_marks;
    public:
        void setmark(){
            cout<<"Enter the input assessment marks and practical marks: ";
            cin>>assess_marks>>prac_marks;
        }
        void publishmark(){
            cout<<"\nInput assessment marks = "<<assess_marks<<endl;
            cout<<"Practical marks = "<<prac_marks<<endl;
        }
};
int main()
{
    marks m;
    m.setmark();
    m.publishmark();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}