
/* Given two arrays X and Y of positive integers, find number of pairs such that xy > yx
(raised to power of) where x is an element from X and y is an element from Y.

Time Complexity----O(nLogn + mLogn)*/

#include<bits/stdc++.h>
using namespace std;

int numberpair(int x,int Y[],int n,int nofY[]){

if(x==0)
    return 0;
if(x==1)
    return nofY[0];
int *idx=upper_bound(Y,Y+n,x);
int ans=(Y+n)-idx;
ans+=(nofY[0]+nofY[1]);

if(x==2)
    ans-=(nofY[3]+nofY[4]);

if(x==3)
    ans+=nofY[2];
return ans;

}

int countpairs(int X[],int Y[],int m,int n){

int nofY[5]={0};
for(int i=0;i<n;i++)
    if(Y[i]<5)
    nofY[Y[i]]++;
sort(Y,Y+n);
int totalpairs=0;
for(int i=0;i<m;i++)
    totalpairs+=numberpair(X[i],Y,n,nofY);
return totalpairs;

}

int main(){

int X[]={2,1,6};
int Y[]={1,5};
int m=sizeof(X)/sizeof(X[0]);
int n=sizeof(Y)/sizeof(Y[0]);
cout<<countpairs(X,Y,m,n);
return 0;

}
