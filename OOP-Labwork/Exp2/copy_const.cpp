#include<iostream>
using namespace std;
class Copy
{
    int id;
    public:
    Copy(){} //Default constructor
    Copy(int x)  // Parametarized Constructor
    {
        id = x;
    }
    Copy(Copy &y)  // Copy Constructor
    {
        id = y.id;
    }
    void display(){
        cout<<id<<endl;
    }
};
int main()
{
    Copy A(74); // object A is created and initialiazed 
    Copy B(A); // Copy constructor called
    Copy C = B; // Copy constructor called again
    Copy D;  // Object D is created but not initialized
    D = A;  //Copy constructor not called

    cout<<"\nid of A = ";A.display(); 
    cout<<"\nid of B = ";B.display();  
    cout<<"\nid of C = ";C.display(); 
    cout<<"\nid of D = ";D.display();  
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}