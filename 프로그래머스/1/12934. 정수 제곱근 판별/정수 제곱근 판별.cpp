#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    
    for(int i =1; i<=n; i++){
        if(pow(i,2) == n){
            return answer = pow(i+1,2);
        }
    }
    
    return answer;
}