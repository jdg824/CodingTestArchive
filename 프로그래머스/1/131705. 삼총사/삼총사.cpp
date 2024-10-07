#include <string>
#include <vector>
#include <iostream>

using namespace std;

int answer = 0;
int arr[3] = {0,};

void dfs(vector<int> number, int cnt, int start){
    if(cnt == 3){
        int sum = 0;
        
        for(int i=0; i<3; i++){
            sum += arr[i];
            cout << arr[i] <<" ";
        }
        cout<<"\n";
        
        if(sum ==0)
            answer++;
    }
    else{
        for(int i=start; i<number.size(); i++){
            arr[cnt] = number[i];
            dfs(number, cnt+1, i+1);
        }
    }
}

int solution(vector<int> number) {
    
    dfs(number, 0, 0);
    
    return answer;
}