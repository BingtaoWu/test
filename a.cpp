#include<iostream>
using namespace std;
int main()
{
    int l,n,b[100],minl=0,minr=0,maxl=0,maxr=0,min[100][2],max[100][2],maxtime=0,mintime=0;
    cin>>l;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>b[i];
    for(int i=0;i<n;i++)
    {
        if(b[i]<=l+1-b[i])
        {
            min[i][0]=b[i];
            min[i][1]=0;
            max[i][0]=l+1-b[i];
            max[i][1]=1;
        }
        else
        {
            min[i][0]=l+1-b[i];
            min[i][1]=1;
            max[i][0]=b[i];
            max[i][1]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(min[i][0]>maxl&&min[i][1]==0)
        maxl=min[i][0];
        if(min[i][0]>maxr&&min[i][1]==1)
        maxr=min[i][0];
        if(max[i][0]>minl&&max[i][1]==0)
        minl=max[i][0];
        if(max[i][0]>minr&&max[i][1]==1)
        minr=max[i][0];
    }
    if(maxl>maxr)
    mintime=maxl;
    else mintime=maxr;
    if(minl>minr)
    maxtime=minl;
    else
    maxtime=minr;
    cout<<"min:"<<mintime<<endl;
    cout<<"max:"<<maxtime<<endl;

}