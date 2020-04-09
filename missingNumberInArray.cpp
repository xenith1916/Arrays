
/* Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing,
 the missing number is to be found .

 Time Complexity----O(n)*/

#include<bits/stdc++.h>
using namespace std;

int getmissing(int arr[],int n){

int total=(n+1)*(n+2)/2;
for(int i=0;i<n;i++){
    total=total-arr[i];

}
return total;

}

int main(){
int arr[]={1,2,4,5,6};
int n =sizeof(arr)/sizeof(arr[0]);
cout<<getmissing(arr,n);
return 0;

}
