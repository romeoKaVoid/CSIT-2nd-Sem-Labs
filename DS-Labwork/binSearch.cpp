#include<iostream>
using namespace std;
class binSearch
{
    int arr[50];
   public:
    void getdata(int n);
    void display(int n);
    void sort(int n); 
    int SearchAlgo(int target, int l, int h);
};
void binSearch::getdata(int n){
    cout<<"Enter the list of elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}
void binSearch::display(int n)
{
    cout<<"{";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"\b}"<<endl;
}
void binSearch::sort(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int binSearch::SearchAlgo(int target, int l, int h){
    if (l>h)
    {
        // cout<<"Lower index cannot exceed Higher!!"<<endl;
        return -1;
    }
    int mid = (l + h)/2;
    if (arr[mid]==target)
    {
        return mid;
    }
    else if (arr[mid]>target)
    {
        return SearchAlgo(target,l,mid-1);
    }
    else{
        return SearchAlgo(target,mid+1,h);
    }
}
int main()
{
    binSearch b;
    int a,t;
    cout<<"Enter the number of elements are in list: ";
    cin>>a;
    b.getdata(a);
    // cout<<"The list of elements are: ";
    // b.display(a);
    b.sort(a);
    cout<<"The sorted list of elements are: ";
    b.display(a);
    cout<<"Enter the targeted element: ";
    cin>>t;
    int result = b.SearchAlgo(t,0,a-1);
    if (result != -1)
    {
        cout<<"The target is found at index "<<result<<endl;
    }
    else{
        cout<<"Target not found in given list!!"<<endl;
    }
    cout<<"\n\tProgrammed By: Krishna Aryal";
    return 0;
}