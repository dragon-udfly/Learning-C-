#include <cstdio>
#include <cmath>

typedef struct{
    double radius;
    double area;
    double volume;
} Planet;

void CalculatePlanetArea(Planet *pl) {
    pl -> area = 4 * 3.143 * std::pow(pl -> radius, 2);
}

void CalculatePlanetVolume(Planet *pl) {
    pl -> volume = (4 / 3) * 3.143 * std::pow(pl -> radius, 3);
}

typedef struct{
    double bottom_radius;
    double hight;
    double tilled_length;
    double area;
    double volume;
} Cone;

void CalculateConeArea(Cone *cn) {
    cn -> tilled_length = std::sqrt(std::pow(cn -> hight, 2) + std::pow(cn -> bottom_radius, 2));
    
    cn -> area = (3.143 * cn -> bottom_radius * cn -> tilled_length) + (3.143 * std::pow(cn -> bottom_radius, 2));
}

void CalculateConeVolume(Cone *c) {
    c -> volume = (3.143 * std::pow(c -> bottom_radius, 2), c -> hight) / 3;
}

int main() {

    Planet planets[5] = {0};
    double radii[5] = {4593.23, 39023.20, 32049.32, 12034.93, 89343.32};

    for(int i = 0; i < 5; i++) {
        planets[i].radius = radii[i];
    }

    std::printf("Calculating Planet Areas......\n");
    for(int i = 0; i < 5; i++) {
        CalculatePlanetArea(&planets[i]);
    }

    std::printf("Areas Of Planets: \n");
    for(int i = 0; i < 5; i++) {
        std::printf("Planet[%d]: %.2lf\n", (i + 1), planets[i].area);
    }
    std::printf("\n");

    std::printf("Calculating Planet Volumes.......\n");
    for(int i = 0; i < 5; i++) {
        CalculatePlanetVolume(&planets[i]);
    }

    std::printf("Volumes Of Planets: \n");
    for(int i = 0; i < 5; i++) { 
        std::printf("Planet[%d]: %.2lf\n", (i + 1), planets[i].volume);
    }
    std::printf("\n");

    Cone cones[5] = {0};

    double cone_heights[5] = {123.23, 483.25, 394.89, 342.11, 562.33};
    double cone_bottom_radius[5] = {43.12, 83.23, 93.33, 13.44, 29.44};

    for(int i = 0; i < 5; i++) {
        cones[i].bottom_radius = cone_bottom_radius[i];
        cones[i].hight = cone_heights[i];
    }


    return 0;
}