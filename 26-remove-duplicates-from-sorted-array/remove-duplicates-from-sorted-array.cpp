#include<limits>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0; i < size; i++){
            for (int j = i + 1; j < size; j++){
                if(nums[i] == nums[j]){
                    nums[j] = INT_MAX;
                }
            }
        }
        for(int i = 0; i < size; i++){
            for (int j = i + 1; j < size; j++){
                if(nums[i] >= nums[j]){
                    swap(nums[i], nums[j]);
                }
            }
        }
        int k = 0;
        for(int i = 0; i < size; i++){
            if(nums[i] == INT_MAX)
            {
                break;
            }
            k++;
        }
        return k;
    }
};