#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int suml[n]={0};
        suml[0]=arr[0];
        int sumr[n]={0};
        sumr[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            suml[i]=suml[i-1]+arr[i];
        }
        for(int i=n-2;i>=0;i--){
            sumr[i]=sumr[i+1]+arr[i];
        }
        int a=0 ,b=n;
        int count=0;
        int mcnt=0;
        while(a<b){
            if(suml[a]<sumr[b]){
                a++;
                count++;
            }
            else if(suml[a]>sumr[b]){
                b--;
                count++;
            }
            else{
                mcnt=count;
            }
        }
        cout<<mcnt<<endl;
    }
}