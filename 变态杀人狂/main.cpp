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
        int j=0,k=1;     //k������¼��ɱ������
        for(i=1;i<=n;i++)  //�м����ˣ����������У������λ�á������ǳ�ʼ��Ϊ0��
            a[i]=0;
        while(1)          //��ѭ������֤��һֱ�ڣ�������ѭ��ֱ�������˶���ɱ��
        {
            for(i=1;i<=n;i++)
            {
                if(a[i]!=-1)
                {
                    j++;
                    if(j==m)   //������������m�ˣ�������Ϊ-1����ʾ�����out
                    {
                        a[i]=-1;
                        j=0;     //��j=0,��Ϊjһ����Լ���Ӽӱ��1
                        ///if(k!=n)  //�����û��ȫɱ�⣬�Ͱ�����˵ı���������Ϊ���һ���˵ı�Ų����䡣
                       ///printf("%d\n",i); //�Ѷ�Ӧ�ĺŸ������
                        k++;         //��ɱ��������+1��
                    }
                }
            }
            if(k==n)    //����˱�ɱ���ˣ���������ѭ����
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

