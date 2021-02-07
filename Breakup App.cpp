// BY AYUSH AKASH
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x=0,y=0;
    int t;
    cin>>t;
    string s;
    int date=0,breakup=0;
    int c=0,c1=0,c3=0;
    for(int i=0;i<t;i++)
    {

         getline(cin,s);
         if(s[0]=='G')
         {

             for(int i=0;i<s.length();i++)
             {
                 x=s[i]-'0';
                 y=s[i+1]-'0';
                 if(10*x+y==19)
                 {
                     c+=2;
                 }
                 else if(10*x+y==20)
                 {
                     c1+=2;
                 }
                 else if((x>=0&&x<=9) && (y>=0&&y<=9))

                 {
                     c3+=2;
                 }
             }

         }
          if(s[0]=='B')
         {

             for(int i=0;i<s.length();i++)
             {
                 x=s[i]-'0';
                 y=s[i+1]-'0';
                 if(10*x+y==19)
                 {
                     c++;
                 }
                 else if(10*x+y==20)
                 {
                     c1++;
                 }
                 else if((x>=0 && x<=9) && (y>=0&&y<=9))

                 {
                     c3++;
                 }
             }

         }


    }

    if(c==c1)
    {
        cout<<"No Date"<<endl;
    }
    else if(c>c3||c1>c3)
    {
        cout<<"Date"<<endl;
    }
    else
    {
        cout<<"No Date"<<endl;
    }
}
