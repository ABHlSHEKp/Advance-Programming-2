//Jump Game 
//CPP//

class Solution {
public:
    int jump(vector<int>& nums) {
        // Initialize variables to track the number of jumps,
        // the end of the current jump range, and the farthest reachable index
        int jumps = 0, curEnd = 0, curFarthest = 0;

        // Iterate through the array, stopping before the last element
        for (int i = 0; i < nums.size() - 1; i++) {
            // Update the farthest position we can reach from the current index
            curFarthest = max(curFarthest, i + nums[i]);

            // If we reach the end of the current jump range
            if (i == curEnd) {
                // Increment the jump counter
                jumps++;
                // Update the current jump range to the farthest reachable index
                curEnd = curFarthest;

                // Optional: Early exit if the current jump already covers the last index
                if (curEnd >= nums.size() - 1) {
                    break;
                }
            }
        }

        // Return the total number of jumps needed
        return jumps;
    }
};

