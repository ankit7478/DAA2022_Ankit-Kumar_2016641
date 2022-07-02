#include<iostream>
using namespace std;

void bubblesort(int arr[], int size)
{
    int temp;
    for(int i = 0; i<size-1; i++)
    {
        for(int j=i+1; j<size-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1];
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    bubblesort(arr,n);
   for(int i = 0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}
