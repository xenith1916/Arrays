/* Given an array arr of N integers. Find the contiguous sub-array with maximum sum.(Kadanes Algorithm)
Time Complexity---O(n) */


#include<bits/stdc++.h>
using namespace std;

int maxsubarray(int arr[],int n){

int meh=0,msf=INT_MIN,start=0,end1=0,s=0;
for(int i=0;i<n;i++){
    meh=meh+arr[i];

    if(msf<meh){
        msf=meh;
        start = s;
        end1 = i;
    }

    if(meh<0){
        meh=0;
        s = i + 1;
    }
}
cout<<msf<<endl;
cout<<start<<" "<<end1;

}

int main(){
int arr[]={-2,-3,4,-1,-2,1,5,-3};
int n=sizeof(arr)/sizeof(arr[0]);
maxsubarray(arr,n);
return 0;
}
