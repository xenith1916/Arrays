/*
Given an array of positive integers. Your task is to find the leaders in the array.
Note: An element of array is leader if it is greater than or equal to all the elements to its right side.
Also, the rightmost element is always a leader.

Time complexity------O(n)  */

#include<bits/stdc++.h>
using namespace std;

int printleader(int arr[],int n){

int maxright=arr[n-1];
cout<<maxright<<" ";
for(int i=n-2;i>=0;i--){
    if(maxright<=arr[i]){
    maxright=arr[i];
        cout<<maxright<<" ";
    }
}

}
int main(){
int arr[]={16,17,4,3,5,2};
int n=sizeof(arr)/sizeof(arr[0]);
printleader(arr,n);
return 0;

}

