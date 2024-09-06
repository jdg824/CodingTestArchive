#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> time;
    
    for(int i=0; i<progresses.size(); i++){
        if((100 - progresses[i])%speeds[i] !=0)
            time.push_back((100-progresses[i])/speeds[i] + 1);
        else
            time.push_back((100-progresses[i])/speeds[i]);
    }
    
    int count = 1;
    int max = time[0];
    
    for(int i=1; i<time.size(); i++){
        if(max >= time[i])
            count++;
        else{
            answer.push_back(count);
            count = 1;
            max = time[i];
        }
    }
    
    answer.push_back(count);
    
    return answer;
}