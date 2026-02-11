#include<iostream>
#include<math.h>
using namespace std;
class Mod
{
    int k,l;
    int modRet(int p, int q, int r){
        if (r==0)
        {
                return 1;
        }
        else{
            return p*(modRet(p,q,r-1))%q;
        }
    }
    public:
        void process(int p, int q, int r){
            k = modRet(p,q,r);
        //     cout<<"The value of k is: "<<k<<endl;
        //     // cout<<"The value of l is: "<<l<<endl;
        }
        void display(int p, int q, int r){
            cout<<p<<"^"<<r<<" (mod "<<q<<") = "<<k<<endl;
        }
};
int main()
{
    cout<<"For calculating (a^n mod m) and (b^n mod m)"<<endl;
    Mod m1,m2;
    int a, b, m, n;
    cout<<"Enter the value of a, b, m and n: ";
    cin>>a>>b>>m>>n;
    m1.process(a,m,n);
    m1.display(a,m,n);
    m2.process(b,m,n);
    m2.display(b,m,n);
    cout<<"\n\tProgrammed by: Krishna Aryal";
    return 0;
}