#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int p1 = 0, p2 = 0;
    int sum = 0;
    
    int start, end;
    int m_len = sequence.size()+1;
    
    for(int i = 0; i < sequence.size(); i++)
    {
        sum += sequence[p1++];
        
        if(sum > k)
            while(sum - sequence[p2] >= k)
                sum -= sequence[p2++];
        if(sum == k)
            if(m_len > p1 - 1 - p2){
                start = p2;
                end = p1-1;
                m_len = p1-1-p2;   
            }
    }
    
    answer.push_back(start);
    answer.push_back(end);
    
    return answer;
}