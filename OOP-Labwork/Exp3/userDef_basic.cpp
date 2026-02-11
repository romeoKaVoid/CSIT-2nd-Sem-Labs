#include<iostream>
using namespace std;
class Hour
{
    int hr;
    public:
        Hour (){}
        operator int(){
            int minutes;
            minutes = hr * 60;
            return minutes;
        }
        void getData(){
            cout<<"Enter the hours to be converted: ";
            cin>>hr;
        }
};
int main()
{
    Hour h1;
    float min;
    h1.getData();
    min = h1; //user defined to basic type conversion
    cout<<"Minutes converted = "<<min;
    cout<<"\n\n\tBy Krishna Aryal";
    return 0;
}