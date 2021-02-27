// Comrade Dujikov is busy choosing artists for Timofey's birthday and is recieving calls 
// from Taymyr from Ilia-alpinist.

// Ilia-alpinist calls every n minutes, i.e. in minutes n, 2n, 3n and so on. 
// Artists come to the comrade every m minutes, i.e. in minutes m, 2m, 3m and 
// so on. The day is z minutes long, i.e. the day consists of minutes 1, 2, ..., z. 
// How many artists should be killed so that there are no artists in the room when 
// Ilia calls? Consider that a call and a talk with an artist take exactly one minute.

// Input
// The only string contains three integers — n, m and z (1 ≤ n, m, z ≤ 104).

// Output
// Print single integer — the minimum number of artists that should be killed so 
// that there are no artists in the room when Ilia calls.


#include<iostream>

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a<b){
        return gcd(a,b-a);
    }
    return gcd(a-b,b);
}

int main(){
    int m=0,n=0,tot=0;
    int count = 0;
    int lcm = 0;
    std::cin>>n>>m>>tot;
   
    lcm = (n*m)/(gcd(n,m));
    int temp = lcm;
    if(lcm>tot){
        count = 0;
    }
    else{
        while(lcm<=tot){
            count++;
            lcm = lcm+temp;
        }
    }
    std::cout<<count;
    return 0;
}