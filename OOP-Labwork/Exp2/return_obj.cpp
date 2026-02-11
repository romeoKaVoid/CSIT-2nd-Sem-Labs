#include<iostream>
using namespace std;
class Myclass
{
    public:
    int k;
    Myclass add(Myclass Ma,Myclass Mb){
        Myclass Mc;
        Mc.k = Ma.k + Mb.k;
        return Mc; //Returning object
    }
};
int main()
{
    Myclass M1,M2,M3;
    M1.k = 100;
    M2.k = 50;
    M3.k = 0;

    cout<<"\nInitial Values\n";
    cout<<"Value of object1: "<<M1.k
        <<"\nValue of object2: "<<M2.k
        <<"\nValue of Object3: "<<M3.k;

        //Passing object as an argument to the function add()
        M3 = M3.add(M1,M2);

        cout<<"\n\nNew Values!!\n";
        cout<<"Value of object1: "<<M1.k
            <<"\nValue of object2: "<<M2.k
            <<"\nValue of object3: "<<M3.k;
        cout<<"\n\n\tBy Krishna Aryal";
        return 0;
}