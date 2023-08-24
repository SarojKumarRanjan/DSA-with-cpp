#include<bits/stdc++.h>
using namespace std;

// difination of middle function

int middle(vector<int> &arr,int low, int high){

int pivot = arr[low];

int left = low +1;
int right = high;

while(left<=right){
    // here changing the code from arr[left] <= pivot for reverse sorting;
    while(arr[left] >= pivot && left <= right){

        left++;

    }
    // here also i am changing the code for reverse sorting by changing the condtion only of arr[right] > pivot;
    while(arr[right] < pivot){
        right--;
    }
    if(left< right){
        swap(arr[left], arr[right]);
    }
   
   
}
 swap(arr[low], arr[right]);
return right;
}

// defination of quick sort 

void quick_sort(vector<int> &arr, int low , int high){
    if(low<high){
    
    int target = middle(arr,low,high);

    quick_sort(arr,low,target-1);
    quick_sort(arr,target+1,high);

    }
}

int main(){

int n;
cin>>n;

vector<int> arr(n);

for(int i = 0 ; i< n ; i++){
    cin >> arr[i];
}
// function calling 
quick_sort(arr,0,n-1);
// Printing the function 
for (int i = 0 ; i<n;i++){
    cout << arr[i] << " ";
}
    return 0;
}