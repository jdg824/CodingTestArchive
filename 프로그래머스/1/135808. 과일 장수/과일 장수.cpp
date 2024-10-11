#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <iostream>

using namespace std;

bool cmp(int a, int b){
    return a >b;
}

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end(), cmp);
    
    for(int i=0; i<score.size(); i++){
        vector<int> tmp;
        
        if(score.size() - i >= m){
            for(int j =0; j<m; j++){
                tmp.push_back(score[i+j]);
            }

            answer += tmp[tmp.size() -1 ] * m;
            i+=m-1;    
        }
    }
    
    return answer;
}