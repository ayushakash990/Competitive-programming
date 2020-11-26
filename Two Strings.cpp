
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin>>t; while(t--)
	{
	 string s1,s2;
	 cin>>s1>>s2;
	// int n= s1.size();
	      //int sum1=0, sum2=0;
	     if(s1.size()!= s2.size())
	     {
	         cout<<"NO\n";
	         break;
	     }
	     else
	     {
	         int i;
	         sort(s1.begin(), s1.end());
	         sort(s2.begin(), s2.end());
	      for(i=0;i<s1.size();i++)
	      {
	        if(s1[i]!=s2[i]) break;
	        else;
	      }
	      if(i == s1.size()) cout<<"YES\n";
	      else cout<<"NO\n";
	     }
	  
	}
}
