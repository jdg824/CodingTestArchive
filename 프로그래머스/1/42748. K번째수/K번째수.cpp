#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i =0; i<commands.size(); i++){
        vector<int> test;
        int f_idx = commands[i][0] -1;
        int e_idx = commands[i][1] -1;
        int find = commands[i][2]-1;
        
        for(int j = f_idx; j<=e_idx; j++)
            test.push_back(array[j]);
        
        sort(test.begin(), test.end());
        
        answer.push_back(test[find]);
    }
    
    return answer;
}