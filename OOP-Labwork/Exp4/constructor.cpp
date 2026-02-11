#include<iostream>
using namespace std;
class alpha
{
    int x;
    public:
    alpha(int i){
        x = i;
        cout<<"Alpha Initialized!!\n";
    }
        void show_x(){
            cout<<"x = "<<x<<endl;
        }
};
class beta{
    float y;
    public:
    beta(float j){
        y = j;
        cout<<"Beta Initialized!!\n";
    }
        void show_y(){
            cout<<"y = "<<y<<endl;
        }
};
class gamma:public beta,public alpha    //order of execution
{
    int m,n;
    public:
    gamma(int a,float b,int c,int d):alpha(a),beta(b){
        m = c;
        n = d;
        cout<<"Gamma Initialized!!\n";
    }
    void show_mn(){
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
    }
};
int main()
{
    gamma g(10,1.25,25,36);
    g.show_x();
    g.show_y();
    g.show_mn();
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}