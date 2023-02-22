#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int peak = nums[0];
        int min = nums[0];
        for (int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]>=nums[i])
            {
                peak = nums[i+1];
            }
            else if(nums[i+1] < nums[i])
            {
                //peak = nums[i]; //already saved
                for(int j = i+1;j<nums.size()-1;j++)
                {
                    if(nums[j+1]>=nums[j])
                    {
                        min = nums[j];
                    }
                    else
                        break;
                }
            }
        }
        if(peak >= nums[0])
            {
                if(min<=nums[0])
                    return true;
            }
        return false;
    }
};

int main()
{
    
    return 0;
}