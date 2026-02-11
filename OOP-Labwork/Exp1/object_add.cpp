#include<iostream>
using namespace std;
class addition
{
    private:
        int a,b,sum;
    public:
        void getdata();
        void add();
        void display();
};
void addition::getdata(){
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
}
void addition::display(){
    cout<<"\nThe sum of two numbers is: "<<sum;

}
void addition::add(){
    sum = a+b;
}
int main()
{
    addition a1;
    a1.getdata();
    a1.add();
    a1.display();
    cout<<"\n\n\tBy Krishna Aryal";
    return 0;
}
