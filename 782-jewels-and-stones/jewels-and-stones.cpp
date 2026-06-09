class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> s;
        int counter = 0;
        for(int i=0;i<jewels.size();i++){
            s.insert(jewels[i]);
        };
        for(int i=0; i<stones.size();i++){
           if (s.count(stones[i])){
            counter++;
           };
        };

        return counter;
    }
};