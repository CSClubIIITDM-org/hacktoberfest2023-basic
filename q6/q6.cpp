#include <iostream>

using namespace std;

/*The arraymerge function implements the merge concept 
used for merge sort*/
void arraymerge(int* arr1,int* arr2,int* arr3,int n,int m)
{
    int j=0;
    int k=0;
    for(int i=0;i<n+m;i++)
    {
        //Compare between the 2 arrays and insert it into arr3
        if(k<n && j<m)
        {
            if(arr1[k]>arr2[j])
            {
                arr3[i]=arr2[j];
                j++;
            }
            else
            {
                arr3[i]=arr1[k];
                k++;
            }
        }

        /*Once one of the arrays are exhausted then input everything 
        from non-exhausted array to arr3*/
        else
        {
            if(k==n)
            {
                arr3[i]=arr2[j];
                j++;
            }
            else if(j==m)
            {
                arr3[i]=arr1[k];
                k++;
            }
        }
    }
}

int main()
{

    //Inputting the size and elements of Sorted Array 1
    int n;
    cin >> n;
    int arr1[n];
    for (int i=0;i<n;i++)
    {
        cin >> arr1[i];
    }

    //Inputting the size and elements of Sorted Array 1
    int m;
    cin >> m;
    int arr2[m];
    for (int i=0;i<m;i++)
    {
        cin >> arr2[i];
    }

    //Creating Array 3
    int arr3[n+m];

    //Merging the 2 sorted array into another sorted array
    arraymerge(arr1,arr2,arr3,n,m);

    //Displaying updated arr3
    for (int i=0;i<n+m;i++)
    {
        cout << arr3[i] <<" ";
    }
    cout << endl;

    return 0;
}