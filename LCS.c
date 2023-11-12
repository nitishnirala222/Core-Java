#include<stdio.h>
#include<math.h>

char a[5]={'A','B','A','B','A'};
char b[7]={'B','A','B','A','B','A','A'};

int max(int p,int q)
{
    if(p>q)
        return p;
    else
        return q;
}
int LCS(int x,int y)
{
    if(x==0 || y==0)
        return 0;
    else if(a[x]==b[y])
        return 1+LCS(x-1,y-1);
    else
        return max(LCS(x,y-1),LCS(x-1,y));
}
int main()
{
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    printf("Longest Common Subsequence: %d",LCS(m,n));
}
