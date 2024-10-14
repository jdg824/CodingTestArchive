#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int area = brown + yellow;
    
    for(int i = area; i>=1; i--){
        int j = area / i;
        if(i*j == area){
            if((i-2) * (j-2) == yellow){
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
            }
        }
    }
}