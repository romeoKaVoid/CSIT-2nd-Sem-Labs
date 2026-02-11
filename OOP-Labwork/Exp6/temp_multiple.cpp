#include<iostream>
using namespace std;
template<class K1,class K2>
class MyClass
{
    K1 a;
    K2 b;
    public:
        MyClass(K1 x, K2 y){
            a = x;
            b = y;
        }
        void show(){
            cout<<a<<" and "<<b<<endl;
        }
};
int main()
{
    MyClass<float,int>class1(74.47,7);
    MyClass<string,int>class2("Krishna",74);
    class1.show();
    class2.show();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}