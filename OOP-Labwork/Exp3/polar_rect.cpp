#include<iostream>
#include<math.h>
#define PI 3.141592
using namespace std;
class rectangle //destination class
{
    float x, y;
    public:
        rectangle(){};
        rectangle(float r, float t){
            x = r;
            y = t;
        }
        void show(){
            cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
        }
};
class polar // source class
{
    float radius, thita;
    public:
        polar(){
            radius = 0.0, thita = 0.0;
        }
        polar(float r, float t){
            radius = r;
            thita = t;
        }
        operator rectangle(){
            double a = radius * cos(thita);
            double b = radius * sin(thita);
            return (rectangle(a,b));
        }
        void show(){
            cout<<"Radius = "<<radius<<"\n"<<"Thita = "<<thita<<endl;
        }
};
int main()
{
    rectangle r1;
    polar p1(5,53.1571*PI/180);
    r1 = p1;
    cout<<"\nPolar Coordinate\n";
    p1.show();
    cout<<"\nRectangular Coordinate\n";
    r1.show();
    cout<<"\n\n\tBy Krishna Aryal";
    return 0;
}