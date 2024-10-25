#include <string>
#include <vector>
#include <iostream>

using namespace std;

int zero = 0;
int one = 0;
vector<vector<int>> a;

void sol(int x, int y, int size){
    int tmp = a[x][y];
    int chk = 0;
    
    for(int i=x; i<x+size; i++){
        for(int j=y; j<y+size; j++){
            if(tmp == a[i][j])
                chk++;
        }
    }
    
    if(chk == size*size){
        if(tmp == 0)
            zero++;
        else
            one++;
        
        return;
    }
    else{
        sol(x, y, size/2);
        sol(x+size/2, y, size/2);
        sol(x,y+size/2, size/2);
        sol(x+size/2, y+size/2, size/2);
    }
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer;
    
    for(int i=0; i <arr.size(); i++){
        vector<int> tmp;
        for(int j=0; j<arr[i].size(); j++)
            tmp.push_back(arr[i][j]);
        a.push_back(tmp);
    }
    
    sol(0, 0, arr.size());
    
    answer.push_back(zero);
    answer.push_back(one);
    
    return answer;
}