class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0)
            return true;
        cout<<num%10;
        if(num%10==0)
            {
            return false;}
        else return true;
    }
};