//
//  525ContinousArray.cpp
//  Leetcode
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mymap;
        int sum = 0, longestsubArray = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i] == 0 ? -1 : 1;

            if(sum == 0){
                if (longestsubArray < i+1){
                    longestsubArray = i+1;
                }
            } else if( mymap.find(sum) != mymap.end()){
                if(longestsubArray < (i - mymap[sum])){
                        longestsubArray = i - mymap[sum];
                }
            } else
                mymap[sum] = i;
        }
        return longestsubArray;
    }
};

