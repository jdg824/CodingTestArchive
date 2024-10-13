#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int findWorst(vector<int> lottos, vector<int> win_nums){
    int cnt = 0;
    
    for(int i=0; i<6; i++){
        if(lottos[i] != 0){
            if(binary_search(win_nums.begin(), win_nums.end(), lottos[i]))
                cnt++;
        }
    }
    
    return cnt;
}

int chk_grade(int num){
    if(num == 6)
        return 1;
    else if(num == 5)
        return 2;
    else if(num==4)
        return 3;
    else if(num==3)
        return 4;
    else if(num==2)
        return 5;
    else
        return 6;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int best;
    int worst = 0;
    
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    
    worst = findWorst(lottos, win_nums);
    
    int z_num = 0;
    
    for(int i=0; i<6; i++){
        if(lottos[i] == 0)
            z_num++;
    }
    
    best = worst+z_num;
    
    int bg = chk_grade(best);
    int wg = chk_grade(worst);
    
    answer.push_back(bg);
    answer.push_back(wg);
    
    return answer;
}