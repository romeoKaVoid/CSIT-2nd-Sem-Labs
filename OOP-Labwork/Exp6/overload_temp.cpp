#include<iostream>
using namespace std;
template<class T>
void display(T x){
    cout<<"Template Display:: "<<x<<endl;
}
void display(int x){
    cout<<"Explicity Display:: "<<x<<endl;
}
int main()
{
    display(74);
    display(74.47);
    display("Krishna");
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}