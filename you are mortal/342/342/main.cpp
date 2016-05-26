//
//  main.cpp
//  342
//
//  Created by 蒲素 on 5/20/16.
//  Copyright © 2016 蒲素. All rights reserved.
//

#include <iostream>

class Solution {
public:
    bool isPowerOfFour(int num) {
        if (((num&num-1)==0)&&((num&0x55555555) != 0))
        {return 1;}
        else
        {return 0;}
        }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
