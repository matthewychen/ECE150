#include <iostream>
#include <string>


unsigned int n{};

void pattern( unsigned int n ){
    unsigned int asterisks{2*n+1};
    unsigned int spaces{0};
        for(unsigned int line = 0;line<=(2*n+1);(++line)){
            unsigned int temp=spaces;
            for(;spaces>0;spaces--){
                std::cout<<' ';
            }
            spaces=temp;
            for(;asterisks>0;){
                std::cout<<'*';
                asterisks--;
                asterisks--;
            }
            for(;spaces>0;spaces--){
                std::cout<<' ';
            }
            spaces=temp;
            if(linenum>n){
                std::cout<<"you have reached end of forward loop";
            spaces++;
            }
    }
}

unsigned int log10(unsigned int n){ 
    if(n==0){
        return 0;
    }
    unsigned int counter{0};
    unsigned int power{1};
    if(n>=1){
    while(power<=n){
        power*=10;
        counter+=1;
        }
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
    pattern(10);
    return 0;
}