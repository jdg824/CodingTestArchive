#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

bool isPrime(long long n){
    if(n<2)
        return 0;
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0)
                return 0;
        }
    }
    
    return 1;
}

int solution(int n, int k) {
    int answer = 0;
    
    string str = "";
    while(n>0){
        str+=to_string(n%k);
        n/=k;
    }
    reverse(str.begin(), str.end());
    
    string tmp = "";
    for(int i=0; i<str.size(); i++){
        if(str[i] == '0'){
            if(!tmp.empty() && isPrime(stoll(tmp)))
                answer++;
            tmp="";
        }
        tmp+=str[i];
    }
    
    if(isPrime(stoll(tmp)))
        answer++;
    
    return answer;
}