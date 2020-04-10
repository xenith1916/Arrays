/* Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

Time complexity-----O(n)  */


#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){

for(int i=0;i<n;i++)
    cout<<arr[i];


}

void sortarray(int arr[],int n){

int i,cnt0=0,cnt1=0,cnt2=0;

for(i=0;i<n;i++){

switch(arr[i]){

case 0:
    cnt0++;
    break;

case 1:
    cnt1++;
    break;

case 2:
    cnt2++;
    break;

}
}
 i=0;
while(cnt0>0){
    arr[i++]=0;
    cnt0--;
}

while(cnt1>0){
    arr[i++]=1;
    cnt1--;
}

while(cnt2>0){
    arr[i++]=2;
    cnt2--;
}


print(arr,n);
}

int main(){

int arr[]={0,1,0,1,2,1,0,0,1,2,2,1,0,2,0,1};
int n=sizeof(arr)/sizeof(arr[0]);
sortarray(arr,n);
return 0;

}
