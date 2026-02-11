#include<iostream>
using namespace std;
class complex
{
    float x;
    float y;
    public:
        complex () {}
        complex (float real, float imag){
            x = real;
            y = imag;
        }
        complex operator +(complex);
        void display();
};
complex complex::operator +(complex c){
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}
void complex::display(){
    cout<<x<<" + "<<y<<"j"<<"\n";
}
int main()
{
    complex C1, C2, C3; //invokes 1st constructor
    C1 = complex(2.6,5.1); //invokes 2nd constructor
    C2 = complex(1.5,3.5);
    C3 = C1 + C2; //invokes operator +() constructor
    cout<<"Complex numbers are:\n";
    cout<<"C1 = "; C1.display();
    cout<<"C2 = "; C2.display();
    cout<<"\nSum of complex numbers!!\n";
    cout<<"C3 = "; C3.display();
    cout<<"\n\n\tBy Krishna Aryal";
    return 0;
}