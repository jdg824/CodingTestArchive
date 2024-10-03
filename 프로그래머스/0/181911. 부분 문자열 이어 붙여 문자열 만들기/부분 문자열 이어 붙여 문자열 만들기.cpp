#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    
    for(int i=0; i<my_strings.size(); i++){
        int a = parts[i][0];
        int b = parts[i][1];
        
        for(int j=a; j<=b; j++)
            answer += my_strings[i][j];
    }
    
    return answer;
}