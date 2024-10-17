#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    map<string, int> m;  //type, cnt
    
    int cnt = 1;
    m[words[0]]++;
    char prev = words[0][words[0].size()-1];
    
    for(int i=1; i<words.size(); i++){
        char now = words[i][0];

        if(i%n==0)
            cnt++;
        
        if(prev == now){
            if(m[words[i]] == 0){
                m[words[i]]++;
                prev = words[i][words[i].size()-1];
            }
            else{
                answer.push_back(i%n+1);
                answer.push_back(cnt);
                return answer;
            } 
        }
        else{
            answer.push_back(i%n+1);
            answer.push_back(cnt);
            return answer;
        }
    }

    answer.push_back(0);
    answer.push_back(0);
    return answer;
}