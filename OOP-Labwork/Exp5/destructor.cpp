#include<iostream>
using namespace std;
class base
{
    public:
        base(){
            cout<<"\nConstructing Base!!";
        }
        virtual ~base(){
            cout<<"\nDestructing Base!!";
        }
};
class derived
{
    public:
        derived(){
            cout<<"\nConstructing Derived!!";
        }
        ~derived(){
            cout<<"\nDestructing Derived!!";
        }
};
int main()
{
    derived d;
    base b;
    return 0;
}