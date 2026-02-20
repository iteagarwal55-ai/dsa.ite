#include<stdio.h>
int sum1(int n)   // O(c)
{
    return n*(n+1)/2;
}
int sum2(int n)   // O(n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int sum3(int n)  // O(n2)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum++;
        }
    }
    return sum;

}
int sum4(int n)  // TC O(n) Aux space O(n)
{
    if(n==1) return 1;
    return n+sum4(n-1);

}
int main()
{
    printf("%d\n", sum1(4));
    printf("%d\n", sum2(4));
    printf("%d\n", sum3(4));
    printf("%d\n", sum4(4));
}

