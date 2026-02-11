#include<iostream>
const char len=50;
using namespace std;
class Date{     //for date input and output
    int years, months, day;
    public:
        void get_Date(){
            cout<<"Enter Year: ";
            cin>>years;
            cout<<"Enter Months: ";
            cin>>months;
            cout<<"Enter Day: ";
            cin>>day;
        }
        void display_Date(){
            cout<<years<<"-"<<months<<"-"<<day<<endl;
        }
};
class duration{     //for duration input and output
    int hours,minutes;
    public:
    void get_Time(){
        cout<<"Enter how many hours: ";
        cin>>hours;
        cout<<"Enter how many minutes: ";
        cin>>minutes;
    }
    void display_Time(){
        cout<<"\nThe duration of Recording is:";
        cout<<hours<<" Hours and "<<minutes<<" minutes"<<endl;
    }
};
class Book      //base class 1
{
    char author[len];
    int edition;
    Date d1;
    long long int ISBN;
    public:
        void getdata_w(){
            cout<<"Enter the name of author of Book: ";
            cin.getline(author,len);
            cout<<"Enter the edition of book: ";
            cin>>edition;
            cout<<"Enter the publication date of the book:\n";
            d1.get_Date();
            cout<<"Enter the ISBN number of Book: ";
            cin>>ISBN;
        }
        void putdata_w(){
            cout<<"Author of Book: "<<author<<endl;
            cout<<"Edition: "<<edition<<"th"<<endl;
            cout<<"Publication Date: ";d1.display_Date();
            cout<<"ISBN Number: "<<ISBN<<endl;
        }
};
class voice_rec     //base class 2
{
    char speaker[len];
    duration d;
    Date d2;
    public:
        void getdata_r(){
            cin.ignore();
            cout<<"Enter the Speaker of recorded book: ";
            cin.getline(speaker,len);
            cout<<"Enter the duration of Recording:\n";
            d.get_Time();
            cout<<"Enter the Recording Date:\n";
            d2.get_Date();
        }
        void putdata_r(){
            cout<<"\nSpeaker of the Book: "<<speaker;
            d.display_Time();
            cout<<"Recording Date: ";
            d2.display_Date();
        }
};
class talking_book: public Book, public voice_rec{      //Multiple Inheritance
    public:
    void display(){
        putdata_w();
        putdata_r();
    }
};
int main()
{
    talking_book t;
    cout<<"Enter Details of published book!!\n";
    t.getdata_w();
    cout<<"\nEnter the details of recorded book!!\n";
    t.getdata_r();
    cout<<"\nThe provided details of the book is!!\n";
    t.display();
    cout<<"\n\t\tBy Krishna Aryal"; 
return 0;
}