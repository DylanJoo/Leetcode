#include<vector>

Class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if( target-nums[i] == nums[j]) return vector<int> {i, j};
            };
        };
        return vector<int> {i, j};
    };
};


// Solution.1: Loop every element in vector, 
// and search the candidate results of (target-element) == (other element) 
// if equal then return these two elements.
