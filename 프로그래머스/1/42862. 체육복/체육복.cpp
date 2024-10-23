#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    map<int, int> m;    //id, cnt
    
    for(int i=1; i<=n; i++)
        m[i] = 1;
    
    for(int i=0; i<lost.size(); i++)
        m[lost[i]]--;
    
    for(int i =0; i<reserve.size(); i++)
        m[reserve[i]]++;
    
    for(int i=1; i<=n; i++){
        if(m[i] == 0){
            if(m[i-1] == 2){
                m[i-1]--;
                m[i]++;
            }
            else if(m[i+1] == 2){
                m[i+1]--;
                m[i]++;
            }
        }
    }
    
    for(auto a:m){
        //cout << a.first<<" "<<a.second<<"\n";
        if(a.second >= 1)
            answer++;
    }
    
    return answer;
}