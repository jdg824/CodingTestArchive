#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(char a, char b){
    return a >b;
}

long long solution(long long n) {
    long long answer = 0;
    string str;
    
    str = to_string(n);
    
    sort(str.begin(), str.end(), cmp);
    
    answer = stoll(str);
    
    return answer;
}