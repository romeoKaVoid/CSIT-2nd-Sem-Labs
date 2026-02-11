#include<iostream>
using namespace std;
class ksnaBase
{
    public:
        void display(){
            cout<<"Base Display\n";
        }
        virtual void show(){
            cout<<"Base Show"<<endl;
        }
};
class ksnaDerived:public ksnaBase{
    public:
        void display(){
            cout<<"Derived Display\n"<<endl;
        }
        void show(){
            cout<<"Derived Show\n";
        }
};
int main()
{
    ksnaBase B;
    ksnaDerived D;
    ksnaBase *bptr;
    cout<<"bptr points to Base\n";
    bptr = &B;      //points to base object
    bptr->display();        //calls base version
    bptr->show();       //calls base version
    cout<<"bptr points to derived\n";
    bptr = &D;      //points to derived object
    bptr->display();       //calls base version because bptr is the pointer of Base class
    bptr->show();       //calls derived version because there is no any physical show() function in base class
    cout<<"\n\t\tBy Krishna Aryal";
    return 0;
}