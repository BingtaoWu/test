#include<iostream>
using namespace std;
void fd(int m,int n[9][2])
{
    int total=0;
    n[m/100-1][1]=1;
    n[m%100/10-1][1]=1;
    n[m%10-1][1]=1;
    n[m*2/100-1][1]=1;
    n[m*2%100/10-1][1]=1;
    n[m*2%10-1][1]=1;
    n[m*3/100-1][1]=1;
    n[m*3%100/10-1][1]=1;
    n[m*3%10-1][1]=1;
    if(m*3<1000)
    for(int i=0;i<9;i++)
    {
        total+=n[i][1];
    }
    if(total==9)
    cout<<m<<" "<<m*2<<" "<<m*3<<endl;
    for(int i=0;i<9;i++)
    {
        n[i][1]=0;
    }
}
int main()
{
    int a[9][2];
    int number;
    for(int i=0;i<9;i++)
    {
        a[i][0]=i+1;
        a[i][1]=0;
    }
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            if(i!=j)
            for(int k=0;k<9;k++)
                if(j!=k)
                {
                    number=a[i][0]*100+a[j][0]*10+a[k][0];
                    fd(number,a);
                }
    return 0;
    if(1)
    return 1;
}
