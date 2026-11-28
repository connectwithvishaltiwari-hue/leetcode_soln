class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int n1 = 0;
        int n = 0;

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }
                if(grid[i][j] == 1){
                    n1++;
                }
            }
        }

        while(!q.empty() && n1 > 0){
            int s = q.size();
            n++;

            for(int i = 0; i < s; i++){
                int r = q.front().first;
                int c = q.front().second;
                q.pop();

                // up
                if(r-1 >= 0 && grid[r-1][c] == 1){
                    grid[r-1][c] = 2;
                    n1--;
                    q.push({r-1, c});
                }

                // down
                if(r+1 < grid.size() && grid[r+1][c] == 1){
                    grid[r+1][c] = 2;
                    n1--;
                    q.push({r+1, c});
                }

                // left
                if(c-1 >= 0 && grid[r][c-1] == 1){
                    grid[r][c-1] = 2;
                    n1--;
                    q.push({r, c-1});
                }

                // right
                if(c+1 < grid[0].size() && grid[r][c+1] == 1){
                    grid[r][c+1] = 2;
                    n1--;
                    q.push({r, c+1});
                }
            }
        }

        if(n1 == 0){
            return n;
        }

        return -1;
    }
};