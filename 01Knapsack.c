#include<stdio.h>
int x=5,mass=25; // where x=no. of objects
int w[5]={7,5,10,8,3};
int p[5]={50,60,45,65,35};
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int _01knapsack(int m,int n)
{
    if(m==0 || n==0)
        return 0;
    else if(w[n]>m)
        return _01knapsack(m,n-1);
    else
    {
        int a= _01knapsack(m,n-1);
        int b= _01knapsack(m-w[n],n-1)+p[n];
        return max(a,b);
    }
}
int main()
{
    printf("Maximum profit: %d",_01knapsack(mass,x));
}
