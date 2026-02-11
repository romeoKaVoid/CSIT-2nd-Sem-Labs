#include<iostream>
#include<math.h>
using namespace std;
class binary
{
    public:
        int count1=0, decimal1=0;
        double a,b,n;
        void getdata(){
            cout<<"Enter 1st binary number to perform operations: ";
            cin>>a;
            cout<<"Enter 2nd binary number to perform operations: ";
            cin>>b;
        }
        void display(){
            cout<<"\nThe entered binary numbers are "<<a<<" and "<<b<<endl;
        }
        void decimal(int temp){
            int a[50], i=0;
            while (temp>0)
            {
                n = temp % 10;
                temp = temp/10;
                a[i] = n;
                i++;
                count1++;
            }
            for (int i = 0; i <count1; i++)
            {
                decimal1 = decimal1 + a[i] * pow(2,i);
            }
        }
        void bin(int n){
            int a, b[50],i=0;
            while(n>0){
                a = n % 2;
                n = n/2;
                b[i] = a;
                ++i;
            }
            for (int j = i-1; j >=0 ; j--)
            {
                cout<<b[j];
            }
        }

        // void digitsB(){
        //     int temp = b, b[50], i=0;
        //     while (temp>0)
        //     {
        //         n = temp % 10;
        //         temp = temp/10;
        //         b[i] = n;
        //         i++;
        //         count2++;
        //     }
        //     cout<<"The number of digits in 2nd number is: "<<count2<<endl;
        //     for (int i = 0; i < count2; i++)
        //     {
        //         cout<<b[i]<<endl;
        //     }
        // }
};
int main()
{
    int sum,mul,div;
    binary b1,b2,b3,b4,b5;
    b1.getdata();
    // b1.display();
    b1.decimal(b1.a);
    // cout<<"The converted decimal value of 1st number is: "<<b1.decimal1;
    b2.decimal(b1.b);
    // cout<<"\nThe converted decimal value of 2nd number is: "<<b2.decimal1;
    sum = b1.decimal1 + b2.decimal1;
    mul = b1.decimal1 * b2.decimal1;
    div = b1.decimal1 / b2.decimal1;
    // cout<<"\nThe decimal sum is: "<<sum;
    // cout<<"\nThe decimal product is: "<<mul;
    // cout<<"\nThe decimal division is: "<<div;
    cout<<"\nThe binary sum of given numbers is: ";
    b3.bin(sum);
    cout<<"\nThe binary product of given numbers is: ";
    b4.bin(mul);
    cout<<"\nThe binary division of given numbers (a/b) is: ";
    b5.bin(div);
    cout<<"\n\tProgrammed by: Krishna Aryal";
    return 0;
}