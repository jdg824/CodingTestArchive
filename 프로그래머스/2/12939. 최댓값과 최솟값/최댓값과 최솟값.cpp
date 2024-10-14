#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> v;
    
    string str = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            cout << str<<" ";
            v.push_back(stoi(str));
            str = "";
        }
        
        str += s[i];
    }
    v.push_back(stoi(str));
    
    string min = to_string(*min_element(v.begin(), v.end()));
    string max = to_string(*max_element(v.begin(), v.end()));
    
    answer += min;
    answer += " ";
    answer += max;
    
    return answer;
}