/* Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
Time Complexity----O(n^2) */

#include<bits/stdc++.h>
using namespace std;

bool triplets(int arr[],int n){

for(int i=0;i<n;i++)
    arr[i]=arr[i]*arr[i];
sort(arr,arr+n);
for(int i=n-1;i>=2;i--){
    int l=0,r=i-1;
    while(l<r){
        if(arr[l]+arr[r]==arr[i])
            return true;

        (arr[l]+arr[r]<arr[i])?l++ : r--;
    }
}
return false;
}

int main(){

int arr[]={9,3,1,6,4,8};
int n=sizeof(arr)/sizeof(arr[0]);
triplets(arr,n)?cout<<"YES":cout<<"NO";
return 0;
}
