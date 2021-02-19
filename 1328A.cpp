// You are given two positive integers a and b. In one move you can increase a by 
// 1 (replace a with a+1). Your task is to find the minimum number of moves you need 
// to do in order to make a divisible by b. It is possible, that you have to make 0 
// moves, as a is already divisible by b. You have to answer t independent test cases.

// Input
// The first line of the input contains one integer t (1≤t≤104) — the number of test 
// cases. Then t test cases follow.

// The only line of the test case contains two integers a and b (1≤a,b≤109).

// Output
// For each test case print the answer — the minimum number of moves you need to do 
// in order to make a divisible by b.


#include<iostream>

int main(){
    int n = 0;
    int a = 0,b = 0;
    std::cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        std::cin>>a>>b;
        if(a%b==0){
            arr[i] = 0;
        }
        else{
            arr[i] = b-(a%b);
        }
    }
    for(int i =0;i<n;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}
