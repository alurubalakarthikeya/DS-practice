#include <stdio.h>
#include <stdlib.h>
struct Planets
{
    char pName[20];
    float distance;
    int moons;
};

int main()
{
    struct Planets planets[2];
    strcpy(planets[0].pName, "Earth");
    planets[0].distance = 69;
    planets[0].moons = 1;
    strcpy(planets[1].pName, "Venus");
    planets[1].distance = 144;
    planets[1].moons = 2;
    for (int i = 0; i < 2; i++)
    {
        printf("Planet name: %s\n", planets[i].pName);
        printf("Distance from the Sun: %.1f miles\n", planets[i].distance);
        printf("Number of moons: %d\n", planets[i].moons);
    }
    return 0;
}