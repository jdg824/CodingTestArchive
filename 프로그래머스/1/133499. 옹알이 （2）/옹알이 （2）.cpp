#include <string>
#include <vector>
#include <iostream>

using namespace std;

string cmp[4] = {"aya", "ye", "woo", "ma"};

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(int i=0; i<babbling.size(); i++){
        string tmp = "";
        string compare = "";
        int temp = -1;
        int chk = 0;
        
        for(int j=0; j<babbling[i].size(); j++){
            tmp += babbling[i][j];
            
            for(int k=0; k<4; k++){
                if(tmp.find(cmp[k]) != string::npos && temp != k){
                    compare += cmp[k];
                    temp = k;
                    tmp = "";
                }
            }
            
            if(compare == babbling[i]){
                cout << compare <<" ";
                chk++;
                compare = "";
            }
        }
        
        if(chk!=0)
            answer++;
    }
    
    return answer;
}