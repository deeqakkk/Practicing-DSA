// Brute Force
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int tempPro=0, maxPro=0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size() && prices[i]<prices[j];j++)
            {
                tempPro=prices[j]-prices[i];
                if(maxPro<tempPro)
                    maxPro=tempPro;
            }
        }     
        
        return maxPro;
            
    }
};

// optimized solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxPro=0;
        int minPrice=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minPrice=min(minPrice,prices[i]);
            maxPro=max(maxPro,prices[i]-minPrice);
        }
            
        return maxPro;
    }
};