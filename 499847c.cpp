#include<bits/stdc++.h>
using namespace std;
long dist(pair<long,long> a, pair<long,long> b){
    return ((b.first-a.first)*(b.first-a.first))+((b.second-a.second)*(b.second-a.second));
}


pair<long,long> midp(pair<long,long> a, pair<long,long> b){
    return make_pair((b.first + a.first) , (b.second + a.second));
}

int main(){
    int n;
    cin>>n;
    vector<pair<long,long>> v;
    for(int i=0;i<n;i++){
        long a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;(j<n && j!=i);j++){
            for(int k=j+1;(k<n && k!=i);k++){
                if(midp(v[j],v[k]).first==2*v[i].first and midp(v[j],v[k]).second==2*v[i].second){       // if i is midpoint of j and k 
                    count++;
                }  
            }
        }
    }
    cout<<count<<endl;
}