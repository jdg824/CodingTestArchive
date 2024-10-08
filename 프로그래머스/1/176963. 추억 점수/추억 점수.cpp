#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(int i=0; i<photo.size(); i++){
        int ans = 0;
        for(int j=0; j<photo[i].size(); j++){
            string n = photo[i][j];
            for(int k=0; k<name.size(); k++){
                if(n == name[k]){
                    ans+=yearning[k];
                    break;
                }
            }
        }
        answer.push_back(ans);
    }
    return answer;
}