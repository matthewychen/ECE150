#include <iostream>
#include <cmath>

int main() {
    /*initialization of variables*/
    int Fmax{};
    double Fscore{};
    int Mmax{};
    double Mscore{};
    std::cout<<"What is the max score on the exam? ";
    std::cin >> Fmax;
    if(Fmax<=0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    std::cout<<"What is your score on the exam? ";
    std::cin >> Fscore;
    if(Fscore>Fmax || Fscore<0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    double F100{};
    F100=Fscore/Fmax;
    std::cout<<"What is the max score on the midterm? ";
    std::cin >> Mmax;
    if(Mmax<=0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    std::cout<<"What is your score on the midterm? ";
    std::cin >> Mscore;
    if(Mscore>Mmax || Mscore<0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    double M100{};
    M100=Mscore/Mmax;
    double E100=100*((0.75)*F100+(0.25)*M100);
    int Proj1max{};
    int Proj2max{};
    int Proj3max{};
    int Proj4max{};
    int Proj5max{};
    double Proj1score{};
    double Proj2score{};
    double Proj3score{};
    double Proj4score{};
    double Proj5score{};
    std::cout<<"What is the max score of project 1? ";
    std::cin >> Proj1max;
    if(Proj1max<=0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    std::cout<<"What is your score on project 1? ";
    std::cin >> Proj1score;
    if(Proj1score>Proj1max || Proj1score<0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    double Project1100 {};
    Project1100=Proj1score/Proj1max;
    std::cout<<"What is the max score of project 2? ";
    std::cin >> Proj2max;
    if(Proj2max<=0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    std::cout<<"What is your score on project 2? ";
    std::cin >> Proj2score;
    if(Proj2score>Proj2max || Proj2score<0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    double Project2100 {};
    Project2100=Proj2score/Proj2max;
    std::cout<<"What is the max score of project 3? ";
    std::cin >> Proj3max;
    if(Proj3max<=0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    std::cout<<"What is your score on project 3? ";
    std::cin >> Proj3score;
    if(Proj3score>Proj3max || Proj3score<0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    double Project3100 {};
    Project3100=Proj3score/Proj3max;
    std::cout<<"What is the max score of project 4? ";
    std::cin >> Proj4max;
    if(Proj4max<=0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    std::cout<<"What is your score on project 4? ";
    std::cin >> Proj4score;
    if(Proj4score>Proj4max || Proj4score<0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    double Project4100 {};
    Project4100=Proj4score/Proj4max;
     std::cout<<"What is the max score of project 5? ";
    std::cin >> Proj5max;
    if(Proj5max<=0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    std::cout<<"What is your score on project 5? ";
    std::cin >> Proj5score;
    if(Proj5score>Proj5max || Proj5score<0){
        std::cout<<"number rejected, must be a positive integer";
        return 0;
    }
    double Project5100 {};
    Project5100=Proj5score/Proj5max;
    int Project100 {};
    Project100=100*(Project1100+Project2100+Project3100+Project4100+Project5100)/5;
    double Final {};
    if (E100<=40){
        Final=E100;
    }
    else if (E100>=60){
        Final=((2*E100)/3)+(Project100/3);
    }
    else if (40<E100 && 60>E100){
        Final=(Project100/3)*((E100-40)/20)+E100*(1-(E100-40)/20/3);
    }
    Final=std::round(Final+1e-12);
    std::cout<< "Final Grade: "<<Final;
    return 0;
}