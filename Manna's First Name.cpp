
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t; while(t--)
    {
        string s;
        cin>>s;
        int x=0,y=0,i=0;
        string a="SUVO" , b="SUVOJIT";
        while(s[i]!='\0')
        {
            string ch1= s.substr(i,a.size());
            string ch2= s.substr(i,b.size());
            if(ch2.compare(b) == 0) y++;
            else if(ch1.compare(a) == 0) x++;
            i++;
        }
        cout<<"SUVO = "<<x<<", SUVOJIT = "<<y<<endl;
    }
}
