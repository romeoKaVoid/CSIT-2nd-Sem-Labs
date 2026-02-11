#include<iostream>
using namespace std;
class details
{
    string name,address;
    char faculty[50];
    int roll;
    public:
        void inputdata();
        void display(){
            cout<<"Name of student: "<<name<<endl<<"Address: "<<address<<endl;
            cout<<"Faculty: "<<faculty<<endl<<"Roll no: "<<roll<<endl;
        }
};
void details::inputdata(){
    cout<<"Enter the name, address, faculty and roll number of a student: ";
    getline(cin,name);
    getline(cin,address);
    cin>>faculty>>roll;
}
int main()
{
    details d;
    d.inputdata();
    d.display();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}