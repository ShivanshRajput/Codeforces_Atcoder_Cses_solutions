#include<iostream>
using namespace std;
void LPSarray(string pat, int M, int lps[]){
    lps[0] = 0;
    int i = 1 , len =0;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len+=1;
            lps[i] = len;
            i+=1;
        }
        else{
            if (len != 0) {
                len = lps[len - 1];
            }
            else{
                lps[i] = len;
                i+=1;
            }
        }
    }
}
 
int countFreq(string pat, string txt)
{
    int M = pat.size() , N = txt.size() , j=0;
    int lps[M];
    LPSarray(pat, M, lps);
    int i = 0 , res=0 , next_i=0;
    while (i < N) {
        if (pat[j] == txt[i]) {
            j+=1;
            i+=1;
        }
        if (j == M) {
            j = lps[j - 1];
            res+=1;
        }
        else if (i < N && pat[j] != txt[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        int _map=countFreq("map",s);
        int _pie=countFreq("pie",s);
        int _mapie=countFreq("mapie",s);
        cout<< _map + _pie - _mapie <<endl;
    }
}