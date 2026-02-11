#include<iostream>
using namespace std;
class fuz
{
    public:
        float a,b,c,x,y,z,d,e,f,r,s,t;
        void input(){
            cout<<"Input any 3 membership functions for each set!!!(each members must be less that 1)"<<endl;
            cout<<"Enter the membership function of the 1st set: ";
            cin>>a>>b>>c;
            cout<<"Enter the membersship function of the 2nd set: ";
            cin>>x>>y>>z;
        }
        void display(float p, float q, float r){
            cout<<"{";
            cout<<"(a,"<<p<<"), "<<"(b,"<<q<<"), "<<"(c,"<<r<<")";
            cout<<"}\n";
        }
        void unio(){
         d= (a>x)?a:x;
         e= (b>y)?b:y;
         f= (c>z)?c:z;
        }
        void inter(){
         d= (a<x)?a:x;
         e= (b<y)?b:y;
         f= (c<z)?c:z;
        }
        void complement(){
            d = 1 - a;
            e = 1 - b;
            f = 1 - c;

            r = 1 - x;
            s = 1 - y;
            t = 1 - z;
        }
};
int main()
{
    fuz f1,f2;
    f1.input();
    cout<<"The membership functions of setA are:\n";
    f1.display(f1.a,f1.b,f1.c);
    cout<<"\nThe membership functions of setB are:\n";
    f1.display(f1.x,f1.y,f1.z);
    f1.unio();
    cout<<"\nThe membership functions of union set is given by:\n";
    f1.display(f1.d,f1.e,f1.f);
    f1.inter();
    cout<<"\nThe membership functions of intersection set is given by:\n";
    f1.display(f1.d,f1.e,f1.f);
    f1.complement();
    cout<<"\nThe membership functions of complement of setA is given by:\n";
    f1.display(f1.d,f1.e,f1.f);
    f1.complement();
    cout<<"\nThe membership functions of complement of setB is given by:\n";
    f1.display(f1.r,f1.s,f1.t);
    cout<<"\n\n\tProgrammed By: Krishna Aryal";
    return 0;
}