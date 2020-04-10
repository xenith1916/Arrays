/* Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array.
 Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

 Time Complexity------O(n) */


#include<bits/stdc++.h>
using namespace std;

int equi(int arr[],int n){

int sum=0,leftsum=0;
for(int i=0;i<n;++i)
    sum+=arr[i];
for(int i=0;i<n;++i){

    sum -=arr[i];
    if(leftsum==sum)
        return i;
    leftsum +=arr[i];

}
return -1;

}

int main(){

int arr[]={-7,1,5,2,-4,3,0};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<equi(arr,n);
return 0;

}
