/*#include <iostream>

using namespace std;

int main()
{
    int m,n,a[205],i;
    while(cin>>n>>m)
    {
        int j=0,k=1;
        for(i=1;i<=n;i++)
            a[i]=0;
        while(1)
        {
            for(i=1;i<=n;i++)
            {
                if(a[i]!=1)
                {
                    j++;
                    if(j==m)
                    {
                        a[i]=1;
                        j=0;
                        if(k!=n)
                        cout<<i<<endl;
                        k++;
                    }
                }
                if(k==n-1)
                    break;
            }
        }
    }
    return 0;
}*/


#include<stdio.h>
int main()
{
    int n,m,a[5000],i;
    while(~scanf("%d%d",&n,&m))
    {
        int j=0,k=1;     //k用来记录被杀的人数
        for(i=1;i<=n;i++)  //有几个人，就用数组中１～ｎ个位置。将他们初始化为0。
            a[i]=0;
        while(1)          //永循环，保证ｉ一直在１～ｎ中循环直到所有人都被杀了
        {
            for(i=1;i<=n;i++)
            {
                if(a[i]!=-1)
                {
                    j++;
                    if(j==m)   //如果这个人数到m了，将他赋为-1，表示这个人out
                    {
                        a[i]=-1;
                        j=0;     //让j=0,因为j一会儿自己会加加变成1
                        ///if(k!=n)  //如果人没有全杀光，就把这个人的编号输出。因为最后一个人的编号不用输。
                       ///printf("%d\n",i); //把对应的号给输出来
                        k++;         //被杀死的人数+1；
                    }
                }
            }
            if(k==n)    //如果人被杀完了，就跳出永循环：
           {
               for(i=1;i<=n;i++)
                if(a[i]!=-1)
                    printf("%d\n",i);
                   break;
           }
        }
    }
    return 0;
}

