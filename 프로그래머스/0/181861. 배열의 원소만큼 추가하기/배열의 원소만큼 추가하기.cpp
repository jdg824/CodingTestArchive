#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for(int i=0; i<arr.size(); i++){
        int num = arr[i];
        for(int i=0; i<num; i++)
            answer.push_back(num);
    }
    return answer;
}