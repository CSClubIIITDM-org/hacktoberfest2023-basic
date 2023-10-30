#include <iostream>
using namespace std;
int n;
int main()
{
    cout<<"Enter the size of matrix: ";
    cin>>n;
    cout<<"Enter the elements of "<<n<<" x "<<n<<" matrix: ";
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            sum=sum+arr[i][j];
        }
    }
    cout<<"Sum of anti-principle diagonal elements is "<<sum<<endl;
    return 0;
}
