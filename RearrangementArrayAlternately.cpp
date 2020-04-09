
/* Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e
first element should be max value, second should be min value, third should be second max,
fourth should be second min and so on...

Time Complexity---O(n)
space complexity----O(1)extra space
*/

#include<bits/stdc++.h>
using namespace std;

int rearrange(int arr[],int n){

int max_index=n-1,min_ind=0;
int max_elemet=arr[n-1]+1;

for(int i=0;i<n;i++){
    if(i%2==0){
        arr[i]=arr[i]+(arr[max_index]%max_elemet)*max_elemet;
        max_index--;
    }
    else{
        arr[i]=arr[i]+(arr[min_index]%max_elemet)*max_elemet;
        min_index++;
    }
}
for(int i=0;i<n;i++)
    arr[i]=arr[i]/max_elemet;
}

int main(){

int arr[]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"original array"<<endl;
for(int i=0;i<n;i++)
    cout<<arr[i];

    rearrange(arr,n);
cout<<"\n modifed array \n";
for(int i=0;i<n;i++)
    cout<<arr[i];
return 0;
}
