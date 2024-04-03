#include<iostream>
#include<cmath>
#include<bit>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int level = log2(__bit_ceil(a))-1;
        //cout<<level<<endl;
        int last_level=(1<<level) ;
        //cout<<last_level<<endl;
        int count1 = ((1<<last_level)-1);
        //cout<<count1<<endl;
        int left=count1-a;
        //cout<<left<<endl;
        int last_level1=1<<(level+1);
        if(b>last_level1)
        cout<<-1<<endl; //continue;
        else{
            int leftb=last_level1-b;
            if(leftb)
            level++;

            if(c>leftb)
            cout<<-1<<endl;
            else{
                if(last_level1==c){
                    cout<<level+1<<endl;
                    
                }
                else
                cout<<-1<<endl;
            }
        }

    }
}
