#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int tmp = 0;
    
    while(n >= a){
        answer += (n/a)*b;
        tmp = n%a;
        n = (n/a)*b + tmp;
    }
    
    cout << answer;
    return answer;
}