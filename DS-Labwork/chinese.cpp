#include <iostream>
using namespace std;
class chinese
{
    int x, mod, M[50],y;
    int x1[50], m[50], inv[50];

public:
    void getdata(int a);
    void display(int b);
    void theorem(int c);
    int result(int d);
};
void chinese::getdata(int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << "(x, mod) = ";
        cin >> x >> mod;
        x1[i] = x;
        m[i] = mod;
    }
}
void chinese::display(int b)
{
    for (int i = 0; i < b; i++)
    {
        cout << "x = " << x1[i] << " (mod " << m[i] << ")\n";
    }
}
void chinese::theorem(int c)
{
    y = 1;
    for (int i = 0; i < c; i++)
    {
        y = y * m[i];
    }
    // cout << "y = " << y << endl;
    for (int i = 0; i < c; i++)
    {
        M[i] = y / m[i];
        // cout << "M" << i + 1 << "=" << M[i] << endl;
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 1; j < 50; j++)
        {
            if ((M[i] * j) % m[i] == 1)
            {
                inv[i] = j;
                // cout << "The inverse of M" << i + 1 << " is " << inv[i] << endl;
                break;
            }
        }
    }
}
int chinese::result(int d)
{
    int result = 0;
    for (int i = 0; i < d; i++)
    {
        result = result + (x1[i]*M[i]*inv[i]);
    }
    // cout<<"y = "<<y<<endl;
    // cout<<"Result = "<<result<<endl;
    result = result%y;
    // cout<<"Result = "<<result<<endl;
    return result;
}
int main()
{
    int a;
    chinese c1;
    cout << "Enter how many simutaneous congruencies you want to give: ";
    cin >> a;
    cout << "Enter values of x and mod:\n";
    c1.getdata(a);
    cout << "\nEntered simultaneous congruences are:\n";
    c1.display(a);
    c1.theorem(a);
    cout<<"\nThe required value of x = "<<c1.result(a);
    cout << "\n\n\tProgrammed by: Krishna Aryal";
    return 0;
}