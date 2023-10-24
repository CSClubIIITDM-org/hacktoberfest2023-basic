#include<stdio.h>
void comb(int arr1[],int arr2[],int n)
{
    int k=2*n;
    int a=0,b=0,arr[k];
    for(int i=0;i<k;i++)
    {
        if(i%2==0)
            arr[i]=arr1[a++];
        else
            arr[i]=arr2[b++];
    }
    printf("final array:\n");
    for(int i=0;i<k;i++)
        printf("%d ",arr[i]);
}

void main()
{
    int n;
    printf("Enter size of arrays:");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter elements in array 1:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    printf("Enter elements in array 2:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr2[i]);
    comb(arr1,arr2,n);
}