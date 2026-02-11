#include<iostream>
using namespace std;
class equals
{
    int n;
    public:
        equals () {}
        equals (int num){
            n = num;
        }
        void operator =(equals &y){
            cout<<"Value = "<<y.n;
        }
};
int main()
{
    equals e1;
    equals f(5);
    e1 = f;
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}