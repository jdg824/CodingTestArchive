#include <string>
#include <vector>
#include <math.h>

using namespace std;

double fact(int num){
    if(num<=1)
        return 1;
    else
        return num * fact(num-1);
}

int solution(int balls, int share) {
    double ans = fact(balls) / (fact(balls-share) * fact(share));
        
    return round(ans);
    
}