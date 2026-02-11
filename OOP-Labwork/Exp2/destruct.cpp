#include<iostream>
using namespace std;
int count = 0;
class destruct
{
    public:
        destruct(){
            count++;
            cout<<"\nNumber of objects created = "<<count;
        }
        ~destruct(){
            cout<<"\nNumber of objects destruct = "<<count;
            count--;
        }
};
int main()
{
    destruct d1,d2,d3;
    return 0;
    cout<<"\n\tBy Krishna Aryal";
}