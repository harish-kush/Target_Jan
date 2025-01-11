class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return 0;
        int start = 0;
        int sabse_door = 0;
        int jump = 0;

        for(int i=0;i<n;i++){
            sabse_door = max(sabse_door,nums[i]+i);

            if(i==start) {
                jump++;
                start = sabse_door;
            }

            if(start >= nums.size() - 1) break;
        }
        return jump;
    }
};