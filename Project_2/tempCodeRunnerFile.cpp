#include <iostream>
#include <string>


unsigned int n{};

void pattern( unsigned int n ){
    while(true){
        
            for(unsigned int b;b<=n;++b){
                std::cout<<'*'*b;
        break;
    }
    }
}

unsigned int log10(unsigned int n){
    
    if(n==0){
        return 0;
    }

    unsigned int counter{};
    unsigned int power{1};
    while(power<=n){
        power*=10;
        counter+=1;
        }
    return (counter-1);
    }


unsigned int count(unsigned int n, unsigned int bit){
    return 0;
    }

unsigned int swap_bytes( unsigned int n, unsigned int b0, unsigned int b1 ){
    return 0;
}

int main(){
    std::cout<<log10(0);
    return 0;
}