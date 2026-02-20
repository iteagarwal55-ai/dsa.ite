#include<stdio.h>
void display(int arr[] ,int n )
{
    printf("Array Elements->\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
int search(int arr[],int n, int x)
{
    for(int j=0;j<n;j++)
    {
        if(arr[j]==x)
    {
     return j;
    }
}
        return -1;      
    
}
int bsearch(int arr[], int n , int x)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int mid=low+high/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(x>arr[mid])
        {
         low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return n-1;
}
int bsearch_rec(int arr[] , int n, int x, int low , int high)
{
    if(low>high)
    {
        return -1;
    }
    int mid=low+high/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(x>arr[mid])
    {
     return bsearch_rec(arr, n, x,mid+1,high);
    }
    else
    {
        return bsearch_rec(arr, n , x, low, mid-1);
    }
}
int main()
{
    int arr[10]={50,60,70,80,90,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    printf("%d\n",search(arr,n,90));
    printf("%d\n",bsearch(arr,n,80));
    int ans=bsearch_rec(arr,n,80,0,n-1);
    printf("%d\n",ans);
}