#include <iostream>
#include <cstdlib> // For srand() and rand()
#include <ctime>   // For time()

using namespace std;

// Function to input data into the array
void getdata(int arr[], int b)
{
    for (int i = 0; i < b; i++)
    {
        cin >> arr[i];
    }
}

// Monte Carlo method to find the target element in the array
int Monte_Carlo(int arr[], int t, int n, int max = 100)
{
    int trial = 0;
    srand(static_cast<unsigned>(time(0)));
    // Seed the random number generator (mainly to generate different numbers in each loop)
    // if it is not used then same number will be generated randomly in each loop

    while (trial < max)
    {
        int index = rand() % n; // Randomly select an index
        trial++;

        if (arr[index] == t)
        {
            cout << "Targeted number found at index " << index << " after " << trial << " trials!!" << endl;
            return index; // Return the index where the target was found
        }
    }

    cout << "Target not found after " << trial << " trials!!" << endl;
    return -1; // Return -1 if the target was not found
}

int main()
{
    int arr[50], t, n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n > 50)
    {
        cout << "Array size should not exceed 50." << endl;
        return 1;
    }

    cout << "Enter the elements of the array: ";
    getdata(arr, n);

    cout << "Enter your targeted element: ";
    cin >> t;

    Monte_Carlo(arr, t, n);
    cout<<"\n\tProgrammed By: Krishna Aryal";
    return 0;
}