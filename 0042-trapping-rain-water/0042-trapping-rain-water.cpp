class Solution {
public:
    int trap(vector<int>& height) {
        int lengthOfBars = height.size();
        if (lengthOfBars == 0) {
            return 0;
        }

        vector<int> maxToLeft(lengthOfBars);
        vector<int> maxToRight(lengthOfBars);

        maxToLeft[0] = height[0];
        for (int forwardIndex = 1; forwardIndex < lengthOfBars; forwardIndex++) {
            maxToLeft[forwardIndex] = max(maxToLeft[forwardIndex - 1], height[forwardIndex]);
        }

        maxToRight[lengthOfBars - 1] = height[lengthOfBars - 1];
        for (int backwardIndex = lengthOfBars - 2; backwardIndex >= 0; backwardIndex--) {
            maxToRight[backwardIndex] = max(maxToRight[backwardIndex + 1], height[backwardIndex]);
        }

        int totalTrappedWater = 0;
        for (int currentBar = 0; currentBar < lengthOfBars; currentBar++) {
            totalTrappedWater += min(maxToLeft[currentBar], maxToRight[currentBar]) - height[currentBar];
        }
        return totalTrappedWater;
    }
};