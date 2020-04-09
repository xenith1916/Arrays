
/* Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m.
The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).

Time Complexity-O(n1+n2)
Space Complexity-O(n1+n2)*/

#include<bits/stdc++.h>
using namespace std;

int merging(int arr1[],int n1,int arr2[],int n2,int arr3[]){

int i=0,k=0,j=0;

while(i<n1&&j<n2)
    if(arr1[i]<arr2[j]){
    arr3[k++]=arr1[i++];
    }
    else
        arr3[k++]=arr2[j++];
    while(i<n1)
        arr3[k++]=arr1[i++];
    while(j<n2)
        arr3[k++]=arr2[j++];


}

int main(){

int arr1[]={1,3,5,4};
int n1=sizeof(arr1)/sizeof(arr1[0]);
int arr2[]={2,4,6,8};
int n2=sizeof(arr2)/sizeof(arr2[0]);
int arr3[n1+n2];
merging(arr1,n1,arr2,n2,arr3);
cout<<"after merging"<<endl;

for(int i=0;i<n1+n2;i++)
cout<<arr3[i]<<"  ";

}
