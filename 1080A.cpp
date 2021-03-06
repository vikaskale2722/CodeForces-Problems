// Petya is having a party soon, and he has decided to invite his n friends.

// He wants to make invitations in the form of origami. For each invitation, 
// he needs two red sheets, five green sheets, and eight blue sheets. The store 
// sells an infinite number of notebooks of each color, but each notebook consists 
// of only one color with k sheets. That is, each notebook contains k sheets of 
// either red, green, or blue.

// Find the minimum number of notebooks that Petya needs to buy to invite all n 
// of his friends.

// Input
// The first line contains two integers n and k (1≤n,k≤108) — the number of Petya's 
// friends and the number of sheets in each notebook respectively.

// Output
// Print one number — the minimum number of notebooks that Petya needs to buy.


#include<iostream>

int main(){
    int n = 0, k = 0;
    int total = 0;
    std::cin>>n>>k;
    int red = n*2;
    if(red%k==0){
        total = total + red/k;
    }
    else{
        total = total + red/k + 1;
    }
    int green = n*5;
    if(green%k==0){
        total = total + green/k;
    }
    else{
        total = total + green/k + 1;
    }
    int blue = n*8;
    if(blue%k==0){
        total = total + blue/k;
    }
    else{
        total = total + blue/k + 1;
    }
    std::cout<<total;
    return 0;
}
