//
//  main.cpp
//  290
//
//  Created by 蒲素 on 5/31/16.
//  Copyright © 2016 蒲素. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<int,string> firstmap;
        map<char,string> check;
        map<string,int> finalcheck;
        vector<int> position;
        int i,k = 0;

        
        for (i = 0; i<str.length(); i++){           //先计算空格位置，然后把分解开的字符串存储到firstmap中
            if (str[i] == ' '){
                position.push_back(i);
                k++;
            }
        }
        
        if(k == 0){
            if (pattern.length()==1)
                return 1;
            else
                return 0;}
        if(pattern.length()!= k+1)
            return 0;
        
        
        for (i=0;i<=k;i++){
            if (i==0){
                firstmap[i] = str.substr(0,position[i]);
            }
            else{
                firstmap[i] = str.substr(position[i-1]+1,(position[i]-position[i-1]-1));
            }
            
        }
        
        
        k = (int)pattern.length();                      //检查有没有一个pattern字母对应着两个firstmap单词，删选出错误的
        for(i=0;i<k;i++){
            if(check[pattern[i]]==""){
                check[pattern[i]]=firstmap[i];
            }
            else{
                if (check[pattern[i]]!=firstmap[i]){
                    return 0;
                }
            }
        }
        
        map<char,string> :: iterator start = check.begin();         //检查两个不同的pattern字母有没有对应着一个firstmap单词
       k = (int)check.size();
        for(start = check.begin();start!=check.end();start++){
            if(finalcheck[start->second]==0){
                finalcheck[start->second]= 1;
            }
            else{
                    return 0;
                }
            }
       
        return 1;
        
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution ok;
    cout<<"the result is"<<ok.wordPattern("ab","ab ab ab")<<endl;
    return 0;
}
