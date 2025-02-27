#include<limits>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0){
            return 0;
        }
        bool flag = false;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                nums[i] = INT_MAX;
                flag = true;
            }
        }

        for(int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++){
                if(nums[i] >= nums[j]){
                    swap(nums[i], nums[j]);
                }
            }
        }

        if(!flag){
            return nums.size();
        }
        int k = 0;
        while(nums[k] != INT_MAX){
            k++;
        }
        return k;
    }
};