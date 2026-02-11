#include<iostream>
#include<string>
#include<limits>
using namespace std;
class student
{
    string name,add;
    int roll;
    public:
       void input_data(int i);
       void display_data(int j);
};
// cin.ignore(numeric_limits<streamsize>::max(),'\n');
void student::input_data(int i){
    cout<<"\nEnter the name of "<<i<<"th student:";
    getline(cin,name);
    cout<<"Enter the address of "<<i<<"th student:";
    getline(cin,add);
    cout<<"Enter the roll no. of "<<i<<"th student:";
    cin>>roll;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void student::display_data(int j){
    cout<<j<<")\t"<<name<<"\t\t"<<add<<"\t\t"<<roll<<endl;
}
int main()
{
    student s1,s2;
    s1.input_data(1);
    s2.input_data(2);
    cout<<"\nDetails as Follows!!\n";
    cout<<"S.N.\t"<<"Name of Student\t\t"<<"Address\t\t"<<"Roll No."<<endl;
    s1.display_data(1);
    s2.display_data(2);
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}