#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int multi = 1;
    int sum =0;
    
    for(int i=0; i<num_list.size(); i++){
        sum += num_list[i];  
        multi *= num_list[i];
    }
    
    if(pow(sum, 2) > multi)
        answer =1;
    
    return answer;
}