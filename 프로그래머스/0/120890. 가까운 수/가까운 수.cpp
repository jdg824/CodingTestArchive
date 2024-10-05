#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    sort(array.begin(), array.end());
    
    int dis = abs(array[0] - n);
    int idx = 0;
    
    for(int i=1; i<array.size(); i++){
        if(dis > abs(array[i] - n)){
            dis = abs(array[i] - n);
            idx = i;
        }
    }
    
    return array[idx];
}