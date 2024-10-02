#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> num_list, int n) {
    sort(num_list.begin(), num_list.end());
    
    if(binary_search(num_list.begin(), num_list.end(), n) == 0)
        return 0;
    else
        return 1;
}