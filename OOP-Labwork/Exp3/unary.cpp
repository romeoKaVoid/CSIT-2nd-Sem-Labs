#include<iostream>
using namespace std;
class una
{
    int x;
    int y;
    int z;
    public:
        void getdata(int a, int b, int c);
        void putdata();
        void operator -();  // overloaded unary - oprator
};
void una::getdata(int a, int b, int c){
    x=a;
    y=b;
    z=c;
}
void una::putdata(){
    cout<<x<<" ";
    cout<<y<<" ";
    cout<<x<<"\n";
}
void una::operator -(){
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    una u;
    u.getdata(10,-15,75);
    cout<<"Before unary operator!!\n";
    cout<<"S: ";
    u.putdata();
    -u; // activates operator -() function
    cout<<"After unary operator!!\n";
    cout<<"S: ";
    u.putdata();
    cout<<"\n\n\tBy Krishna Aryal";
    return 0;
}