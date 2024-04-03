#include<iostream>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long long a[n] , b[n] , c[n];
        long long q=-1,w=-1;
        long long max=0 , maxact=-1 , bindex=-1;
        for(long i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>max){
                max=a[i];
                maxact=1;
                bindex=i;
            }
        }
        for(long i=0;i<n;i++){
            cin>>b[i];
            if(b[i]>max){
                max=b[i];
                maxact=2;
                bindex=i;
            }
        }
        for(long i=0;i<n;i++){
            cin>>c[i];
            if(c[i]>max){
                max=c[i];
                maxact=3;
                bindex=i;
            }
        }
        long long  max2=0;
        long long cindex=-1;
        long long maxact2=-1;
        if(maxact==1){
            for(long i=0;i<n;i++){
                if(b[i]>max2 && i!=bindex){
                    max2=b[i];
                    maxact2=2;
                    cindex=i;
                }
            }
            for(long i=0;i<n;i++){
                if(c[i]>max2 && i!=bindex){
                    max2=c[i];
                    maxact2=3;
                    cindex=i;
                }
            }
        }
        else if(maxact==2){
            for(long i=0;i<n;i++){
                if(a[i]>max2 && i!=bindex){
                    max2=a[i];
                    maxact2=1;
                    cindex=i;
                }
            }
            for(long i=0;i<n;i++){
                if(c[i]>max2 && i!=bindex){
                    max2=c[i];
                    maxact2=3;
                    cindex=i;
                }
            }
        }
        else if(maxact==3){
            for(long i=0;i<n;i++){
                if(b[i]>max2 && i!=bindex){
                    max2=b[i];
                    maxact2=2;
                    cindex=i;
                }
            }
            for(long i=0;i<n;i++){
                if(a[i]>max2 && i!=bindex){
                    max2=a[i];
                    maxact2=1;
                    cindex=i;
                }
            }
        }
        long long max3=0;
        if(maxact!=1 && maxact2!=1){
            for(long i=0;i<n;i++){
                if(a[i]>max3 && i!=bindex && i!=cindex){
                    max3=a[i];
                }
            }
        }
        else if(maxact!=2 && maxact2!=2){
            for(long i=0;i<n;i++){
                if(b[i]>max3 && i!=bindex && i!=cindex){
                    max3=b[i];
                }
            }
        }
        else if(maxact!=3 && maxact2!=3){
            for(long i=0;i<n;i++){
                if(c[i]>max3 && i!=bindex && i!=cindex){
                    max3=c[i];
                }
            }
        }
        cout<<max+max2+max3<<endl;

    }
}