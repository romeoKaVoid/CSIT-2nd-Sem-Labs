#include<iostream>
using namespace std;
class test
{
    int code;
    static int count;       //static member variable
    public:
        void setcode(){
            code = ++count;
        }
        void showcode(){
            cout<<"Object Member = "<<code<<endl;
        }
        static void showcount(){
            cout<<"Count = "<<count<<endl;      //static member function can only access the static member variable
        }
};
int test::count;
int main()
{
    test t1, t2;
    t1.setcode();
    t2.setcode();
    test::showcount();
    test t3;
    t3.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    cout<<"\n\t\tBy Krishna Aryal";
    // test t4;
    // t3.showcount();      //can be calle this way too
    return 0;
}