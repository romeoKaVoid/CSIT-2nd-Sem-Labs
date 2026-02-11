#include <iostream>
using namespace std;
void krishna(int k)
{
    cout << "This funtion has integer as an argument -> "<<k<< endl;
}
void krishna(double f)
{
    cout << "This function has float as an argument -> "<<f<< endl;
}
void krishna(char c)
{
    cout << "This function has character as an argument -> "<<c<< endl;
}
//here function overloading takes place as 3 functions with same name but arguments with different data types
//are declared and defined which is allowed in C++
int main()
{
    krishna(74);
    krishna(74.74);
    krishna('k');
    cout<<"\n\t\tBy Krishna Aryal";
    return 0;
}
