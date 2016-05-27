//
//  main.cpp
//  299
//
//  Created by 蒲素 on 5/27/16.
//  Copyright © 2016 蒲素. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        string result;
        int bull = 0;
        int cow = 0;
        int i,m,n,j;
        m = (int)secret.length();
        n = (int)guess.length();
        vector<int> a(n);
        vector<int> b(n);
        if (m!= n){
            cout<<"please run the code again and type the same digit number";
            string a = "system is error";
            return a;
         
        }
        for (i=0;i<m;i++){
            if (secret[i]==guess[i]){
                bull++;
                a[i]=b[i]=1;}
            }
        for (i = 0;i<m;i++){
            for(j = 0;j < m; j++){
                if((secret[i]==guess[j])&&(a[i]!=1)&&(b[j]!=1)){
                    cow++;
                    a[i]=b[j]=1;
                }
            }
        }
        return to_string(bull)+"A"+to_string(cow) + "B";
        
    }
};

int main(int argc, const char * argv[]) {
    Solution play;
    string answer = play.getHint("10","11");
    cout<< answer<<endl;
    return 0;
}
