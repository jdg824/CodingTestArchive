#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    string nstr1 = "";
    string nstr2 = "";
    
    for(int i=0; i<str1.size(); i++)
        nstr1+=tolower(str1[i]);
    for(int i=0; i<str2.size(); i++)
        nstr2+=tolower(str2[i]);
    
    vector<string> a1;
    vector<string> a2;
    
    for(int i=0; i<nstr1.size()-1; i++){
        string str = "";
        
        str = nstr1.substr(i, 2);
        int cnt = 0;
        
        for(int j=0; j<=1; j++){
            if(isalpha(str[j]))
                cnt++;
        }
        
        if(cnt == 2)
            a1.push_back(str);
    }
    
    for(int i=0; i<nstr2.size()-1; i++){
        string str = "";
        
        str = nstr2.substr(i, 2);
        int cnt = 0;
        
        for(int j=0; j<=1; j++){
            if(isalpha(str[j])){
                cnt++;
            }
        }
        
        if(cnt == 2)
            a2.push_back(str);
    }
    
    double ent = a1.size() + a2.size();
    double ccnt = 0;
    double per;
    
    for(int i =0; i<a1.size(); i++){
        auto a = find(a2.begin(), a2.end(), a1[i]);
        
        if(a!=a2.end()){
            ccnt++;
            a2.erase(a);
        }
    }
    
    if(ent-ccnt == 0)
        per = 1;
    else
        per = ccnt / (ent - ccnt);
    
    return 65536 * per;
}