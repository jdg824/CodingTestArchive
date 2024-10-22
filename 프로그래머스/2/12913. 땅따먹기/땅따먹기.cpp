#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int dp[100001][4] = {0,};

int solution(vector<vector<int> > land)
{
    dp[0][0] = land[0][0];
    dp[0][1] = land[0][1];
    dp[0][2] = land[0][2];
    dp[0][3] = land[0][3];
    
    int answer;
    
    for(int i=1; i<land.size(); i++){
        dp[i][0] = land[i][0] + max(dp[i-1][1], max(dp[i-1][2], dp[i-1][3]));
        dp[i][1] = land[i][1] + max(dp[i-1][0], max(dp[i-1][2], dp[i-1][3]));
        dp[i][2] = land[i][2] + max(dp[i-1][1], max(dp[i-1][0], dp[i-1][3]));
        dp[i][3] = land[i][3] + max(dp[i-1][1], max(dp[i-1][2], dp[i-1][0]));
    }
    
    answer = max(max(dp[land.size()-1][0],dp[land.size()-1][1]), max(dp[land.size()-1][2], dp[land.size()-1][3]));
    
    return answer;
}