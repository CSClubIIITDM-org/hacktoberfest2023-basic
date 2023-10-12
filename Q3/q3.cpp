#include <iostream>
using namespace std;

int findNonDuplicate(int arr[], int size) 
{
    int answer = 0;

    for (int i = 0; i < size; i++) 
    {
        //using bitwise operator(XOR) to remove the duplicates.
        answer =answer ^ arr[i];   
    }
    return answer;
}

int main() 
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++) 
    {
        cin>>arr[i];
    }
    cout << findNonDuplicate(arr, size)<<endl;
    return 0;
}
