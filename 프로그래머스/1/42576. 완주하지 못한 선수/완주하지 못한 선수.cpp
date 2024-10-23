#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> list;  //name, chk
    string answer = "";
    
    for(int i=0; i<participant.size(); i++){
        list[participant[i]]++;
    }
    
    for(int i=0; i<completion.size(); i++){
        list[completion[i]]--;
    }
    
    for(auto a: list){
        if(a.second == 1)
            answer = a.first;
    }
    
    return answer;
}