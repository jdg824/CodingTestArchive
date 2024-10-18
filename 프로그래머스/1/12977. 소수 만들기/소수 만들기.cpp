#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

bool prime[3001] = {0,};
bool chk[52] = {0,};
vector<int> arr;

int answer = 0;

void dfs(int start, int cnt, vector<int> nums){
    if(cnt == 3){
        int sum = 0;
        for(int i=0; i<3; i++){
            sum+=arr[i];    
        }
        
        if(prime[sum] == 0){
            answer++;    
        }
        
        return;
    }
    else{
        for(int i=start; i<nums.size(); i++){
            if(chk[i] == 0){
                chk[i] = 1;
                arr.push_back(nums[i]);
                dfs(i, cnt+1, nums);
                chk[i] = 0;
                arr.pop_back();
            }
        }
    }
}

int solution(vector<int> nums) {
    
    for(int i=2; i<sqrt(3001); i++){
        for(int j = i*i; j<3001; j+=i)
            prime[j] = 1;   //not prime number;
    }
    
    dfs(0,0, nums);
    
    return answer;
}