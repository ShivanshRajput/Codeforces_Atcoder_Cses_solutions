#include<iostream>
#include<queue>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<queue<char>> freq(n+1);
        for(char i='a' ;i<='z' ;i++){
            freq[0].push(i);
        }
        for(int i=0;i<n;i++){
            int x=arr[i];
            cout<<freq[x].front();
            freq[x+1].push(freq[x].front());
            freq[x].pop();
        }
        cout<<endl;
        
    }
}