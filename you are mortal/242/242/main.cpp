//
//  main.cpp
//  242
//
//  Created by 蒲素 on 5/27/16.
//  Copyright © 2016 蒲素. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = (int)s.length();
        int n = (int)t.length();
        bool result;
        vector<int> vec1(26,0);
        vector<int> vec2(26,0);
        int i;
        if (m!=n){
            return 0;
        }
        for(i = 0;i<m;i++){
            vec1[s[i]-'a']++;
            vec2[t[i]-'a']++;
        }
        vec1==vec2?result = 1:result = 0;
        return result;
        
    }
};

int main(int argc, const char * argv[]) {
    Solution haha;
    cout<<haha.isAnagram("car","car")<<endl;
    cout<<haha.isAnagram("car", "cat")<<endl;
    return 0;
}
