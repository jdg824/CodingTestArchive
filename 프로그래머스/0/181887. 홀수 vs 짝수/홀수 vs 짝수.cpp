#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int num_e = 0;
    int num_o = 0;
    
    for(int i=0; i<num_list.size(); i++){
        if((i+1)%2==0)
            num_e += num_list[i];
        else
            num_o += num_list[i];
    }
    
    answer = max(num_e, num_o);
    
    return answer;
}