#include<bits/stdc++.h>
using namespace std;

string toStr(int num){
    if(num<10){
        return '0' + to_string(num);
    }
    return to_string(num);
}

int toMinute(string s){
    int hr = stoi(s.substr(0,2));
    int min = stoi(s.substr(3,2));
    min += hr*60;
    return min;
}

string toTime(int min){
    string ans = toStr(min/60);
    ans+=':';
    ans+=toStr(min%60);
    return ans;
}


int main(){
    string s1 ,s2;
    cin>>s1>>s2;
    int min1 = toMinute(s1);
    int min2 = toMinute(s2);
    int avg = (min1 + min2)/2;
    cout << toTime(avg);
}