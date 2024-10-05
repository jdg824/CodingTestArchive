#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    for(int i=0; i<my_str.size(); i++){
        string str = "";
        
        for(int j =0; j<n; j++){
            if(i+j < my_str.size()){
                str+= my_str[i+j];
            }
        }
        i+=(n-1);
        answer.push_back(str);
        str = "";
    }
    return answer;
}