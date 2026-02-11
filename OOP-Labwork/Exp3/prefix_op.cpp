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
            cout<<"Hours: "<<hours<<"\tMinutes: "<<minutes<<endl;
        }
        Time operator++(){
            minutes++;
            if (minutes>=60)
            {
                    hours++;
                    minutes-=60;
                    return Time(hours,minutes);
            }
        }
};
int main()
{
    Time T1(11,58);
    ++T1;
    T1.displayTime();
    ++T1;
    T1.displayTime();
    cout<<"\n\n\tBy Krishna Aryal";
    return 0;
}