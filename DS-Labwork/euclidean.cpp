#include<iostream>
using namespace std;
class eucli
{
    int r,c;
    public:
    int a,b;
        void input(){
            cout<<"Enter the value of a(must be an integer): ";
            cin>>a;
            cout<<"Enter the value of b(must be an positive integer): ";
            cin>>b;
        }
        void gcd(int x, int y){
            cout<<"\nThe gcd of "<<a<<" and "<<b<<" using Euclidean algorithm is:\n";
            cout<<"gcd ("<<a<<","<<b<<")"<<" = ";
            while(b!=0){
                r = a;
                c = a%b;
                a = b;
                b = c;
            }
            // return a;
            cout<<a;
            
        }
};
int main()
{
    eucli e1;
    e1.input();
    e1.gcd(e1.a,e1.b);
    cout<<"\n\tProgrammed By: Krishna Aryal";
    return 0;
}