#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int idx;
    
    if(k == 0)
        idx = 1;
    else if(k ==1)
        idx = 3;
    else
        idx = 1 + (k-1) * 2;   
    
    if(idx % numbers.size() == 0)
        answer = numbers.size();
    else
        answer = idx % numbers.size();
    
    return answer;
}