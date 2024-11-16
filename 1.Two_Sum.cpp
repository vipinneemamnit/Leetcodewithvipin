class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int>  numMap;
        for(int i = 0 ; i < nums.size();i++){
            if(numMap.count(target-nums[i])){
                result.push_back(numMap[target-nums[i]]);
                result.push_back(i);
                return result;
            }
            numMap[nums[i]] = i;
            
        }
        return result;
    }
};
