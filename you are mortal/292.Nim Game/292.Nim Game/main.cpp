//
//  main.cpp
//  292.Nim Game
//
//  Created by 蒲素 on 5/31/16.
//  Copyright © 2016 蒲素. All rights reserved.
//

#include <iostream>
using namespace std;


class Solution {
public:
    bool canWinNim(int n) {
        int rem;
        rem = n%4;
        return (rem==0)?0:1;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution ok;
    cout<<ok.canWinNim(5)<<endl;
    return 0;
}
