#include<iostream>
using namespace std;
template<class T>
void swap1(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
}
void func(int a, int b, float m, float n){
    cout<<"Before Swap:\n a = "<<a<<"\tb = "<<b<<endl;
    swap1(a,b);
    cout<<"After Swap:\n a = "<<a<<"\tb = "<<b<<endl;
    cout<<"Before Swap:\n m = "<<m<<"  n = "<<n<<endl;
    swap1(m,n);
    cout<<"After Swap:\n m = "<<m<<"  n = "<<n<<endl;
}
int main()
{
    func(74,47,65.05,45.15);
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}