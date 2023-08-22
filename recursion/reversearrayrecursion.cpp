#include<bits/stdc++.h>
using namespace std;

 int a[5];
 void re(int l,int a[],int r)
 {
    if(l>r)
    return;

    swap(a[l],a[r]);

    re(l+1,a,r-1);
 }
int main()
{
   
    for(int i=0;i<5;i++)
    {
        cin>>a[i];

       
    }
     re(0,a,4);

     for(int i=0;i<5;i++){
     cout<<a[i];
     }

     return 0;
}