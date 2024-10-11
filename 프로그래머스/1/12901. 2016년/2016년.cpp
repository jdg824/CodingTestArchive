#include <string>
#include <vector>

using namespace std;

int month[13] = {0,31,29,31,30,31,30, 31, 31, 30,31,30,31};
string day[7] = {"THU","FRI","SAT","SUN","MON","TUE","WED"};

string solution(int a, int b) {
    int allday = 0;
    string answer = "";
    
    for(int i=1; i<=a-1; i++)
        allday += month[i];
    allday += b;
    
    answer = day[allday%7];
    
    return answer;
}