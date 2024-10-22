#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<>> pq;
    int answer = 0;
    
    for(int i=0; i<scoville.size(); i++)
        pq.push(scoville[i]);
    
    while(pq.size() >= 2){
        if(pq.top() >= K)
            break;
        
        if(pq.size() >= 2){
            answer++;
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            
            pq.push(a+b*2);
        }
    }
    
    if(pq.top()<K)
        answer = -1;
    
    return answer;
}