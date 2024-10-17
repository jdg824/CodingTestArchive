#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <iostream>

using namespace std;

bool chkCorrect(deque<char> dq){
    stack<char> q;
    
    for(int i =0; i<dq.size(); i++){
        
        if(dq[i] == '(' || dq[i] == '{' || dq[i] == '[')
            q.push(dq[i]);
        else{
            if(q.size() == 0)
                return 0;
            else{
                if(dq[i] == ')' && q.top() == '(')
                    q.pop();
                else if(dq[i] == '}' && q.top() == '{')
                    q.pop();
                else if(dq[i] == ']' && q.top() == '[')
                    q.pop();  
            }
        }
    }
    
    if(q.size() == 0)
        return 1;
    else
        return 0;
}

int solution(string s) {
    int answer = 0;
    deque<char> dq;
    
    for(int i=0; i<s.size(); i++)
        dq.push_back(s[i]);
    
    for(int i=0; i<dq.size(); i++){
        //rotation
        char tmp = dq.front();
        dq.pop_front();
        dq.push_back(tmp);
        
        //chk correct
        bool chk = chkCorrect(dq);
        cout<<"\n";
        
        if(chk != 0)    //true
            answer++;
    }

    
    return answer;
}