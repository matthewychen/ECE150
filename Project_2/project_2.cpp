#include <iostream>
#include <string>


unsigned int n{};

void pattern( unsigned int n ){
    unsigned int asterisks{2*n+1};
    unsigned int spaces{0};
    bool hitmid{false};
        for(int line = 0;line>=0 && line<=n;){
            //printing out
            for(unsigned int i = 0; i<spaces ;i++){
                std::cout<<' ';
            }
            for(unsigned int j=0 ; j<asterisks ; j++){
                std::cout<<'*';
            }
            for(unsigned int i=0 ; i<spaces ; i++){
                std::cout<<' ';
            }
            std::cout<<'\n';

            //increment upwards if not yet at middle
            if(hitmid==false){
                spaces++;
                asterisks-=2;
                line++;
            }
            //increment downwards if past middle
            if (hitmid==true){
                spaces--;
                asterisks+=2;
                line--;
            }
            //at line n decide that the middle has been hit
            if (line==n){
                hitmid=true;
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
    pattern(80);
    return 0;
}