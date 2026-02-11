#include<iostream>
using namespace std;
class complex
{
    float x,y;
    public:
    complex(){}
    complex(float a){
        x=y=a;
    }
    complex(float real, float imag){
        x=real;
        y=imag;
    }
    void display();
    void sum(complex,complex);
};
void complex::display(){
    cout<<x<<" + i"<<y<<endl;
}
void complex::sum(complex c1, complex c2){
    x = c1.x + c2.x;
    y = c1.y + c2.y;
}
int main()
{
    complex A(7.7,1.5);
    complex B(1.6);
    complex C;
    C.sum(A,B);
    cout<<"A = ";A.display();
    cout<<"B = ";B.display();
    cout<<"C = ";C.display();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}