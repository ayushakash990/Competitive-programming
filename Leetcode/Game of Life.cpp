class Solution {
public:
    int N, M;
    inline bool isValid(int x, int y){if(x<0 || x>=N || y<0 || y>=M)return false;return true;};
    
    
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>tempboard = board;
        int n = (int)board.size();
        if(n == 0)return ;
        int m = (int)board[0].size();
        if(m == 0)return ;
        N = n;
        M = m;
        queue<pair<int, int>>q;
        for(int i = 0; i<n; i++)for(int j = 0; j<m; j++)if(!tempboard[i][j])q.push({i, j});
        
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            int x = top.first, y = top.second;
            // check for the directions.
            int cnt = 0;
            int dx[] = {-1, 0, 1, -1, 1, 1, 0, -1};
            int dy[] = {1, 1, 1, 0, 0, -1, -1, -1};
            for(int i = 0; i<8; i++){
                int px = x + dx[i];
                int py = y + dy[i];
                if(isValid(px, py)){
                    // we need to count the live neighbors.
                    if(tempboard[px][py] == 1){
                        ++cnt;
                    }
                }
            }
            if(cnt ==3)board[x][y] = 1; 
        }
        
        for(int i = 0; i<n; i++)for(int j = 0; j<m; j++)if(tempboard[i][j])q.push({i, j});
        
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            int x = top.first, y = top.second;
            // check for the directions.
            int cnt = 0;
            int dx[] = {-1, 0, 1, -1, 1, 1, 0, -1};
            int dy[] = {1, 1, 1, 0, 0, -1, -1, -1};
            for(int i = 0; i<8; i++){
                int px = x + dx[i];
                int py = y + dy[i];
                if(isValid(px, py)){
                    // we need to count the live neighbors.
                    if(tempboard[px][py] == 1){
                        ++cnt;
                    }
                }
            }
            if(cnt>3)board[x][y] = 0;
            if(cnt<=1)board[x][y] = 0; 
        }
        
        
        // board = tempboard;
        return ;
    }
};
