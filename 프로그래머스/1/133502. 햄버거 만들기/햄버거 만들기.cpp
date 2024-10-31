#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int idx[1000001]= {0,};

int solution(vector<int> ingredient) {
    int answer = 0;
    
    int i = 0;
    for(auto a : ingredient){
        idx[i] = a;
        
        if(i >= 3){
            if(idx[i-3] == 1 && idx[i-2] == 2 && idx[i-1] == 3 && idx[i] == 1){
                answer++;
                i-=4;
            }
        }
        i++;
    }
    
    return answer;
}