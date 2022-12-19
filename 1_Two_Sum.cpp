class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //////    Nested loop
        // vector<int> result = {};
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = i + 1; j < nums.size(); j++){
        //         if(nums[j] + nums[i] == target){
        //             result = {i, j};
        //         }
        //     }
        // }
        // return result;


        //////    Hash map (Dictionary)
        unordered_map<int,int> map;
        vector<int> result = {};
        for(int i = 0; i < nums.size(); i++){
            map.insert({nums[i],i});
        }
        for(int i = 0; i < nums.size(); i++){
            if(map.find(target - nums[i]) != map.end() && map.find(target - nums[i])->second != i){
                result = {i, map.find(target - nums[i])->second};
            }
        } 
        return result;
    }
};
