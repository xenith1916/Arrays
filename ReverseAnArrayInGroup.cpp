
/* Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.

Time complexity----O(n)
Auxillary Space----O(1) */

#include<bits/stdc++.h>
using namespace std;

void reversee(int arr[],int n,int k){

for(int i=0;i<n;i +=k){
    int left=i;
    int right=min(i+k-1,n-1);
    if(left<right)
        swap(arr[left++],arr[right--]);

}

}

int main(){
int arr[]={1,2,3,4,5,6,7,8};
int k=3;
int n=sizeof(arr)/sizeof(arr[0]);
reversee(arr,n,k);
for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
return 0;

}
