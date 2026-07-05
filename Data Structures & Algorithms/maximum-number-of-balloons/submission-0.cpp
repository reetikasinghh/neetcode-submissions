class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> f;
        for( char c : text){
            if (string("balon").find(c) != string::npos){
                f[c]++;
            }
        }
        if(f.size()<5){
            return 0;
        }
        f['l'] /=2;
        f['o'] /=2;
        return min({f['b'], f['a'], f['l'], f['o'], f['n']});
        
    }
};