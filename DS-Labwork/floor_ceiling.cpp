#include<iostream>
using namespace std;
class FC
{
    public:
    int a,b;
        float f;
        void getdata(){
            cout<<"Enter the value you want floor and ceiling value of: ";
            cin>>f;
        }
        void floor(){
            b=(f>0)?int(f):int (f-1);
            cout<<"\nThe floor value of given number is: "<<b;
        }

        void ceiling(){
            b= f>0?int(f+1):int(f);
            // int b;
            // float c;
            // b= int(a);
            // // cout<<"Value of b = "<<b;
            // // cout<<"\nValue of f = "<<f;
            // c = a-b;
            // // cout<<"\nValue of c = "<<c;
            // if (c==0)
            // {
            //  cout<<"\nThe ceiling value of given number is: "<<b;
            // }
            // else{
            //     b=b+1;
            // }
                cout<<"\nThe ceiling value of given number is: "<<b;
        }
};
int main()
{
    FC f1;
    f1.getdata();
    if (int(f1.f)==f1.f)
    {
            cout<<"\nThe floor value of given number is: "<<int(f1.f);
            cout<<"\nThe ceiling value of given number is: "<<(f1.f);
    }
    else{
        f1.ceiling();
        f1.floor();
    }
    
    cout<<"\n\tProgrammed By: Krishna Aryal";
    return 0;
}