/* Given an unsorted array A of size N of non-negative integers,
find a continuous sub-array which adds to a given number S.

Time complexity-O(n)
Auxillary space-O(1)*/



#include<bits/stdc++.h>
using namespace std;

int subarray(int arr[],int n,int sum){

int curr_sum=arr[0],start=0,i;
for(i=1;i<=n;i++){
    while(curr_sum>sum&&start<i-1){
        curr_sum=curr_sum-arr[start];
        start++;

    }

    if(curr_sum==sum){
        cout<<"subarray sum : "<<start<<" "<<i-1;
        return 1;
    }

    if(i<n)
        curr_sum=curr_sum+arr[i];

}
  cout<<"no subarray is found";
  return 0;

}

int main(){
int arr[]={15,2,4,8,9,5,10,23};
int n=sizeof(arr)/sizeof(arr[0]);
int sum=33;
subarray(arr,n,sum);
return 0;

}
