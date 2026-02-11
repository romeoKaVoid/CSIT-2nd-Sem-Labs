#include<iostream>
using namespace std;
class E1;
class E2;
class E3;
class E1
{
    char name[20],address[30];
    float salary;
    public:
        void details(){
            cout<<"Enter the name, address and salary of 1st Employee: ";
            cin>>name>>address>>salary;
        }
        friend void process(E1,E2,E3);      //friend function
};
class E2
{
    char name[20],address[30];
    float salary;
    public:
        void details(){
            cout<<"Enter the name, address and salary of 2nd Employee: ";
            cin>>name>>address>>salary;
        }
        friend void process(E1,E2,E3);      //friend function
};
class E3
{
    char name[20],address[30];
    float salary;
    public:
        void details(){
            cout<<"Enter the name, address and salary of 3rd Employee: ";
            cin>>name>>address>>salary;
        }
        friend void process(E1,E2,E3);      //friend function
};
void process(E1 x, E2 y, E3 z){
    cout<<"\nName of 1st Employee: "<<x.name<<endl;
    cout<<"Address: "<<x.address<<endl;
    cout<<"Salary: "<<x.salary<<endl;

    cout<<"\nName of 2nd Employee: "<<y.name<<endl;
    cout<<"Address: "<<y.address<<endl;
    cout<<"Salary: "<<y.salary<<endl;

    cout<<"\nName of 3rd Employee: "<<z.name<<endl;
    cout<<"Address: "<<z.address<<endl;
    cout<<"Salary: "<<z.salary<<endl;

    float total = x.salary + y.salary + z.salary;
    cout<<"\nTotal Salary = "<<total;
}
int main()
{
    E1 A; E2 B; E3 C;
    A.details();
    B.details();
    C.details();
    process(A,B,C);
    cout<<"\n\n\t\tBy Krishna Aryal";
    return 0;
}
