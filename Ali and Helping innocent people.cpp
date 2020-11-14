#include <bits/stdc++.h>
using namespace std;
int main()
{
  
       string s;
       cin>>s; int i,flag=0;
       for(i=0;i<8;i++)
       {
           if(i==2)
            {
                if(isalpha(s[i]))
                 {
                     if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i]== 'O' || s[i] == 'U' || s[i] == 'Y')
                     {
                         flag=1;
                         break;
                     }
                 }
                 else
                 {
                     flag=1;
                     break;
                 }
            }
            if(i==6 && s[i]!='-') 
             {
                 flag=1;
                 break;
             }
            if(isdigit(s[i]) && isdigit(s[i+1]))
            {
                int sum=(int)s[i]+(int)s[i+1];
                if(sum%2 !=0)
                {
                    flag=1;
                    break;
                }
            }
       }
       if(flag==1) cout<<"invalid\n";
       else cout<<"valid\n";
   

}
