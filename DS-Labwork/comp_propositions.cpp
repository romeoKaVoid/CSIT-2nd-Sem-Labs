#include<iostream>
using namespace std;
class compound
{
    public:
        void neg(){
            for (int i = 1; i >= 0; i--)
            {
                //Convert 1 to 'T' and 0 as 'F'
                char a = i?'T':'F';       //if a is 1 then prints 'T' and if a is 0 then prints 'F'

                //Printing Result
                char result = (!i)?'T':'F';
                cout<<"  "<<a<<"  |  "<<" "<<result<<endl;
            }
        }
    void conjunc(){
        for (int i = 1; i >= 0; i--)
        {
            for (int j = 1; j >= 0; j--)
            {
                //Convert 1 to 'T' and 0 as 'F'
                char a = i?'T':'F';
                char b = j?'T':'F';

                //Printing Result
                char result = (i&&j)?'T':'F';
                cout<<"  "<<a<<"  |  "<<b<<"  |   "<<result<<endl;
            }
        }
    }
    void disjunc(){
        for (int i = 1; i >= 0; i--)
        {
            for (int j = 1; j >= 0; j--)
            {
                //Convert 1 to 'T' and 0 as 'F'
                char a = i?'T':'F';
                char b = j?'T':'F';

                //Printing Result
                char result = (i||j)?'T':'F';
                cout<<"  "<<a<<"  |  "<<b<<"  |   "<<result<<endl;
            }
        }
    }
    void exor(){
        for (int i = 1; i >= 0; i--)
        {
            for (int j = 1; j >= 0; j--)
            {
                //Convert 1 to 'T' and 0 as 'F'
                char a = i?'T':'F';
                char b = j?'T':'F';

                //Printing Result
                char result = (i^j)?'T':'F';
                cout<<"  "<<a<<"  |  "<<b<<"  |    "<<result<<endl;
            }
        }
    }
    void implic(){
        for (int i = 1; i >= 0; i--)
        {
            for (int j = 1; j >= 0; j--)
            {
                //Convert 1 to 'T' and 0 as 'F'
                char a = i?'T':'F';
                char b = j?'T':'F';

                //Printing Result
                char result = (!i||j)?'T':'F';
                cout<<"  "<<a<<"  |  "<<b<<"  |    "<<result<<endl;
            }
        }
    }
    void tauto(){
        for (int i = 1; i >= 0; i--)
        {
            for (int j = 1; j >= 0; j--)
            {
                //Convert 1 to 'T' and 0 as 'F'
                char a = i?'T':'F';
                char b = j?'T':'F';

                //Printing Result
                char result = (!(i&&j)||(j||i))?'T':'F';
                cout<<"  "<<a<<"  |  "<<b<<"  |      "<<result<<endl;
            }
        }
    }
    void contradict(){
        for (int i = 1; i >= 0; i--)
        {
            for (int j = 1; j >= 0; j--)
            {
                //Convert 1 to 'T' and 0 as 'F'
                char a = i?'T':'F';
                char b = j?'T':'F';

                //Printing Result
                char result = !(!(i&&j)||(j||i))?'T':'F';
                cout<<"  "<<a<<"  |  "<<b<<"  |      "<<result<<endl;
            }
        }
    }
};
int main()
{
    compound c;
    cout<<"The truth table of  Negation(NOT) is:\n";
    cout<<"  A  |  ~A\n";
    cout<<"--------------\n";
    c.neg();
    cout<<"\n\nThe truth table of  Conjunction(AND) is:\n";
    cout<<"  A  |  B  |  A^B\n";
    cout<<"------------------"<<endl;
    c.conjunc();
    cout<<"\n\nThe truth table of  Disjunction(OR) is:\n";
    cout<<"  A  |  B  |  A v B\n";
    cout<<"-------------------"<<endl;
    c.disjunc();
    cout<<"\n\nThe truth table of  Exclusive OR(XOR) is:\n";
    cout<<"  A  |  B  |  A XOR B\n";
    cout<<"------------------------"<<endl;
    c.exor();
    cout<<"\n\nThe truth table of  Implication(->) is:\n";
    cout<<"  A  |  B  |  A -> B\n";
    cout<<"------------------------"<<endl;
    c.implic();
    cout<<"\n\nThe truth table of  Tautology taking (A^B)->(AvB) as compound proposition is:\n";
    cout<<"  A  |  B  |  (A^B)->(BvA)\n";
    cout<<"------------------------------"<<endl;
    c.tauto();
    cout<<"\n\nThe truth table of  Contradiction taking ~((A^B)->(AvB)) as compound proposition is:\n";
    cout<<"  A  |  B  |  ~[(A^B)->(BvA)]\n";
    cout<<"------------------------------"<<endl;
    c.contradict();
    cout<<"\n\tProgrammed by: Krishna Aryal";
    return 0;
}