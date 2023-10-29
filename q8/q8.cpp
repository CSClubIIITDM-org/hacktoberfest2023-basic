#include <iostream>
using namespace std;

int main()
{
    int n,c=0,b;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"NULL";
    for(int i=0;i<(1<<n);i++)
    {
        b=i;
        while(b>0)
        {
            if(b%2==1)
            cout<<arr[c]<<" ";
            c++;
            b=b/2;
        }
        c=0;
        printf("\n");
    }
    return 0;
}

