class Solution {
public:
    int rearrangeCharacters(string s, string target) {
unordered_map<char,int> mp;
for(char c: s) mp[c]++;

unordered_map<char,int> freq;
for(char c: target) freq[c]++;

int minCount = INT_MAX;

for (auto [ch, required] : freq) {
    minCount = min(minCount, mp[ch] / required);
}

return minCount;
    }
};