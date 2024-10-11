#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int size = nums.size();
    map<int, int> m;    //type, cnt;
    
    for(int i=0; i<size; i++){
        m[nums[i]]++;
    }
    
    if(size/2 <= m.size())
        answer=size/2;
    else
        answer=m.size();
    
    return answer;
}