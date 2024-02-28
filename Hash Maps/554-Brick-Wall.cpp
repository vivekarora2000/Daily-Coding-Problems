class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
        // Key is the position and Value is count of corners
        unordered_map<int, int> num_corners;

        int pos, max_count = 0;

        for(int i = 0; i < wall.size(); i++){
            pos = 0;
            for(int j = 0; j < wall[i].size() - 1; j++){

                // Calculate position using width
                pos += wall[i][j];

                num_corners[pos] += 1;

                max_count = max(max_count, num_corners[pos]);
            }
        }

        return wall.size() - max_count;

    }
};

