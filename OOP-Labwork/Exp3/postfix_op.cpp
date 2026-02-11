#include<iostream>
using namespace std;
class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time(){
            hours = 0;
            minutes = 0;
        }
        Time(int h, int m){
            hours = h;
            minutes = m;
        }
        void displayTime(){
            cout<<"Hours: "<<hours<<" Minutes: "<<minutes<<endl;
        }
        Time operator++ (int)  //overload ++operator
        {
            ++minutes;
            if (minutes>=60)
            {
                    ++hours;
                    minutes = minutes - 60;
                    return Time(hours,minutes);
            }
        }
};
int main()
{
    Time t1(11,59);
    t1++; //increments t1 by 1
    t1.displayTime();
    t1++;
    t1.displayTime();
    cout<<"\n\n\tBy Krishna Aryal";
    return 0;
}