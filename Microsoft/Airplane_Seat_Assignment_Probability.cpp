#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double nthPersonGetsNthSeat(int n) 
    {
        if(n==1)
            return double(1);
        else
            return double(0.5);
    }
};