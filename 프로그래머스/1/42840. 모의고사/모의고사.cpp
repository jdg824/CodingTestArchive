#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    int a[5] = {1,2,3,4,5};
    int b[8] = {2,1,2,3,2,4,2,5};
    int c[10] = {3,3,1,1,2,2,4,4,5,5};
    
    int ans[3] = {0,0,0};
    
    for(int i=0; i<answers.size(); i++){
        if(a[i%5] == answers[i])
            ans[0]++;
    }
    
    for(int i=0; i<answers.size(); i++){
        if(b[i%8] == answers[i])
            ans[1]++;
    }

    for(int i=0; i<answers.size(); i++){
        if(c[i%10] == answers[i])
            ans[2]++;
    }
    
    int max = *max_element(ans, ans+3);
    
    for(int i=0; i<3; i++){
        if(ans[i] == max)
            answer.push_back(i+1);
    }
    
    
    return answer;
}