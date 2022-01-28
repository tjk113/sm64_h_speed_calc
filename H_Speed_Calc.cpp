#include <iostream>
#include <iomanip>
#include <stdlib.h>

float getSpd(float yDist, int n) {
    return 4*(yDist / n) + 8*n - 216; // jongyon's hspd equation :D
}

int main() {

    float marioY, starY, yDist, yDistPerFrame; // mario and star y-positions, y-distance
    int n; // number of frames
    char restart;
    
    std::cout << "\nMario Y, Star Y, Number of Frames: "; std::cin >> marioY >> starY >> n;
    
    starY -= 19.999999; // optimal distance below star
    marioY += 160; // mario hitbox height
    yDist = starY - marioY;
    yDistPerFrame = (getSpd(yDist, n) / 4) + 52;
    
    std::cout << std::setprecision(10) << '\n' << "Required H Speed = " << getSpd(yDist, n);
    std::cout << std::setprecision(10) << '\n' << "Required Y Speed = " << yDistPerFrame << std::endl;
    std::cout << '\n' << "New Calculation? [y/n] "; std::cin >> restart;

    if( std::tolower(restart) == 'y' ) {
        main();
    } else {
        return 0;
    }
}