#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    string str = "";
    for(int i=0; i<my_string.size(); i++){
        if(isdigit(my_string[i]))
            str+=my_string[i];
        else{
            if(str!=""){
                answer += stoi(str);
                str ="";   
            }
        }
    }
    
    if(str != "")
        answer += stoi(str);
    
    return answer;
}