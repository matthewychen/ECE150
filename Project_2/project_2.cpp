#include <iostream>
#include <cassert>

unsigned int n{};

void pattern( unsigned int n ){
    unsigned int asterisks{2*n+1};
    unsigned int spaces{0};
    bool hitmid{false};
        for(unsigned int line = 0;line>=0 && line<=n;){
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
            std::cout<<std::endl;

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
    assert(n!=0);
    unsigned int counter{0};
    while(n>=1){
        n/=10;
        counter++;
        }
    return (counter-1);
}

unsigned int count(unsigned int n, unsigned int bit) {
    assert(bit == 0 || bit == 1);
    unsigned int count{0};
    unsigned int alrprocessed = 0;
    while (n != 0) {
        if ((n & 1) == bit) {
            count += 1;
        }
        n >>= 1;
        alrprocessed++;
    }
    if (bit == 0 && alrprocessed < 32) {
        count += (32 - alrprocessed);
    }
    return count;
}


unsigned int swap_bytes( unsigned int n, unsigned int b0, unsigned int b1 ){
    assert((b0>=0&&b0<=3)&&(b1>=0&&b1<=3));
    unsigned int numb0{};
    unsigned int numb1{};
    numb0 = n>>(8*b0) & 0xFF; //isolate for byte by shift original bit to the right and taking the union of that with the last 2 bytes
    numb1 = n>>(8*b1) & 0xFF;

    n &= ~(0xFF<<8*b0);//clear position b1 and b0 while maintaining everywhere else
    n &= ~(0xFF<<8*b1);

    n |=(numb0<<8*b1);//sub new values in at new position
    n |=(numb1<<8*b0);
    return n;
}

int main(){
        std::cout<<log10(10);
    return 0;
}