// The translation from the Berland language into the Birland language is not an easy task. 
// Those languages are very similar: a berlandish word differs from a birlandish word with 
// the same meaning a little: it is spelled (and pronounced) reversely. For example, a 
// Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make 
// a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish 
// as t. Help him: find out if he translated the word correctly.

// Input
// The first line contains word s, the second line contains word t. The words consist of 
// lowercase Latin letters. The input data do not consist unnecessary spaces. The words 
// are not empty and their lengths do not exceed 100 symbols.

// Output
// If the word t is a word s, written reversely, print YES, otherwise print NO.

#include<iostream>

int main(){
    std::string s,r;
    int flag = 0;
    std::cin>>s;
    std::cin>>r;
    int lind = s.length()-1;

    for(int i =0;i<s.length();i++){
        if(r[i]==s[lind]){
            lind = lind-1;
            continue;
        }
        else{
            flag=1;
            break;
        }
    }

    if(flag==0){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }

    return 0;
}