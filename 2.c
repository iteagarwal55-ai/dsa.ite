#include<stdio.h>
int sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int sum1(int n)
{
    if(n ==0) return 0;
    return n%10+sum1(n/10);
}
int main()
{
    printf("%d\n", sum(567));
    printf("%d\n", sum1(567));

}