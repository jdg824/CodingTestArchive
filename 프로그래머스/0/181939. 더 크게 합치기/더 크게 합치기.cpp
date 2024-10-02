#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string str1 = to_string(a) + to_string(b);
    string str2 = to_string(b) + to_string(a);
    
    if(stoi(str1) >= stoi(str2))
        return stoi(str1);
    else
        return stoi(str2);
}