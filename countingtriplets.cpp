
/* Given an array of distinct integers. The task is to count all the triplets such that
sum of two elements equals the third element.  */


 #include<bits/stdc++.h>
 using namespace std;

 int triplets(int arr[],int n){
  sort(arr,arr+n);
 int max_val=0;
 for(int i=0;i<n;i++)
    max_val=max(max_val,arr[i]);
 int freq[max_val+1]={0};
 for(int i=0;i<n;i++)
    freq[arr[i]]++;

 int ans=0;
//0,0,0.......0+0=0
 ans+=freq[0]*(freq[0]-1)*(freq[0]-2)/6;//nCr=n!/(n-r)!*r!
//0,x,x.......0+x=x
 for(int i=1;i<=max_val;i++)
    ans+=freq[0]*freq[i]*(freq[i]-1)/2;
//x,x,2x......x+x=2x
 for(int i=1;2*i<=max_val;i++)
    ans+=freq[i]*(freq[i]-1)/2*freq[2*i];
//x,y,x+y......x+y=x+y
 for(int i=1;i<=max_val;i++){
    for(int j=i+1;i+j<=max_val;j++)
    ans+=freq[i]*freq[j]*freq[i+j];
 }
 return ans;

 }

 int main(){
 int arr[]={1,2,1,2,1};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<triplets(arr,n);
 return 0;
 }
