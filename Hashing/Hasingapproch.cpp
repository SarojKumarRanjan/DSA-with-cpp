#include<bits/stdc++.h>
using namespace std;


int main(){

cout <<"enter the number of array";
int n;
cin >> n;

int arr[n];
cout <<"enter the elemrnt  of array";
for(int i=0;i<n;i++){

    cin >> arr[i];
}

// precompute

int hash[15] = {0};

for(int i=0; i<n;i++){
hash[arr[i]] += 1;
}

// input to obtain required number

cout <<"enter the number of element you want to check";
int q;
cin >> q;

cout <<"enter the numbers";
while(q--){
    int number;
    cin >> number;

    // here we will fetch the required number 

    cout << hash[number] << endl;
}

return 0;


}