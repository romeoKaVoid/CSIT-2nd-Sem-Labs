#include<iostream>
using namespace std;
class weight
{
    float w;
    public:
        void process(float m, float g=9.8){
            w = m * g ;
            cout<<"The calculated weight for the given mass is: "<<w<<endl;
            // cout<<"Weight: "<<w<<"\n";
            cout<<"\n\t\tBy Krishna Aryal";
        }
};
int main()
{
    weight w1;
    w1.process(10);
    return 0;
}