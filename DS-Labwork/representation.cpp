#include<iostream>
using namespace std;
class computer
{
    public:
    int S[50],f[50],g[50];
    void getdata(int n){
        cout<<"Enter the elements:\n";
        for (int i = 0; i < n; i++)
        {
            cin>>S[i];
        }
    }
    void putdata(int n){
        cout<<"{";
        for (int i = 0; i < n; i++)
        {
                cout<<S[i]<<",";
        }
        cout<<"\b}";
    }
    void repA(computer U,computer A, int a, int b){
        cout<<"{";
        for (int i = 0; i < a; i++)
        {
            int count=0;
           for (int j = 0; j < b; j++)
           {
                if (U.S[i] == A.S[j])
                {
                    count++;
                }
           }
                if (count>0)
                {
                    cout<<"1";  
                    f[i]=1;  
                }
           else{
            cout<<"0";
            f[i]=0;
           }
        }
        cout<<"}";
    }

    void repB(computer U,computer B, int a, int b){
        cout<<"{";
        for (int i = 0; i < a; i++)
        {
            int count=0;
           for (int j = 0; j < b; j++)
           {
                if (U.S[i] == B.S[j])
                {
                    count++;
                }
           }
                if (count>0)
                {
                    cout<<"1";  
                    g[i]=1;  
                }
           else{
            cout<<"0";
            g[i]=0;
           }
        }
        cout<<"}";
    }

    void unio(int n){
        cout<<"{";
        for (int i = 0; i < n; i++)
        {
            if (f[i]|g[i])
            {
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
    cout<<"}";
    }

    void inter(int n){
        cout<<"{";
        for (int i = 0; i < n; i++)
        {
            if (f[i] & g[i])
            {
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
    cout<<"}";
    }
};
int main()
{
    computer c1,c2,c3,c4,c5,c6,c7;
    int a,b,c;
    cout<<"Enter the number of elements for Universal Set:\n";
    cin>>c;
    c1.getdata(c);
    cout<<"Enter the number of elements for SetA:\n";
    cin>>a;
    c2.getdata(a);
    cout<<"\nEnter the number of elements for SetB:\n";
    cin>>b;
    c3.getdata(b);
    cout<<"\n!!General Representation!!\n";
    cout<<"The elements of Universal Set are:\n";
    c1.putdata(c);
    cout<<"\nThe elements of SetA are:\n";
    c2.putdata(a);
    cout<<"\nThe elements of SetB are:\n";
    c3.putdata(b);

    cout<<"\n!!Computer Representation!!\n";
    cout<<"A = ";
    c4.repA(c1,c2,c,a);
    cout<<"\nB = ";
    c5.repB(c1,c3,c,b);

    cout<<"\nA U B =";
    c6.f[0] = c4.f[0]; // Initialized the values of f and g from c4 and c5 into c6
    c6.g[0] = c5.g[0];
     for (int i = 0; i < c; i++)
    {
        c6.f[i] = c4.f[i];
        c6.g[i] = c5.g[i];
    }
    c6.unio(c);
    cout<<"\nA intersection B =";
     c7.f[0] = c4.f[0]; // Initialized the values of f and g from c4 and c5 into c7
     c7.g[0] = c5.g[0];
    for (int i = 0; i < c; i++)
    {
            c7.f[i] = c4.f[i];
            c7.g[i] = c5.g[i];
    }
    c7.inter(c);
    cout<<"\n\tProgrammed By: Krishna Aryal";
    return 0;
}