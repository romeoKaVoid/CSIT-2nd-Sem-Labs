#include<iostream>
using namespace std;
class cart
{
    public:
    int A[50],count=0;
        void getdata(int n){
            cout<<"Enter the elements:\n";
            for (int i = 0; i < n; i++)
            {
                cin>>A[i];
            }
        }
        void putdata(int n){
            cout<<"{";
            for (int i = 0; i < n; i++)
            {
                    cout<<A[i]<<",";
            }
            cout<<"\b}";
        }
    void display(cart C, cart D, int a, int b){
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout<<"("<<C.A[i]<<","<<D.A[j]<<")"<<",";
            }
        }
    }
};
int main()
{
    cart c1,c2,c3;
    int a,b;
    cout<<"Enter the number of elements for SetA: ";
    cin>>a;
    c1.getdata(a);
    cout<<"\nEnter the number of elements for SetB: ";
    cin>>b;
    c2.getdata(b);
    cout<<"The elements of SetA are:\n";
    c1.putdata(a);
    cout<<"\nThe elements of SetB are:\n";
    c2.putdata(b);
    cout<<"\n\nThe cartesian product:";
    cout<<"\nA x B = {";
    c3.display(c1,c2,a,b);
    cout<<"\b}";
    cout<<"\n\nAnd the cartesian product:";
    cout<<"\nB x A = {";
    c3.display(c2,c1,b,a);
    cout<<"\b}";
    cout<<"\n\n\tProgrammed By: Krishna Aryal";
    return 0;
}