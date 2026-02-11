#include<iostream>
#include<string.h>
using namespace std;
class person
{
        char name[50];
        int age;
    public:
        person(char c[], int a){
            strcpy(name, c);
            age = a;
        }
        person greater(person &p){
            if (p.age>age)
            {
                return p;
            }
            else
                return *this;
        }
        void display(){
            cout<<"Name: "<<name<<"\t"<<"Age: "<<age;
        }
};
int main()
{
    char name1[10] = "Krishna", name2[10] = "Ranjan", name3[10] = "Prasanna";
    person P1(name1,20),P2(name2,19),P3(name3,18);
    person p = P1.greater(P3);
    cout<<"Elder Person is: "<<endl;
    p.display();
    p = P1.greater(P2);
    cout<<"\nElder Person is: "<<endl;
    p.display();
    cout<<"\n\t\tBy Krishna Aryal";
    return 0;
}