#include<iostream>
using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        // 1. 先找到最后?个数
    int cur = 0, dest = -1, n = arr.size();
        while(cur < n)
    {
        if(arr[cur]) dest++;
        else dest += 2;
        if(dest >= n - 1) break;
    cur++;
    }
 // 2. 处理?下边界情况
    if(dest == n)
 {
    arr[n - 1] = 0;
    cur--; dest -=2;
 }
 // 3. 从后向前完成复写操作
    while(cur >= 0)
 {
    if(arr[cur])  arr[dest--] = arr[cur--];
    else
    {
        arr[dest--] = 0;
        arr[dest--] = 0;
        cur--;
    }
 }
    }
}; 
