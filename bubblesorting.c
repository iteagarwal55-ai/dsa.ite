#include<stdio.h>
void display(int arr[], int n)
{
    printf("Array Elements->\n");
for (int i = 0; i < n; i++)
    {    
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubble_sort(int arr[], int n)
{
  for(int i=0;i<=n;i++)
  {
    int flag=1;
    for(int j=0;j<=n-2-i;j++)
    {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        flag=0;
    }
  
  if(flag ==1)
  {
    break;
  }
  }
}
void bubble_sort_rec(int arr[],int n)
{
    if(n==1)
    {return ;}
    for(int j=0;j<=n-2;j++)
    {
    if(arr[j]>arr[j+1])
    {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
    }
    bubble_sort_rec(arr,n-1);
}
int main()
{
   int arr[]={100,90,80,70,60,50};
   int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    bubble_sort(arr, n);
    display( arr,n);
    bubble_sort_rec(arr,n);
    display(arr,n);
}