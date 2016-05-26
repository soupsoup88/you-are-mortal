//
//  main.cpp
//  326
//
//  Created by 蒲素 on 5/20/16.
//  Copyright © 2016 蒲素. All rights reserved.
//

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        return n>0?!(1162261467 % n):0;
    }
};

int main(int argc, const char * argv[]) {
    Solution ok;
    bool i;
    i = ok.isPowerOfThree(27);
    if(i == 1)
        cout<<"True";
    else
        cout<<"False";
}
