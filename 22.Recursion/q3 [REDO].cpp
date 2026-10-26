#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //WRONG APPROACH OF TAKE AND DROP : This gives subsequence not substrings!
    int f(string s,int curr, string ans,char c){
        if(curr==s.size()){
            if(ans[0]==c && ans[ans.size()-1]==c) return 1;
            return 0;
        }
        int count=0;
        if(ans.size()!=0){
            if(ans[0]==c && ans[ans.size()-1]==c){
                count++;
            }
        }
        
        int take=f(s,curr+1,ans+s[curr],c);
       
        

        return count+take;
    }


    long long countSubstrings(string s, char c) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            sum+=f(s.substr(i),0,"",c);
        }
        return sum;
    }
};