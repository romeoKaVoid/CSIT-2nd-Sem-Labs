#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()=0;      //pure virtual function
};  
class B:public A{
    public:
        void show(){
            cout<<"Show method is declared here: \n";
        }
};
int main()
{
    A *ptr;
    // ptr = new A (Cannot create of abstract the abstract class)
    ptr = new B;
    ptr->show();
    cout<<"\n\t\tBy Krishna Aryal";
    return 0;
}