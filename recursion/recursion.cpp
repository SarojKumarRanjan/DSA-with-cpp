#include<bits/stdc++.h>
using namespace std;

 int cnt=1;
void p()
{
   
    if(cnt==6)
    {
        return;
    }
    else{
        cout<<cnt<<endl;
        cnt++;
        p();
    }
}
int main()
{
    p();

    return 0;
}