#include<iostream>
using namespace std;
class item
{
    static int X;
    public:
    void get(){
        cout<<"X = "<<X<<endl;
        X++;
    }
};
int item::X; //Static variable initialized (Can also be initialiazed as int item::count=10)-
int main()
{
    item a,b,c;
    a.get();
    b.get();
    c.get();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}