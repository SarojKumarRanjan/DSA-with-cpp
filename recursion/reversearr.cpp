#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" "; 
    }
    cout<<endl;
}
/*
void reverse(int arr[],int n){
    int start = 0;
    int end= n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


*/
//swap a alternate number 

altreverse(int arr[],int n){
    for (int i = 0; i < n; i=i+2)
    {
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
    
}



int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {1,2,3,6,5};


   // reverse(arr,6);
  //  reverse(brr,5);

  altreverse(arr,6);
  altreverse(brr,5);


    printArray(arr,6);
    printArray(brr,5);



    return 0;
}
