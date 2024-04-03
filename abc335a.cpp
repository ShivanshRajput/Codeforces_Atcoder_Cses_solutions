#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    queue<pair<int,int>> g;
    for(int i=n;i>=1;i--){
        g.push({i,0});
    }
    
    while(q--){
        int p;
        cin>>p;
        if(p==1){
            char c;
            cin>>c;
            if(c=='U'){
                g.push({g.back().first , g.back().second +1});
                g.pop();
            }
            else if(c=='D'){
                g.push({g.back().first , g.back().second -1});
                g.pop();
            }
            else if(c=='L'){
                g.push({g.back().first -1 , g.back().second });
                g.pop();
            }
            else if(c=='R'){
                g.push({g.back().first +1 , g.back().second });
                g.pop();
            }
        }
        else{
            int v;
            cin>>v;
            v=n-v;
            queue<pair<int,int>> cg=g;
            while(v--){
                cg.pop();
            }
            cout<<cg.front().first<<" "<<cg.front().second<<endl;
        }
    }


    // while(!g.empty()){
    //     cout<<g.front().first<<" "<<g.front().second<<endl;
    //     g.pop();
    // }
    
}