class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        vector<int> v;
        unordered_map<int, int>mp;
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }int n = arr.size() / 3;
        for(auto it:mp){
            if(it.second > n){
                v.push_back(it.first);
            }
        }return v;
    }
};