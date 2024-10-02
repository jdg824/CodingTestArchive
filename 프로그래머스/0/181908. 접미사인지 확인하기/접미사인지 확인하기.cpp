#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    
    int cnt =0;
    for(int i=0; i<is_suffix.size(); i++){
        if(my_string[my_string.size()-1-i] == is_suffix[is_suffix.size()-1-i])
            cnt++;
    }
    
    if(cnt == is_suffix.size())
        answer=1;
    
    return answer;
}