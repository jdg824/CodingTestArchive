#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

vector<int> solution(string s) {
    map<int, int> m;    //type, cnt;
    vector<int> answer;
    
    string str = "";
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i]))
            str+=s[i];
        else if(s[i] == ',' || s[i] == '}'){
            if(!str.empty()){
                m[stoi(str)]++;
                str = "";
            }
        }
    }
    
    vector<pair<int, int>> tmp(m.begin(), m.end());
    
    sort(tmp.begin(), tmp.end(), cmp);
    
    for(int i=0; i<tmp.size(); i++)
        answer.push_back(tmp[i].first);
    
    return answer;
}