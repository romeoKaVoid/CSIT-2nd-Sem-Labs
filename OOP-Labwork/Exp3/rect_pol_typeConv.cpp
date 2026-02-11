#include<iostream>
#include<math.h>
#define PI 3.141592
using namespace std;
class polar //destination class
{
    float radius, thita;
    public:
        polar(){}
        polar(float r, float t){
            radius = r;
            thita = t;
        }
        void show(){
            cout<<"Radius = "<<radius<<" "<<"Thita = "<<thita*(180/PI);
        }
};
class rectangle     //source class
{
        float x, y;
        public:
            rectangle(){
                x= 0.0, y = 0.0;
            }
            rectangle(float a, float b){
                x = a;
                y = b;
            }
            operator polar(){
                double radius = sqrt(x*x+y*y);
                double thita = atan(y/x);
                return polar(radius,thita);
            }
            void show(){
                cout<<"x = "<<x<<"  and "<<"y = "<<y;
            }
};
int main()
{
polar p;
rectangle r(3,4);
p = r;
cout<<"\nRectangular Coordinate"<<endl;
r.show();
cout<<"\nPolar Coordinate"<<endl;
p.show();
cout<<"\n\tBy Krishna Aryal";
return 0;
}