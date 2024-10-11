#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int idx1 = 0;
    int idx2 = 0;
    
    for(int i=0; i<goal.size(); i++){
        string cmp = goal[i];
        
        if(cmp == cards1[idx1])
            idx1++;
        else if(cmp == cards2[idx2])
            idx2++;
        else{
            answer = "No";
            break;
        }
    }
    
    return answer;
}