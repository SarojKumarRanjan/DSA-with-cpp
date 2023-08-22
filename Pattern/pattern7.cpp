#include<bits/stdc++.h>
using namespace std;
print( int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        
        }
        for (int j = 0; j < 2*n-(2*i+1); j++)
        {
            cout<<"*";
        }
         for (int j = 0; j < i; j++)
        {
        cout<<" ";
        }
        
       cout<<endl; 
    }
    
}
print2(int n)
{
     
    for (int i = 0; i <= 2*n-1; i++)
    {
       
        int stars = i;
        if(i>n) stars= 2*n-i;
        for (int j = 0; j < stars; j++)
        {
            cout<<"*";
        }
       cout<<endl; 
    }
}
print3(int n)

{
     
    for (int i = 0; i <= n; i++)
    {int start=1;
        for (int j = 0; j < i; j++)
        {
            if(i%2==0)
            start=1;
            else
            start=0;
        
        }
        for (int j = 0; j < i; j++)
        {
            cout<<start;
            start=1-start;
        }
        
        
       cout<<endl; 
    }


}
print4(int n)
{
     for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        
        }
        for (int j = 0; j < 2*(n-i); j++)
        {
            cout<<" ";
        }
         for (int j = i; j >0; j--)
        {
        cout<<j;
        }
        
       cout<<endl; 
    }

}
print5(int n)
{
       
    for (int i = 0; i < n; i++)
    {
       
       
        for (char ch='A';ch<='A' + i;ch++)
        {
            cout<<ch<<" ";
        }
       cout<<endl; 
    }

}
print6(int n)
{
     for (int i = 0; i < n; i++)
    {
       
       
        for (char ch='A';ch<'A'+ n-i;ch++)
        {
            cout<<ch<<" ";
        }
       cout<<endl; 
    }

}
print7(int n)
{
 for (int i = 0; i < n; i++)
 
    {    
        char ch='A'+ i;
        for (int j = 0; j <= i; j++)
        {
            cout<<ch;
        
        }
        cout<<endl;


    }
}
print8(int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<" ";
        
        }
        int breakp = (2*i+1)/2;
        char ch= 'A';
        for (int j = 1; j <= 2*i+1; j++)
        {
           
            cout<<ch;
            if(j<= breakp)
             ch++;
             else ch--;
        }
         for (int j = 0; j < n-i; j++)
        {
        cout<<" ";
        }
        
       cout<<endl; 
    }
}
print9(int n)
{
       
    for (int i = 1; i <= n; i++)
    {
       char ch='A'+ n-1;
        for (int j = 0; j < i; j++)
        {
            cout<<ch;
            ch--;
        }
       cout<<endl; 
    }
}
print10(int n)
{

    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout<<"*";
        
        }
        for (int j = 0; j < 2*(n-i); j++)
        {
            cout<<" ";
        }
         for (int j = i; j >0; j--)
        {
        cout<<"*";
        }
        
       cout<<endl; 
    } 

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        
        }
        for (int j = 1; j <= (2*n)-(2*i); j++)
        {
            cout<<" ";
        }
         for (int j = 1; j <=i; j++)
        {
        cout<<"*";
        }
        
       cout<<endl; 
    } 
}
print11(int n)
{
    int space=2*n-2;
     for (int i = 1; i <=(2*n)-1; i++)
    {
        int star=i;
        if(i>n)
        star=2*n-i;
        for (int j = 1; j<=star;j++ )
        {
            cout<<"*";
           
        }
       
        for (int j = 1; j <=space;j++)
        {
            cout<<" ";
           
        }
          for (int j = 1; j<=star;j++ )
        {
            cout<<"*";
           
        }
       cout<<endl; 
        if(i<n)space -=2;
        else
        space +=2;
    } 

}
print12(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        if(j==0 || j==n-1 || i==0 || i==n-1)
        cout<<"*";
        else
        cout<<" ";
         cout<<endl;
    }
   
}
print13(int n)
{
     for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down = (2*n-2)-i;


            cout<<(n-min(min(top,down),min(left,right)));
        
        }
        
       cout<<endl; 
    } 
}

int main()

{
int n;
cin>>n;

//print(n);
//print2(n);
//print3(n);
//print4(n);
//print5(n);
//print6(n);
//print7(n);
//print8(n);
//print9(n);
//print10(n);
//print11(n);
//print12(n);
//print13(n);
    return 0;
}