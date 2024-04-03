#include<iostream>
using namespace std;

int countKdivPairs(int A[], int n, int K)
{
    // Create a frequency array to count
    // occurrences of all remainders when
    // divided by K
    int freq[K] = { 0 };
 
    // To store count of pairs.
    int ans = 0;
 
    // Traverse the array, compute the remainder
    // and add k-remainder value hash count to ans
    for (int i = 0; i < n; i++) {
        int rem = A[i] % K;
       
        // Count number of ( A[i], (K - rem)%K ) pairs
          ans += freq[(K - rem) % K];
 
        // Increment count of remainder in hash map
        freq[rem]++;
    }
 
    return ans;
}
 


void countPair(int arr[], int n, int k)
{
 
    // initialize the count
    int cnt = 0;
 
    // making every element of arr in
    // range 0 to k - 1
    for (int i = 0; i < n; i++) {
        arr[i] = (arr[i] + k) % k;
    }
 
    // create an array hash[]
    int hash[k] = { 0 };
 
    // store to count of element of arr
    // in hash[]
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
 
    // count the pair whose absolute
    // difference is divisible by k
    for (int i = 0; i < k; i++) {
        cnt += (hash[i] * (hash[i] - 1)) / 2;
    }
 
    // print the value of count
    cout << cnt << endl;
}



int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

    }
}