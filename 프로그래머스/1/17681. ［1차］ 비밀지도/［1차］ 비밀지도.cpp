#include <string>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

vector<string> toBinary(int n, vector<int> arr){
    vector<string> v;
    
    for(int i = 0; i<arr.size(); i++){
        string str = "";
        int num = arr[i];
        for(int j = n-1; j>=0; j--){
            if(pow(2, j) <= num){
                num -= pow(2,j);
                str+='1';
            }
            else
                str+='0';
        }
        v.push_back(str);
    }
    
    return v;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> cmp1, cmp2;
    
    cmp1 = toBinary(n, arr1);
    cmp2 = toBinary(n, arr2);
    
    for(int i=0; i<n; i++){
        string str = "";
        for(int j =0; j<n; j++){
            if(cmp1[i][j] == '0' && cmp2[i][j] == '0')
                str += ' ';
            else
                str += '#';
        }
        answer.push_back(str);
    }
    
    return answer;
}