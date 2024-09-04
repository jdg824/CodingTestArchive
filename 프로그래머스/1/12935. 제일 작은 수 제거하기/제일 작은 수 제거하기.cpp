#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int min = *min_element(arr.begin(), arr.end());
    int idx;
    
    for(int i=0; i<arr.size(); i++){
        if(min == answer[i]){
            idx = i;
            break;
        }
    }
    
    if(arr.size() == 1)
        answer[0] = -1;
    else
        answer.erase(answer.begin() + idx);
    
    return answer;
}