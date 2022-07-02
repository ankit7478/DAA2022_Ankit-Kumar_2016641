#include<stdio.h>

int main()
{
    int n,key,pair=0;
    printf("Enter key:");
    scanf("%d",&n);
    
    printf("Enter array:");
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    printf("Enter key:");
    scanf("%d",&key);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]-arr[i]==key)
            pair++;
        }
    }
    
    printf("pair = %d",pair);
    return 0;
}
