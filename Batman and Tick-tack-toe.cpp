
#include <iostream>

using namespace std;

int main() {
   int t; cin>>t; while(t--)
   {
       char a[4][4];
       int i,j;
       bool ans=false;
       for(i=0;i<4;i++)
       {
        for(j=0;j<4;j++) 
        {
            cin>>a[i][j];
        }
       }
        for(i=0;i<4;i++)
        {
        for(j=0;j<2;j++) 
         {
           if((a[i][j]=='x' && a[i][j+1]=='x' && a[i][j+2]=='.') ||
            (a[i][j]=='x' && a[i][j+1]=='.' && a[i][j+2]=='x') ||
               ( a[i][j]=='.' && a[i][j+1]=='x' && a[i][j+2]=='x') ) ans=true;
           
         }
        }
        
        for(i=0;i<2;i++)
        {
        for(j=0;j<4;j++)
        {
            if((a[i][j]=='x' && a[i+1][j]=='x' && a[i+2][j]=='.') ||
             (a[i][j]=='x' && a[i+1][j]=='.' && a[i+2][j]=='x') ||
              (a[i][j]=='.' && a[i+1][j]=='x' && a[i+2][j]=='x') )     ans= true;
            
        }
        }
        
         for(i=0;i<2;i++)
        {
        for(j=2;j<4;j++)
        {
         if((a[i][j]=='x' && a[i+1][j-1]=='x' && a[i+2][j-2]=='.') ||
           ( a[i][j]=='x' && a[i+1][j-1]=='.' && a[i+2][j-2]=='x') ||
             ( a[i][j]=='.' && a[i+1][j-1]=='x' && a[i+2][j-2]=='x')  )    ans= true;
            
        }
}


 for(i=0;i<2;i++)
        {
        for(j=0;j<2;j++)
        {
         if((a[i][j]=='x' && a[i+1][j+1]=='x' && a[i+2][j+2]=='.') ||
           ( a[i][j]=='x' && a[i+1][j+1]=='.' && a[i+2][j+2]=='x') ||
             ( a[i][j]=='.' && a[i+1][j+1]=='x' && a[i+2][j+2]=='x'))      ans= true;
            
        }
}
       if(ans) cout<<"YES\n";
       else cout<<"NO\n";
       
   }
    
}


