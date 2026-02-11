#include<iostream>
using namespace std;
class largest
{
    int a,b;
    public:
        void getdata();
        int process();
        void putdata();
};
void largest::getdata(){
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
}
int largest::process(){
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
void largest::putdata(){
    cout<<"The largest number is: "<<process()<<endl;
}
int main()
{
    largest l;
    l.getdata();
    // l.process();
    l.putdata();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}