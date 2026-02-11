#include<iostream>
using namespace std;
struct Person{
    char name[50];
    int age;
    double salary;
};
int main(){
    Person p1;
    cout<<"Enter the name of the employee: ";
    cin.get(p1.name,50);
    cout<<"Enter the age: ";
    cin>>p1.age;
    cout<<"Enter the salary: ";
    cin>>p1.salary;

    cout<<"\nThe Details of the Employee is as follows!!\n";
    cout<<"Name: "<<p1.name<<endl;
    cout<<"Age: "<<p1.age<<endl;
    cout<<"Salary: "<<p1.salary<<endl;
     cout<<"\n\tBy Krishna Aryal";
    return 0;
}