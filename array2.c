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
int isSorted(int arr[], int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int flag=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                flag=0;
                break;
            }

        }
        if(flag==0)
        {
            return 0;
        }
    }
    return 1;
}
int is_sorted(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 0;
        }
    }
    return 1;
}
int get_max(int arr[] , int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
}
int gets_max(int arr[],int n)
{
  int max=arr[0];
  int smax=-1;
  for(int i=1;i<n;i++)
  {
    if(arr[i]>max)
    {
        smax=max;
        max=arr[i];
    }
    if(arr[i]<max&&arr[i]>smax)
    {
     smax=arr[i];
    }
  }
  return smax;
}
int reverse(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main()
 {
    int arr[10]={10, 20, 30, 40, 50, 60};
    int n=6;
    display(arr,n);
    printf("%d\n", isSorted(arr,n));
    printf("%d\n", is_sorted(arr,n));
    printf("Max --%d \n",get_max(arr,n));
    printf("Second max-- %d\n",gets_max(arr,n));
    reverse(arr,n);
    display(arr,n);
 }
