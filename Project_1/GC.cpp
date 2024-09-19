#include <iostream>
#include <cmath>

int main() {
    /*initialization of variables*/
    int Fmax{};
    double Fscore{};
    int Mmax{};
    double Mscore{};
    std::cout<<"What is the max score on the exam?";
    std::cin >> Fmax;
    std::cout<<"What is your score on the exam?";
    std::cin >> Fscore;
    double F100{};
    F100=Fscore/Fmax;
    std::cout<<"What is the max score on the midterm?";
    std::cin >> Mmax;
    std::cout<<"What is your score on the midterm?";
    std::cin >> Mscore;
    double M100{};
    M100=Mscore/Mmax;
    double E100=100*((0.75)*F100+(0.25)*M100);
    std::cout<<E100<<M100<<std::endl;
    std::cout<<M100<<std::endl;
    std::cout<<F100<<std::endl;
    return 0;
}