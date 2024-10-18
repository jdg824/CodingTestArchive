#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    
    int answer = 0;
    
    for(int i=0; i<=9; i++){
        if(!binary_search(numbers.begin(), numbers.end(), i))
            answer+=i;
    }
    return answer;
}