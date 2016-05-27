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
    int i;
    NumArray(vector<int> &nums) {
        vec = vector<int>(nums.size(), 0);
        for (i = 0; i<(int)nums.size();i++){
            if (i==0){
                vec[i] = nums[i];
            }
            else{
                vec[i] = vec[i-1]+ nums[i];
            }
        }
    } 
    
    int sumRange(int i, int j) {
        int a;
        if (i==0)
            a = vec[i];
        else
            a = vec[j]-vec[i-1];
        return a;}
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);


int main(int argc, const char * argv[]) {
    

    int a;
    vector<int> re;
    re = {1,2,3};
    NumArray haha(re);
    a= haha.sumRange(0, 1);
    cout << a ;
    return 0;
    
}
