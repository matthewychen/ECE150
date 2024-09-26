#include <iostream>
#include <cmath>

int main() {
    double Fmax{};
    double Fscore{};
    double Mmax{};
    double Mscore{};

    std::cout << "What is the max score on the exam? ";
    std::cin >> Fmax;
    while(Fmax <= 0 || Fmax!=std::round(Fmax)) {
        std::cout << "Number rejected, must be a positive integer. Please try again: ";
        std::cin >> Fmax;
    }

    std::cout << "What is your score on the exam? ";
    std::cin >> Fscore;
    while(Fscore > Fmax || Fscore < 0) {
        std::cout << "Number rejected, must be a valid score within the range. Please try again: ";
        std::cin >> Fscore;
    }

    double F100{};
    F100 = Fscore / Fmax;

    std::cout << "What is the max score on the midterm? ";
    std::cin >> Mmax;
    while(Mmax <= 0 || Mmax!=std::round(Mmax)) {
        std::cout << "Number rejected, must be a positive integer. Please try again: ";
        std::cin >> Mmax;
    }

    std::cout << "What is your score on the midterm? ";
    std::cin >> Mscore;
    while(Mscore > Mmax || Mscore < 0) {
        std::cout << "Number rejected, must be a valid score within the range. Please try again: ";
        std::cin >> Mscore;
    }

    double M100{};
    M100 = Mscore / Mmax;
    if(F100>M100){
        M100=F100;
    }
    double E100 = 100 * ((0.75) * F100 + (0.25) * M100);

    //projects
    double Proj1max{}, Proj2max{}, Proj3max{}, Proj4max{}, Proj5max{};
    double Proj1score{}, Proj2score{}, Proj3score{}, Proj4score{}, Proj5score{};

    std::cout << "What is the max score of project 1? ";
    std::cin >> Proj1max;
    while(Proj1max <= 0 || Proj1max!=std::round(Proj1max)) {
        std::cout << "Number rejected, must be a positive integer. Please try again: ";
        std::cin >> Proj1max;
    }

    std::cout << "What is your score on project 1? ";
    std::cin >> Proj1score;
    while(Proj1score > Proj1max || Proj1score < 0) {
        std::cout << "Number rejected, must be a valid score within the range. Please try again: ";
        std::cin >> Proj1score;
    }

    double Project1100{};
    Project1100 = Proj1score / Proj1max;

    std::cout << "What is the max score of project 2? ";
    std::cin >> Proj2max;
    while(Proj2max <= 0|| Proj2max!=std::round(Proj2max)) {
        std::cout << "Number rejected, must be a positive integer. Please try again: ";
        std::cin >> Proj2max;
    }

    std::cout << "What is your score on project 2? ";
    std::cin >> Proj2score;
    while(Proj2score > Proj2max || Proj2score < 0) {
        std::cout << "Number rejected, must be a valid score within the range. Please try again: ";
        std::cin >> Proj2score;
    }

    double Project2100{};
    Project2100 = Proj2score / Proj2max;

    std::cout << "What is the max score of project 3? ";
    std::cin >> Proj3max;
    while(Proj3max <= 0|| Proj3max!=std::round(Proj3max)) {
        std::cout << "Number rejected, must be a positive integer. Please try again: ";
        std::cin >> Proj3max;
    }

    std::cout << "What is your score on project 3? ";
    std::cin >> Proj3score;
    while(Proj3score > Proj3max || Proj3score < 0) {
        std::cout << "Number rejected, must be a valid score within the range. Please try again: ";
        std::cin >> Proj3score;
    }

    double Project3100{};
    Project3100 = Proj3score / Proj3max;

    std::cout << "What is the max score of project 4? ";
    std::cin >> Proj4max;
    while(Proj4max <= 0|| Proj4max!=std::round(Proj4max)) {
        std::cout << "Number rejected, must be a positive integer. Please try again: ";
        std::cin >> Proj4max;
    }

    std::cout << "What is your score on project 4? ";
    std::cin >> Proj4score;
    while(Proj4score > Proj4max || Proj4score < 0) {
        std::cout << "Number rejected, must be a valid score within the range. Please try again: ";
        std::cin >> Proj4score;
    }

    double Project4100{};
    Project4100 = Proj4score / Proj4max;

    std::cout << "What is the max score of project 5? ";
    std::cin >> Proj5max;
    while(Proj5max <= 0|| Proj5max!=std::round(Proj5max)) {
        std::cout << "Number rejected, must be a positive integer. Please try again: ";
        std::cin >> Proj5max;
    }

    std::cout << "What is your score on project 5? ";
    std::cin >> Proj5score;
    while(Proj5score > Proj5max || Proj5score < 0) {
        std::cout << "Number rejected, must be a valid score within the range. Please try again: ";
        std::cin >> Proj5score;
    }

    double Project5100{};
    Project5100 = Proj5score / Proj5max;
    
    //replacing if lower than final
    if(F100>Project1100){
        Project1100=F100;
    }
    if(F100>Project2100){
        Project2100=F100;
    }
    if(F100>Project3100){
        Project3100=F100;
    }
    if(F100>Project4100){
        Project4100=F100;
    }
    if(F100>Project5100){
        Project5100=F100;
    }
    double Project100{};
    Project100 = 100 * (Project1100 + Project2100 + Project3100 + Project4100 + Project5100) / 5.0;

    double Final{};
    if (E100 <= 40) {
        Final = E100;
    } else if (E100 >= 60) {
        Final = ((2.0 * E100) / 3.0) + (Project100 / 3.0);
    } else if (E100 > 40 && E100 < 60) {
        Final = (Project100 / 3.0) * ((E100 - 40) /20.0) + E100 * (1 - (E100 - 40) / 20.0 / 3.0);
    }
    Final = std::round(Final + 1e-12);
    std::cout << "Final Grade: " << Final;
    return 0;
}
