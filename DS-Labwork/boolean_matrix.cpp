#include<iostream>
using namespace std;
class matrix
{
    public:
        int mat[50][50],result[50][50];
        void inputmat(int r, int c){
            cout<<"Enter the elements of zero-one matrix:"<<endl;
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                        cin>>mat[i][j];
                }
            }
        }
        void display(int m[50][50], int r, int c){
            for (int i = 0; i < r; i++)
            {
                cout<<"|  ";
                for (int j = 0; j < c; j++)
                {
                        cout<<m[i][j]<<"   ";
                }
                cout<<"\b|";
                cout<<"\n";
            }
        }
        // void displayre(int r, int c){
        //     for (int i = 0; i < r; i++)
        //     {
        //         for (int j = 0; j < c; j++)
        //         {
        //                 cout<<result[i][j]<<"\t";
        //         }
        //         cout<<"\n";
        //     }
        // }
        void join(matrix M1, matrix M2, int r, int c){
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    result[i][j] = M1.mat[i][j] || M2.mat[i][j];
                }
            }
        }
        void meet(matrix M1, matrix M2, int r, int c){
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    result[i][j] = M1.mat[i][j] && M2.mat[i][j];
                }
            }
        }
        void product(matrix A, matrix B,int r1, int c1, int r2, int c2){
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    result[i][j] = 0;
                    for (int k = 0; k < r1; k++)
                    {
                        result[i][j] = result[i][j] || A.mat[i][k]&&B.mat[k][j];
                    }
                }
            }
        }
};
int main()
{
    int row1, col1, row2, col2;
    matrix m1,m2,m3,m4,m5;
    cout<<"Enter the no. of rows and columns of 1st matrix: ";
    cin>>row1>>col1;
    cout<<"Enter the no. of rows and columns of 2nd matrix: ";
    cin>>row2>>col2;
    cout<<"\nFor matrix A!!"<<endl;
    m1.inputmat(row1, col1);
    cout<<"\nFor matrix B!!"<<endl;
    m2.inputmat(row2, col2);
    cout<<"\nThe elements of 1st matrix in matrix form are: \n";
    m1.display(m1.mat,row1, col1);
    cout<<"The elements of 2nd matrix in matrix form are: \n";
    m2.display(m2.mat,row2, col2);
    if (row1==row2 && col1==col2)
    {
        cout<<"\nThe Join operation between Matrix A and B is:\n";
        cout<<"A v B = \n";
        m3.join(m1,m2,row1,col1);
        m3.display(m3.result,row1,col1);
        cout<<"The Meet operation between Matrix A and B is:\n";
        cout<<"A ^ B = \n";
        m4.meet(m1,m2,row1,col1);
        m4.display(m4.result,row1,col1);
    }
    else{
        cout<<"\nERROR 404!! Join and meet operation is not possible with given order of matrices!!"<<endl;
    }
    if (col1==row2)
    {
        cout<<"\nThe Boolean product of matrix A and B is:\n";
        // cout<<"A"<<" <=> "<<"B = \n";
        m5.product(m1,m2,row1,col1,row2,col2);
        m5.display(m5.result,row1,col2);
    }
    else{
        cout<<"/nERROR 404!! Boolean Product not possible with given order of matrices!!"<<endl;
    }
    cout<<"\n\tProgrammed by: Krishna Aryal";
    return 0;
}