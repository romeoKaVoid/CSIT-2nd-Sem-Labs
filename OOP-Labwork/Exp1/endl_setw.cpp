#include<iostream>
#include<iomanip> //for setw
using namespace std;
int main()
{
    int num1 = 12,num2 = 74;

    cout<<"Without using setw!!"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;

    cout<<"\nUsing setw!!"<<endl;
    cout<<setw(0)<<num1<<endl; // no any spaces before printing
    cout<<setw(15)<<num2<<endl; //leaves 15 spaces along with the number before printing it
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}