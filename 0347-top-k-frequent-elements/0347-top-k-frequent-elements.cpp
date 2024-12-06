class Solution {
public:
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> frequencyMap;
    for (int num : nums) {
        frequencyMap[num]++;
    }
    
    map<int, vector<int>> inverseMap;
    for (auto& pair : frequencyMap) {
        inverseMap[pair.second].push_back(pair.first);
    }
    
    for (auto& group : inverseMap) {
        sort(group.second.begin(), group.second.end());
    }
    
    vector<int> result;
    for (auto it = inverseMap.rbegin(); it != inverseMap.rend() && result.size() < k; ++it) {
        for (int num : it->second) {
            result.push_back(num);
            if (result.size() == k) break;
        }
    }
    
    return result;
}
};