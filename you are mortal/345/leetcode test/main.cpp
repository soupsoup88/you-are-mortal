//
//  main.cpp
//  leetcode test
//
//  Created by 蒲素 on 5/19/16.
//  Copyright © 2016 蒲素. All rights reserved.
//
#include <iostream>
#include <algorithm>

using namespace std;
class Solution{
public:
    string reverseVowels(string s){
        int i = 0;
        int j = 0;
        char *p1;
        char *p2;
        char base[10]={'a','e','i','o','u','A','E','I','O','U'};
        unsigned long n;
        n = s.length();
        j = (int)n;
        while(i<=j){
            p1 = find(base,base+10,s[i]);
            while(p1== base+10){
                i++;
                p1 = find(base,base+10,s[i]);
            }
            p2 =find(base,base+10,s[j]);
    
            while((p2== base+10)&&(i<=j)){
                j--;
                p2 =find(base,base+10,s[j]);
                }
         
            if(i<j)
            {
                swap(s[i],s[j]);}
            i++;
            j--;
           }
        return s;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution test;
    cout<<"please input word\n";
    string s;
    cin>>s;
    s = test.reverseVowels(s);
    cout<<"the output string is\n"<<s<<'\n';
    return 0;
}


