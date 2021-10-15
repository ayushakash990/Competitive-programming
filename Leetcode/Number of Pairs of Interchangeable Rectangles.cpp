class Solution {
public:
   long long func(int n) {
        int a = n, b = n-1;
        if(a%2 == 0) a /= 2;
        else b /= 2;
        return (long long)a * b;
    }
    long long interchangeableRectangles(vector<vector<int>>& a) {
        int n = a.size();
        long long count = 0;
        unordered_map<double,int> mp;
        for(int i=0; i<n; i++) {
            double rect = (double)a[i][0]/a[i][1];
            mp[rect]++;
        }
        for(auto i: mp) {
            long long res = func(i.second);
            count += res;
        }
        return count;
    }
        
    
};
