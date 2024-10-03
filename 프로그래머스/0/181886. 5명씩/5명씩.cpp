#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    
    int len = names.size();
    
    for(int i=0; i<len; i++){
        if(i%5==0)
            answer.push_back(names[i]);
    }
    
    return answer;
}