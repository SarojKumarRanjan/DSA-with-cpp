#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin >> n;

int arr[n];

for(int i=0;i<n;i++){
    cin >> arr[i];

}


// precompute

// map<int,int> mpp;

unordered_map<int,int> mpp;

for(int i=0;i<n;i++){
    mpp[arr[i]]++;
}


//quries 

int q;
cin >> q;

while(q--){

int num;
cin >> num;

cout << mpp[num];


}

return 0;
}