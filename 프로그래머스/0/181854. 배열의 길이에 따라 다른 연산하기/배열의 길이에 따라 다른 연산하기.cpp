#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    int len = arr.size();
    
    if(len %2!=0){
        for(int i=0; i<len; i++){
            if((i+1)%2!=0)
                answer.push_back(arr[i] + n);
            else
                answer.push_back(arr[i]);
        }
    }
    else{
        for(int i=0; i<len; i++){
            if((i+1)%2!=0)
                answer.push_back(arr[i]);
            else
                answer.push_back(arr[i] + n);
        }
    }
    return answer;
}