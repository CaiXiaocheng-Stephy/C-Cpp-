//1、暴力解法，时间复杂度O(n2)，空间复杂度O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//获取数组nums长度。为循环定边界
        int n=nums.size();
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
//判断外层循环元素nums[i]和内层循环元素nums[j]的和是否等于目标值target
                if(nums[i]+nums[j]==target){
                    return{i,j};
                }
            }
        }
        return {};
    }
};
