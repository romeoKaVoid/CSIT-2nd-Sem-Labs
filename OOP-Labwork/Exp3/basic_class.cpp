#include<iostream>
using namespace std;
class conversion
{
    int x;
    char y;
    public:
        conversion(){}
        conversion(char p){
            x = (int)p;
            y = p;
        }
        void show(){
            cout<<y<<" and "<<x;
        }
};
int main()
{
    char s = 'a';
    conversion c1;
    cout<<"The letter and its ascii code by typecasting is: ";
    c1 = s; // calls parameterized constructor
    c1.show();
    cout<<"\n\n\tBy Krishna Aryal";
    return 0;
}