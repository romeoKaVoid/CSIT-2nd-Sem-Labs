#include<iostream>
using namespace std;
class B
{
    int a;
    public:
        int b;
        int get_a();
        void show_a();
        void get_ab();
};
class D: private B{
    int c;
    public:
        void mul();
        void display();
};
void B:: get_ab(){
    cout<<"Enter the value of a  and b: ";
    cin>>a>>b;
}
int B:: get_a(){
    return a;
}
void B:: show_a(){
    cout<<"a = "<<a<<endl;
}
void D::mul(){
    get_ab();
    c = b * get_a();  //a is private
}
void D::display(){
    show_a();
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}
int main()
{
    D d;
    // d.get_a(); //won't work
    d.mul();
    // d.show_a() //won't work
    d.display();
    cout<<"\n\t\tBy Krishna Aryal";
    return 0;
}