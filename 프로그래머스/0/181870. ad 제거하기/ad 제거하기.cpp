#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for(int i=0; i<strArr.size(); i++){
        string str = strArr[i];
        
        if(str.find("ad") == string::npos)
            answer.push_back(str);
    }
    return answer;
}