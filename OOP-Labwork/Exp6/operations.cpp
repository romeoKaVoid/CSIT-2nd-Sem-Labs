#include<iostream>
using namespace std;
template<class T1>
class Test
{
    T1 a;
    public:
        void add(T1 x, T1 y){
            a = x + y;
        }
        void mul(T1 x, T1 y){
            a = x * y;
        }
        void sub(T1 x, T1 y){
            a = x - y;
        }
        void div(T1 x, T1 y){
            a = x/y;
        }
        void show(){
            cout<<"a = "<<a<<endl;
        }
};
int main()
{
    Test<float>testf;
    Test<int>testi;
    cout<<"Different Operetions Done Using Template are::\n";
    testf.add(6.25,5.5);testf.show();
    testf.sub(9.15,5.15);testf.show();
    testi.mul(7,5);testi.show();
    testi.div(200,5);testi.show();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}