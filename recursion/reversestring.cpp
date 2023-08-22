#include<bits/stdc++.h>
using namespace std;

 
 int re(string &s)
 {
    int i=0;
    if(i>s.size()/2) return true;

    if(s[i]!=s[((s.size())-i)-1]) return false;

    return re(s);
 }
int main()
{
   string s="madam";
   cout<<re(s);

     return 0;
}