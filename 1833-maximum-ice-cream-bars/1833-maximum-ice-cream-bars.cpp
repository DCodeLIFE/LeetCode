class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());

        int i;
        int co = 0;

        for (i = 0; i <= costs.size() - 1; i++) {
            if (costs[i] <= coins) {
                co++;
                coins -= costs[i];
            } else
                break;
        }
        return co;
    }
};