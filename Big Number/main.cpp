#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T--)
    {
        int n;double Count=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            Count+=log10((double)i);
        printf("%d\n",(int)Count+1);
    }
    return 0;
}
/*
#include<cstdio>
int sum[50000];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int s=0,t=0;
        sum[0]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<=s;j++)
            {
                sum[j]=sum[j]*i+t;
                t=sum[j]/10000;
                sum[j]=sum[j]%10000;
            }
            while(t)
            {
                sum[++s]=t%10000;
                t=t/10000;
            }
        }
        printf("%d",sum[s]);
        for(int i=s-1;i>=0;i--)
            printf("%04d",sum[i]);
        printf("\n");
    }
    return 0;
}*/
