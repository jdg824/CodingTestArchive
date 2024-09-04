#include <string>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long ans = sqrt(n);
    
    if(ans * ans == n)
        answer = pow(ans+1,2);
    else
        answer = -1;
    
    return answer;
}