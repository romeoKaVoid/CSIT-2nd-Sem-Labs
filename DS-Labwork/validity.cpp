#include<iostream>
using namespace std;
//Here we check the validity of Modus Tollens

// For logical operations
bool implies(bool p, bool q){
    return !p || q;
}
bool neg(bool p){
    return !p;
}

// For the premises and conclusion
bool premise1(bool p, bool q){
    return implies(p,q);
}
bool premise2(bool q){
    return neg(q);
}
bool conclusion(bool p){
    return neg(p);
}
// For testing truth values
void validity(){
    bool valid = true;
    for (int i = 1; i >= 0; i--)
    {
        for (int j = 1; j >=0; j--)
        {
            bool bp = i ==1;
            bool bq = j ==1;

            bool P = premise1(bp,bq);
            bool Q = premise2(bq);
            bool C = conclusion(bp);
            bool T = implies(P&&Q,C);

            //For converting ! to T and 0 to F
            char it=i?'T':'F';
            char jt=j?'T':'F';
            char Pt=P?'T':'F';
            char Qt=Q?'T':'F';
            char Ct=C?'T':'F';
            char Tt=T?'T':'F';

            //Printing Truth table
            cout<<"  "<<it<<"  |  "<<jt<<"  |     "<<Pt<<"      |     "<<Qt<<"      |      "<<Ct<<"        |      "<<Tt<<endl;

            //Check For invalid cases
            if (P && Q && !C)
            {
                valid = false;
                cout<<"Argument is Invalid!!"<<endl;
                return;
            }
        }
    }
    if (valid)
    {
        cout<<"Argument is Valid!!"<<endl;
    }
}
int main()
{
    cout<<endl;
    cout<<"Truth Table of Modus Tollens is: "<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"  p  |  q  |  Premise1  |  Premise2  |  Conclusion   |  Tautology"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    validity();
    cout<<"\n\tProgrammed By: Krishna Aryal";
    return 0;
}