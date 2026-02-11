#include<iostream>
using namespace std;
class constructor
{
    int a,b;
    public:
    constructor(int,int);
    void display(){
        cout<<a<<" "<<b<<endl;
    }
};
    constructor::constructor(int x, int y){
        a=x;
        b=y;
    }
int main()
{
    constructor c1 = constructor(10,20); //explicit call of the constructor
    constructor c2(30,40); // implicit call
    c1.display();
    c2.display();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}