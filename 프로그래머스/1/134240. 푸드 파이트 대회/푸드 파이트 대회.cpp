#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for(int i=1; i<food.size(); i++){
        if(food[i] %2 != 0)
            food[i]--;
    }
    
    string tmp = "";
    
    for(int i=1; i<food.size(); i++){
        for(int j= 0; j<food[i]/2; j++)
            tmp += to_string(i);
    }
    answer += tmp + "0";
    
    reverse(tmp.begin(), tmp.end());
    answer += tmp;

    return answer;
}