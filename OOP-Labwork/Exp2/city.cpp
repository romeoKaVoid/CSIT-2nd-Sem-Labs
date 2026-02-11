#include<iostream>
#include<string.h>
using namespace std;
class city
{
    char city_name[50];
    float distFromKTM;
    float totalDis;
    public:
        void getdata(const char x[],float y){
            strcpy(city_name,x);
            distFromKTM = y;
        }
        void display(){
            cout<<"\nCity Name = "<<city_name<<endl;
            cout<<"Distance from Kathmandu = "<<distFromKTM<<endl;
        }

        void AddDist(city,city);
};
void city::AddDist(city c1,city c2){
    totalDis = c1.distFromKTM + c2.distFromKTM;
    cout<<"\nTotal distance is: "<<totalDis<<endl;
}

int main()
{
    city c1,c2,c3;
    c1.getdata("Pokhara",250.25);
    c2.getdata("Dhangadhi",650.75);
    c1.display();
    c2.display();
    c3.AddDist(c1,c2);
    cout<<"\n\tBy Krishna Aryal";
    return 0;
}