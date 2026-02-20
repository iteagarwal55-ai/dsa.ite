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
int foccurence(int arr[],int n, int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
    int mid=low+high/2;
    if(x>arr[mid])
    {
        return low=mid+1;
    }
    else if(x<arr[mid])
    {
        return high=mid-1;
    }
    else
    {
        if(arr[mid]!=arr[mid-1]||mid==0)
        {
            return mid;
        }
        high=mid-1;
    }
    }
    
}
int last_occurence(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
    int mid=(low+high)/2;
     if(x>arr[mid])
    {
        low=mid+1;
    }
    else if(x<arr[mid])
    {
        high=mid-1;
    }
    else
    {
  if(mid==n||arr[mid]!=arr[mid+1])
  {
    return mid;
  }
  high=mid-1;
    }
} 
}
int main()
{
    int arr[]={1,1,2,2,2,3,3,3,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    int ans1=foccurence(arr,n,3);
    printf("%d\n",ans1);
    int ans2=last_occurence(arr,n,1);
    printf("%d\n",ans2);
}