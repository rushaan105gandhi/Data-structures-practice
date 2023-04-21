#include <bits/stdc++.h>
using namespace std;


class Solution {
private:
    bool equal(int a[26], int b[26]){
        for(int i = 0; i<26;i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
public:

    bool checkInclusion(string s1, string s2) {

        if(s1.length() > s2.length()) {
            return false;
        }

        //Storing count in s1
        int count1[26] = {0};
        for(int i = 0; i<s1.length();i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        //traversing through window size (k) = s1.length()

        int count2[26] = {0};
        int k = s1.length(); //k = windowSize

        for(int i = 0; i < k; i++) {
            int index = s2[i] - 'a';
            count2[index]++;
        }
        if (equal(count1, count2)){
            return true;
        }

        for(int i = k; i<s2.length();i++){
            int newChIndex = s2[i] - 'a';
            count2[newChIndex]++;
            int oldChIndex = s2[i-k] - 'a';
            count2[oldChIndex]--;
            if (equal(count1, count2)) {
                return true;
            }
        }
        return false;
    }    
};
