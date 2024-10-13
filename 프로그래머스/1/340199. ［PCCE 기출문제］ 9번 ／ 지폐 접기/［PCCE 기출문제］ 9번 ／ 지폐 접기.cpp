#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
        
    int w_min = *min_element(wallet.begin(), wallet.end());
    int w_max = max(wallet[0], wallet[1]);
    
    while(1){
        int b_min = min(bill[0], bill[1]);
        int b_max = max(bill[0], bill[1]);
        
        if(b_min <= w_min && w_max >= b_max)
            break;
        
        if(bill[0] > bill[1])
            bill[0]/=2;
        else if(bill[0] <= bill[1])
            bill[1]/=2;
        
        answer++;
    }
    
    return answer;
}