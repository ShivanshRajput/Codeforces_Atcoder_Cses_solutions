#include <iostream>
using namespace std;
int leng(char * ptr,int i){
    int count=0;
    while (ptr[i]==0){
        count++;
        i++;
    }
    return count;
}

int main(){
    char arr[100];
    int len[100];
    cin>>arr;
    int i=0;
    int maxlen=0;
    while(arr[i]!='\0'){
        // if (arr[i]=='0'){
            len[i]=leng(arr,i);
        // }
        i++;
    }

    return 0;    
}