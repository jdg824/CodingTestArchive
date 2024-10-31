#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <map>

using namespace std;

bool isPrime(int n){
    if(n == 0 || n==1)
        return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    
    return 1;
}

int solution(string numbers) {
    int answer = 0;
    map<int,int> m;
    
    sort(numbers.begin(), numbers.end());
    
    do{
        string tmp;
        for(int i=0; i<numbers.size(); i++){
            tmp+=numbers[i];
            
            if(isPrime(stoi(tmp))){
                if(m[stoi(tmp)]==0)
                    m[stoi(tmp)]++;
            }
        }
    }
    while(next_permutation(numbers.begin(), numbers.end()));
    
    answer = m.size();
    return answer;
}