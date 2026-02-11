#include<iostream>
#include<math.h>
using namespace std;
class rectangle //source class
{
    float x, y;
    public:
        rectangle(float a, float b){
            x=a;
            y=b;
        }
        float get_x(){
            return x;
        }
        float get_y(){
            return y;
        }
};
class polar //destination class
{
    float radius, thita;
    public:
        void show();
        polar(){};
        polar(rectangle r){
            float tempx = r.get_x();
            float tempy = r.get_y();

            radius = sqrt(tempx*tempx+tempy*tempy);
            thita = atan(tempy/tempx);

        }
};
void polar::show(){
            cout<<"The radius is: "<<radius<<endl;
            cout<<"Thita = "<<thita*(180/3.14)<<endl;

}
int main()
{
    rectangle r(3,4);
    polar p(r);
    p.show();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}