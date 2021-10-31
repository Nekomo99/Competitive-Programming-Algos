#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    int dot=0;int dash=0;int cnt=0;int len;
    cout<<"Enter no. of numbers";
    cin>>n;
    string arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {   string ch=arr1[i];
        len = ch.length();
        char start=ch[0];
        char last=ch[len-1];
      if(start=='.' && last=='-')
      {
          for(int j=0;j<len;j++)
          {
              if(ch[j]=='.')
                dot++;
              else
              dash++;
          }if(dot==dash){cnt++;}
      }
    }
    cout<<cnt;
    return 0;
}
