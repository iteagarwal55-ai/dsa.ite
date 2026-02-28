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
int partition (int arr[],int p,int r)
{
    int i = p - 1;
    int x=arr[r];
    for(int j=p;j<r;j++)
    {
        if(arr[r]<x)
        {
        i++; 
        int temp=arr[j];
        arr[i]=arr[j];
        arr[j]=temp;
        }
        
    }
    
    int temp=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=temp;
    return i+1;

}
void quick_sort(int arr[],int p,int r)
{
    if(p<r)
    {
        int q=partition(arr,p,r);
        quick_sort(arr,p,q-1);
        quick_sort(arr,q+1,r);
    }
}

void merge(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++)
    {
        arr[i]=arr[low+i];
    }
    for( int j=0;j<n2;j++)
    {
        arr[j]=arr[j+mid+1];
    }
    int i=0;
    int j=0;
    int k=0;
    while(  i<n1 && j<n2)
    {
     if(arr1[i]<arr2[j])
     {
        arr[k]=arr1[i];
        i++;
        k++;
     }
     else
     {
        arr[k]=arr2[j];
        j++;
        k++;
     }
    }
    while(i<n1)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main()
{
    int arr[]={70,60,50,40,30,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    //quick_sort(arr,0,n-1);  
    //display(arr,n);
 
    merge(arr ,0 ,n-1/2,n-1);
    merge_sort(arr,0,n-1);
    display(arr,n);
}