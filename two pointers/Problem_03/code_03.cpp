#include<iostream>
using namespace std;
class Solution {
public:
    int f(int n)
    {
        int sum=0;
        while(n)
        {
            int t=n%10;
            sum+=t*t;
            n/=10;      
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n,fast=f(n);
        while(slow!=fast)
        {
            slow=f(slow);
            fast=f(f(fast));
        }
        return slow==1;
    }
};
