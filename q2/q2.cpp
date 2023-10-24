#include<iostream>
using namespace std;

int find_Small(int arr[], int n)
{
    int a=1; 
    for(int i=0;i<n && arr[i]<=a;i++) 
        a=a+arr[i];
    return a;
}

int main() 
{
    int n,x;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    x=find_Small(arr,n);
    cout<<"Smallest positive integer that cannot be represented:"<<x<<endl;
    return 0;
}
