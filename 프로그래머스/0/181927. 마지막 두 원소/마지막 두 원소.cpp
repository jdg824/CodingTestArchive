#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    for(int i=0; i<num_list.size(); i++)
        answer.push_back(num_list[i]);
    
    int len =num_list.size();
    if(num_list[len -1] > num_list[len -2])
        answer.push_back(num_list[len-1] - num_list[len-2]);
    else
        answer.push_back(2*num_list[len-1]);
    
    return answer;
}