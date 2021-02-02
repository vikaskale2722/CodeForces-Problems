#include<iostream>

int main(){
    int n = 0;
    int count = 0;
    std::cin>>n;
    for(int i = 0;i<n;i++){
        int a = 0,b = 0;
        std::cin>>a>>b;
        if(b-a>=2){
            count++;
        }
    }
    std::cout<<count;
    return 0;
}