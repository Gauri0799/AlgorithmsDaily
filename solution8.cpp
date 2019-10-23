
#include<bits/stdc++.h>
using namespace std;
int r(char A)
{
    if(A =='X')
        return 10;
    if(A =='V')
       return 5;
    if(A =='I')
        return 1;
    if(A =='L')
        return 50;
    if(A =='C')
        return 100;
    if(A =='M')
        return 1000;
    if(A =='D')
        return 500;
}
int romanToInt(string A)
{      
    int count=r(A[0]);
    int n=A.length();
    for(int i=1;i<n;i++)
    {
        int a=r(A[i]);
        int b=r(A[i-1]);
        if(a>b)
        {
            count =count +(a-2*b);
        }
        else
            count=count+a;
    }
    return count;
}
 

 int main()
 {
 string s;
 cin>>s;
 int k=romanToInt(s);
 cout<<k;
 }
