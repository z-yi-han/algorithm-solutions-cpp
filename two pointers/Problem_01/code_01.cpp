#include<iostream>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int dest=-1,cur=0;cur<nums.size();cur++)
        {
            if(nums[cur])
            {
                swap(nums[++dest],nums[cur]);
            }
        }
    }
};
