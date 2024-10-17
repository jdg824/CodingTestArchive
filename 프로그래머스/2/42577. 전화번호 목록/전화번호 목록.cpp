#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    sort(phone_book.begin(), phone_book.end());
    
    for(int i=0; i<phone_book.size() - 1; i++){
        string comp = phone_book[i];
        
        if(phone_book[i+1].find(comp)==0)
            return 0;
    }
    
    return 1;
}