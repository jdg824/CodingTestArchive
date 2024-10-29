#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0;
    long sum1 = 0, sum2 = 0;
    queue<int> q1, q2;
    
    for(int i=0; i<queue1.size(); i++){
        sum1 += queue1[i];
        sum2 += queue2[i];
        
        q1.push(queue1[i]);
        q2.push(queue2[i]);
    }
    
    long long chk = (sum1 + sum2)/2;
    
    while(!q1.empty() && !q2.empty()){

        if(sum1 == chk){
            return answer;
        }
        
        if(answer > queue1.size()*2 +1){
            return -1;
        }
        
        if(sum1 > chk){ //빼야함
            int tmp = q1.front();
            q1.pop();
            q2.push(tmp);
            
            sum1-=tmp;
            sum2+=tmp;
        }
        else{
            int tmp = q2.front();
            q2.pop();
            q1.push(tmp);
            
            sum2-=tmp;
            sum1+=tmp;
        }
        
        answer++;
    }
    
    
    return -1;
}