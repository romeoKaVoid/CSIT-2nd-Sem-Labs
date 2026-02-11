#include<iostream>
#include<math.h>
#define PI 3.141592
using namespace std;
class polar //source class
{
    float radius, thita;
    public:
        polar(float r, float t){
            radius = r;
            thita = t;
        }
        float get_radius(){
            return radius;
        }
        float get_thita(){
            return thita;
        }
};
class rectangle  //destination class
{
    float x, y;
    public:
        void show();
        rectangle(){};
        rectangle(polar p){
            x = p.get_radius() * cos(p.get_thita());
            y = p.get_radius() * sin(p.get_thita());
        }
};
void rectangle::show(){
    cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    }

int main()
{
    polar p(5,53.1571*PI/180);
    rectangle r(p);
    cout<<"Thita ="<<p.get_thita()<<"\t"<<"Radius = "<<p.get_radius()<<endl;
    r.show();
    cout<<"\n\n\tBy Krishna Aryal";
    return 0;
}