#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
int main(){
    int k = 60, a = 74;
    cout<<"Before swapping:\n";
    cout<<"k = "<<k<<endl<<"a = "<<a<<endl;
    swap(k,a);
    cout<<"\nAfter swapping:\n";
    cout<<"k = "<<k<<endl<<"a = "<<a<<endl;
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}