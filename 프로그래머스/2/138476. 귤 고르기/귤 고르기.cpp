#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> m;    //type, cnt;
    
    for(int i=0; i<tangerine.size(); i++){
        m[tangerine[i]]++;
    }
    
    vector<pair<int, int>> v(m.begin(), m.end());
    
    sort(v.begin(), v.end(), cmp);
    
    int idx = 0;
    while(k > 0){
        k-=v[idx].second;
        idx++;
        answer++;
    }
    
    return answer;
}