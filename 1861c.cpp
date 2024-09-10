#include<iostream>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int sorted = 0 , unsorted = INT_MAX;
    int len = 0;
    bool possible = true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            len++;     // array ki length bdhi gyo
        }
        else if(s[i]=='-'){
            len--;     // array ki length kam ho giyo
        }
        else if(s[i]=='1'){
            sorted = len;    // yaha tak to sorted hai mamla pani re 
            if(unsorted <= len){   // isse pehle length pe unsored to nhi tha.. fir kuch nhi ho sakta re bhaii
                possible = false;
                break;
            }
        }
        else{  // s[i]=='0'
            if(unsorted == INT_MAX){     // pehli baar unsorted hai pata chala... yaad kar leta hun 
                unsorted = len;
            }
            if(len == sorted || len<2){   // lekin ye to bol rha ye len sorted hai.. ya len 2 se choti h to bhi sorted hai... galat baat dekh
                possible = false;
                break;
            }
        }
        if(sorted>len){       // len-- karte time... agar len sorted thi to len-1 bhi sorted hi hogi
            sorted = len;
        }
        if(len<unsorted){     // len-- karte time... agar len unsorted thi, to ab kuch nhi bol sakte ab sorted rahegi ki unsorted.. chalo unsored pointer ko default INT_MAX pe daal dete hain 
            unsorted = INT_MAX;
        }
    }
    if(possible){    // puri for loop ki journey me dikkat to nahi huii na... bhadia raha na sab
        cout<<"YES\n";
    }
    else{            // kyaa baat kar rahe koi pareshan kar dia bich me.. for loop se break hona pada.. OH MAA GOD.
        cout<<"NO\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}