#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int chk = arr[0];
    
    answer.push_back(chk);
    for(int i=1; i<arr.size(); i++){
        if(chk!=arr[i]){
            answer.push_back(arr[i]);
            chk = arr[i];
        }
    }
    
    return answer;
}