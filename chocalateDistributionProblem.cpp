/* Given an array A of positive integers of size N, where each value represents number of chocolates in a packet.
 Each packet can have variable number of chocolates. There are M students, the task is to distribute chocolate packets
  such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students having packet with maximum chocolates and
student having packet with minimum chocolates is minimum.

Time complexity-----O(nLog n) */


#include<bits/stdc++.h>
using namespace std;

int chocalate(int arr[],int n,int m){

if(n==0||m==0)
    return 0;
sort(arr,arr+n);
if(n<m)
    return -1;
int left=0,right=0,min_diff=INT_MAX;
for(int i=0;i+m-1<n;i++){
    int diff=arr[i+m-1]-arr[i];
    if(diff<min_diff){
        min_diff=diff;
        left=i;
        right=i+m-1;
    }
}
return (arr[right]-arr[left]);
}

int main(){

int arr[]={7, 3, 2, 4, 9, 12, 56};
int n=sizeof(arr)/sizeof(arr[0]);
int m=3;
cout<<chocalate(arr,n,m);
return 0;

}
