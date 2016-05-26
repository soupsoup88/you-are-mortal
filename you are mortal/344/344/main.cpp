//
//  main.cpp
//  344
//
//  Created by 蒲素 on 5/20/16.
//  Copyright © 2016 蒲素. All rights reserved.
//

#include <iostream>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        int i;
        int j;
        j = (int)s.length()-1;
        while(i<=j)
        {swap(s[i],s[j]);}
        return s;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
