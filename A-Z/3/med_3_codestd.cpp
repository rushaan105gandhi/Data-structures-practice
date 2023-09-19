#include <bits/stdc++.h>
using namespace std;

/*

    Problem Link:
    https://www.codingninjas.com/studio/problems/majority-element_6783241?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse

    Brute Force using Searching

    Complexity Analysis:
        Time Complexity = O(N^2) Since Nested loops are used
        Space Complexity = O(1) No extra space used to return the answer

    Code:
        
    int majorityElement(vector<int> v) {
        for(int i = 0; i<v.size(); i++){
            int cnt = 0;
            for(int j = 0; j<v.size(); j++){
                if(v[j] == v[i]){
                    cnt++;
                }
            }
            if(cnt > (v.size()/2)){
                return v[i];
            }
        }
        return -1;
    }

*/

/*
    Better Solution Using Hashing/HashMap

    Code:

    int majorityElement(vector<int> v) 
    {
        map<int,int> mpp;
        
        for(int i = 0; i<v.size(); i++){
            mpp[v[i]]++;
        }
        for(auto it: mpp){
            if(it.second > (v.size()/2)){
                return it.first;
            }
        }
        return -1;
    }

    Complexity Analysis:
    Time Complexity = O(N) + O(N log N) iterating through map + filling elements in the map
    Space Complexity = O(N) extra space used

*/

/*
    Optimal Solution - Moor's Voting Algorithm
    Complexity Analysis:
    Time Complexity = O(N) + O(N) 
                              |
                              only if problem stays there might be/ might not be a majority element

    Space Complexity = O(N) extra space used
*/


int majorityElement(vector<int> v) {
	int cnt = 0;
	int el;

	for(int i = 0; i<v.size(); i++){
		//starting a check for a new section
		if(cnt == 0){
			cnt = 1;
			el = v[i]; //coming element is the new el
		}
		
		//if the coming element is equal to el, increase the count
		else if(v[i] == el){
			cnt++;
		}
		
		//decrease the count in case of anyother element
		else{
			cnt--;
		}
	}

	//Now we have found the element that doesnot cancels out that is el

	//if there exists a majority element it is el
	//check if el occurs more than N/2 times
    //Not to be done if problem states there always exists a majority element
	int counter = 0;
	for(int i = 0; i<v.size(); i++){
		if(v[i] == el){
			counter++;
		}
	}
	if (counter > (v.size()/2)){
		return el;
	}
	return -1;
}