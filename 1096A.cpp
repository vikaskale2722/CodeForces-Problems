// You are given a range of positive integers from l to r.

// Find such a pair of integers (x,y) that l≤x,y≤r, x≠y and x divides y.

// If there are multiple answers, print any of them.

// You are also asked to answer T independent queries.

// Input
// The first line contains a single integer T (1≤T≤1000) — the number of queries.

// Each of the next T lines contains two integers l and r (1≤l≤r≤998244353) — inclusive borders of the range.

// It is guaranteed that testset only includes queries, which have at least one suitable pair.

// Output
// Print T lines, each line should contain the answer — two integers x and y such that l≤x,y≤r, x≠y 
// and x divides y. The answer in the i-th line should correspond to the i-th query from the input.

// If there are multiple answers, print any of them.


#include<iostream>

int main(){
    int n = 0,temp=0;
    std::cin>>n;
    int ans[n][2];
    for(int i=0;i<n;i++){
        int a,b;
        std::cin>>a>>b;
        for(int j=a;j<=(a+b)/2;j++){
            if(j*2<=b){
                ans[temp][0] = j;
                ans[temp][1] = j*2;
                temp++;
                break;
            }
        }
    }
    for(int i = 0;i<n;i++){
        std::cout<<ans[i][0]<<" "<<ans[i][1]<<std::endl;
    }
    return 0;
}