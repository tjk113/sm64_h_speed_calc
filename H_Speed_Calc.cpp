#include <iostream>
#include <stdlib.h>

float getSpd(float distPerFrame, int n) {
    return 4*(distPerFrame + 48) + 4*n;
}

int main() {

    float marioY, starY, distPerFrame; // mario and star y-positions, y-distance
    int n; // number of frames
    char restart;
    
    std::cout << "\nMario Y, Star Y, Number of Frames: "; std::cin >> marioY >> starY >> n;

    distPerFrame = (starY - marioY) / n;
    
    std::cout << '\n' << "Required H Speed = " << getSpd(distPerFrame, n);
    std::cout << '\n' << "Required Y Speed = " << distPerFrame << std::endl;
    std::cout << '\n' << "New Calculation? [y/n] "; std::cin >> restart;

    if( restart == std::tolower('Y') ) {
        main();
    } else {
        return 0;
    }
}