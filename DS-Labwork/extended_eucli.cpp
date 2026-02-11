#include<iostream>
using namespace std;
class ext_eucli
{
    int q,r,s,t,s1,t1;
    public:
    int a,b,s0,t0;
    void input(){
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
    }
    int extended(int x, int y){
        s0 = 1, s1 = 0;
        t0 = 0, t1 = 1;
        while(b!=0){
            q = a/b;
            r = a%b;
             
            a = b;
            b = r;
            
            s = s0 - q*s1;
            t = t0 - q*t1;
            s0 = s1;
            s1 = s;
            t0 = t1;
            t1 = t;
        }
        // cout<<"\n";
        return a;
    }
};
int main()
{
    ext_eucli e1;
    e1.input();
    int m=e1.a, n=e1.b;
    cout<<"\ngcd("<<m<<","<<n<<") = "<<e1.extended(e1.a,e1.b);
        cout<<"\ns0 = "<<e1.s0;
        cout<<"\nt0 = "<<e1.t0;
    // cout<<"\ns0 = "<<s0;
    // cout<<"\nt0 = "<<e1.extended(e1.a,e1.b);
    cout<<"\n\n\tProgrammed By: Krishna Aryal";
    return 0;
}