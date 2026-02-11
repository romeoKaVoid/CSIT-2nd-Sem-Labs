#include<iostream>
using namespace std;
class great
{
    private:
        int greater;
    public:
        great(int r){
            greater = r;
        }
        void operator > (great &obj){
            if (greater > obj.greater)
            {
                cout<<"The greater number is: "<<greater;
            }
            else{
                cout<<"\nThe greater number is: "<<obj.greater;
            }
        }
};
int main()
{
    great g1(10);
    great g2(2);
    g1 > g2;
    cout<<"\n\n\tBy Krishna Aryal";
    return 0;
}