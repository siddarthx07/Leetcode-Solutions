class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target)
{

    unordered_map<int, int> m;
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.count(nums[i]) != 0 and nums[i] == target / 2)
        {
            v.push_back(m[nums[i]]);
            v.push_back(i);
            break;
        }
        else if (m.count(nums[i]) == 0)
        {
            m[nums[i]] = i;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.count(target - nums[i]) != 0 and nums[i]!= (target/2))
        {
            v.push_back(i);
            v.push_back(m[target - nums[i]]);
            break;
        }
    }
    return v;     
}
};