#include<iostream>
using namespace std;
class small
{
    int a,b;
    public:
        void getdata();
        int calculate();
        void display();
};
void small::getdata(){
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
}
int small::calculate(){
    if (a<b)
    {
        return a;
    }
    else{
        return b;
    }
}
void small::display(){
    cout<<"\nThe smallest among two numbers is: "<<calculate();
}
int main()
{
    small s;
    s.getdata();
    s.calculate();
    s.display();
    cout<<"\n\n\tBy Krishna Aryal";
    return 0;
}