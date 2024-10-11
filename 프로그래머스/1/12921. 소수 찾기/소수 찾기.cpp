#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    int v[1000001] = {0, };
    
    for(int i =2; i<=sqrt(n); i++){
        for(int j = i*i; j<=n; j+=i){
            v[j] = 1;
        }
    }
    
    for(int i=2; i<=n; i++){
        if(v[i] == 0)
            answer++;
    }
    
    return answer;
}