class Solution
{
    public:
        vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes)
        {
            vector<int> A=aliceSizes;
            vector<int> B=bobSizes;
            int a = 0, b = 0;
            for (int i = 0; i < A.size(); i++)
                a += A[i];
            for (int i = 0; i < B.size(); i++)
                b += B[i];
            a = (b - a) / 2;
            set<int> s;
            for (auto x: A)
                s.insert(x + a);
            for (auto x: B)
            {
                if (s.find(x) != s.end())
                    return {
                        x - a,
                        x
                    };
            }
            return {};
        }
};