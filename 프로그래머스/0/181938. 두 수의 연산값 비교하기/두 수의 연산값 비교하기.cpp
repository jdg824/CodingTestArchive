#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    int multi = 2*a*b;
    string str = to_string(a) + to_string(b);
    
    if(multi > stoi(str))
        return multi;
    else
        return stoi(str);
    
}