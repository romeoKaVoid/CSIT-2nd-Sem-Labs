#include<iostream>
#include<math.h>
using namespace std;
class PC
{
    long fact(int f){
        if(f==0||f==1)
            return 1;
        else
            return f*fact(f-1);
    }
    public:
        long n,r;
        void getdata(){
            cout<<"Enter the values of n and r for calculating Permutation and Combination: ";
            cin>>n>>r;
            // cout<<"Factorial = "<<fact(r)<<endl;
        }
        long perm_wtRep(){
            return fact(n)/fact(n-r);
        }
        long perm_withRep(){
            return pow(n,r);
        }
        long comb_wtRep(){
            // fact(n);
            // fact(n-r);
            return (fact(n)/(fact(r)*fact(n-r)));
        }
        long comb_withRep(){
            long a = n + r - 1;
            long b = n - 1;
            return (fact(a)/(fact(b)*fact(a-b)));
        }
};
int main()
{
    PC p;
    p.getdata();
    if (p.n>=p.r)
    {
        cout<<"The Permutation(Without Repetition) of given values of n and r is:"<<endl;
        cout<<"P("<<p.n<<","<<p.r<<") = "<<p.perm_wtRep()<<endl;
        // cout<<"The Permutation(With Repetition) of given values of n and r is:"<<endl;
        // cout<<"P("<<p.n<<","<<p.r<<") = "<<p.perm_withRep()<<endl;
        cout<<"The Combination(Without Repetition) of given values of n and r is:"<<endl;
        cout<<"C("<<p.n<<","<<p.r<<") = "<<p.comb_wtRep()<<endl;
        // cout<<"The Combination(With Repetition) of given values of n and r is:"<<endl;
        // cout<<"C("<<p.n<<","<<p.r<<") = "<<p.comb_withRep()<<endl;
    }
    else{
        cout<<"Wrong input!!Value of r cannot be greater than n!!";
    }
    cout<<"\n\tProgrammed by: Krishna Aryal";
    return 0;
}