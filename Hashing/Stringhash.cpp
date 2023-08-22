#include<bits/stdc++.h>
using namespace std;

int main(){

string s;

cin >> s;


// precompute

int ha[26] = {0};

for(int i=0;i<s.size();i++){

    ha[s[i] - 'a'] ++;
}

int num;

cin >> num;
while(num--)
{

char c;
cin >> c;


// fetch

cout << ha[c - 'a'];

}







return 0;
}