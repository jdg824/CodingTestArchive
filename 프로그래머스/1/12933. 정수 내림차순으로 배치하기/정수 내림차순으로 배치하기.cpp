#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(char a, char b){
    return a > b;
}

long long solution(long long n) {
    long long answer = 0;
    string str;
    
    str = to_string(n);
    
    sort(str.begin(), str.end(), compare);
    
    answer = stol(str);
    
    return answer;
}