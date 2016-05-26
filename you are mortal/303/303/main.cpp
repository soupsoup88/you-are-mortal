//
//  main.cpp
//  303
//
//  Created by 蒲素 on 5/20/16.
//  Copyright © 2016 蒲素. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class NumArray {
public:
    vector<int> vec;
    NumArray(vector<int> &nums) {
        vec = vector<int>(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++){
            if(i == 0)
                vec[i] = nums[i];
            else
                vec[i] = vec[i-1] + nums[i];
        }
    }
    
    int sumRange(int i, int j) {
        if(i == 0) return vec[j];
        else return vec[j]-vec[i-1];
    }
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);


int main(int argc, const char * argv[]) {
    
    Numarray numarray({-2,0,3,-5,-2,-1})
    
    
    
}
