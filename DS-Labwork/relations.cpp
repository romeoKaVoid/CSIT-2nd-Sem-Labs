#include<iostream>
using namespace std;
const int size = 50;
class relation
{
    // int A[50];
    int R[50][50];
    public:
    // void getdata_set(int n);
    // void display_set(int n);
    //The reflexive and symmetric cannot be applied in the relation having different sets so here we only check for the same sets
    void get_rel(int R[size][size], int a);
    void display_rel(int R[size][size], int a);
    int reflexive(int R[size][size],int a);
    int symmetric(int R[size][size], int a);
    int transitive(int R[size][size], int a);
    void equivalence(int R[size][size], int a);
};

/* 
void relation::getdata_set(int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    } 
}
void relation::display_set(int n)
{
    cout<<"{";
    for (int i = 0; i < n; i++)
    {
       cout<<A[i]<<",";
    } 
    cout<<"\b}";
}
 */

//For taking Relation input in matrix form
void relation::get_rel(int R[size][size], int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin>>R[i][j];
        }
    }
}

//For displaying relation in matrix form
void relation::display_rel(int R[size][size], int a)
{
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < a; j++)
    {
        cout<<R[i][j]<<"\t";
    }
    cout<<"\n";
  }
}
int relation::reflexive(int R[size][size], int a)
{
    for (int i = 0; i < a; i++)
    {
        if (R[i][i] != 1)
            return 0;
    }
    return 1;
}
int relation::symmetric(int R[size][size], int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (R[i][j] != R[j][i])
                return 0;    
        }
    }
    return 1;
}
int relation::transitive(int R[size][size], int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (R[i][j] == 1)
            {
             for (int k = 0; k < a; k++)
             {
              if (R[j][k] ==1 && R[i][k] !=1)
                    return 0;
             }
            }
        }
    }
    return 1;
}
void relation::equivalence(int R[size][size], int a)
{
    if ((reflexive(R,a) && symmetric(R,a) && transitive(R,a)) == 1)
        cout<<"The relation is Equivalence!!"<<endl;
    else
        cout<<"The relation is not Equivalence!!"<<endl;
}
int main()
{
    int a;
    int matrix[size][size];
    relation r1,r2;
    cout<<"Enter the number of elements of the set: ";
    cin>>a;
    // cout<<"Enter the number of elements 2nd set: ";
    // cin>>b;
    cout<<"Enter the relation in Matrix Representation form for checking the properties!!"<<endl;
    r1.get_rel(matrix,a);
    cout<<"The entered relation is: "<<endl;
    r1.display_rel(matrix,a);
    int b1 = r1.reflexive(matrix,a);
    // cout<<"b = "<<b1<<endl;
    int b2 = r1.symmetric(matrix,a);
    // cout<<"b = "<<b2<<endl;
    int b3 = r1.transitive(matrix,a);
    // cout<<"b = "<<b3<<endl;
    if (r1.reflexive(matrix,a)==1)
        cout<<"The Relation is Reflexive!!"<<endl;
    else
        cout<<"The Relation is not Reflexive!!"<<endl;

    if (r1.symmetric(matrix,a)==1)
        cout<<"The Relation is Symmetric!!"<<endl;
    else
        cout<<"The Relation is not Symmetric!!"<<endl;

    if (r1.transitive(matrix,a)==1)
        cout<<"The Relation is Transitive!!"<<endl;
    else
        cout<<"The Relation is not Transitive!!"<<endl;
    r1.equivalence(matrix,a);
/*
    r1.getdata_set(a);
    r2.getdata_set(b);
    cout<<"Entered data are: "<<endl;
    r1.display_set(a);
    r2.display_set(b);
*/
    cout<<"\n\tProgrammed By: Krishna Aryal";
    return 0;
}