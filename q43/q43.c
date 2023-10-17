#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l+(r-l)/2;
        if (arr[m] == x)
            return m;
        if (arr[m]<x)
            l=m+1;
        else
            r=m-1;
    }
    return -1;
}
 
void main()
{
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element to be searched.");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
    if(result==-1)
        printf("Element is not present in array");
    else
        printf("Element is present in index %d",result);
}