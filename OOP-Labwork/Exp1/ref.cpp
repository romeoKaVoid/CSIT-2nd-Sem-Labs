#include<iostream>
using namespace std;
int main(){
    int k=7;
    int &a=k;
    cout<<"k = "<<k<<endl<<"a = "<<a<<endl;
    a++;
    //a is the reference of k so both will have same value before and after increment
    cout<<"\nk = "<<k<<endl<<"a = "<<a<<endl;
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}