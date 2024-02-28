class Solution {
public:
    int numRabbits(vector<int>& answers) {

        int min_rabbits = 0;
        unordered_map<int, int> map;
        
        for(int i = 0; i < answers.size(); i++){
            map[answers[i]] += 1;
        }

        for(auto x : map){
            min_rabbits += (x.first + 1) *  ceil((float)x.second/(x.first+1));
        }

        return min_rabbits;
    }
};