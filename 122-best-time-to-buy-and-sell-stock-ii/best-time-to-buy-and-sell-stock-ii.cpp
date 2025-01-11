class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;
        int maxProfit = 0;

        for(int i=1;i<n;i++){
           if((arr[i]-arr[i-1])>0) maxProfit += arr[i]-arr[i-1]; // arr[i]>arr[i-1] 
        }
        return maxProfit;
    }
};