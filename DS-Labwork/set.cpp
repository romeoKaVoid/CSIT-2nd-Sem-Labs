#include<iostream>
using namespace std;
class Set
{
    public:
        int n,S[50],count;
        void input(int n){
            cout<<"Enter the elements:\n";
            for (int i = 0; i < n; i++)
            {
                cin>>S[i];
            }
        }
        void display(int a){
            cout<<"{";
            for (int i = 0; i < a; i++)
            {
                cout<<S[i]<<",";
            }
            cout<<"\b}";
        }
        void Union1(Set A,Set B,int x,int y ){
        cout<<"\nUnion of Sets are!!\n {";
        for (int i = 0; i < x; i++)
        {
                cout<<A.S[i]<<",";
        }
        for (int j = 0; j < y; j++)
        {
                for (int i = 0; i < x; i++)
                {
                    if (B.S[j]==A.S[i])
                    {
                        count = 1;
                    }
                }
                if (count!=1)
                {
                    cout<<B.S[j]<<",";
                }
                count = 0;
        }
        cout<<"\b}"<<endl;
        }
        void intersection(Set A, Set B, int x, int y){
            cout<<"\nIntersection of Sets!!\n{";
            for (int i = 0; i < x; i++)
            {
                    for (int j = 0; j < y; j++)
                    {
                            while (A.S[i]==B.S[j])
                            {
                               cout<<A.S[i]<<",";
                               break;
                            }
                    }
            }
            cout<<"\b}";
        }
        void difference(Set A, Set B, int x, int y){
            cout<<"{";
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                        if (A.S[i]==B.S[j])
                        {
                                count =1;
                        }
                }
                if (count!=1) 
                {
                    cout<<A.S[i]<<",";
                }
                count=0;
            }
            cout<<"\b}";
        }
};
int main()
{
    Set s1,s2,s3,s4,s5,s6;
    int a,b;
    cout<<"Enter the no. of elements in SetA: ";
    cin>>a;
    s1.input(a);
    cout<<"\nEnter the no. of elements in SetB: ";
    cin>>b;
    s2.input(b);
    cout<<"The elements of SetA are\n";
    s1.display(a);
    cout<<"\nThe elements of SetB are\n";
    s2.display(b);
    s3.Union1(s1,s2,a,b);
    s4.intersection(s1,s2,a,b);
    cout<<"\nA - B = ";
    s5.difference(s1,s2,a,b);
    // s6.difference_A(s2,s1,a,b);
    cout<<"\nB - A = ";
    s6.difference(s2,s1,b,a);
    cout<<"\n\tProgrammed By: Krishna Aryal";
    return 0;
}