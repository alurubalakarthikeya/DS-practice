#include <stdio.h>
struct Players
{
    char pName[30];
    int pID;
    float pBattingAvg;
    float pBowlingAvg;
};

int main()
{
    struct Players player[2];
    strcpy(player[0].pName, "Virat Kohli");
    player[0].pID = 18;
    player[0].pBattingAvg = 58;
    player[0].pBowlingAvg = 0;
    strcpy(player[1].pName, "MS Dhoni");
    player[1].pID = 07;
    player[1].pBattingAvg = 50;
    player[1].pBowlingAvg = 0;
    printf("Player Information: \n");
    for (int i = 0; i < 2; i++)
    {
        printf("Player name: %s\n", player[i].pName);
        printf("Player ID: %d\n", player[i].pID);
        printf("Batting Average: %.2f\n", player[i].pBattingAvg);
        printf("Bowling Average: %.2f\n", player[i].pBowlingAvg);
    }
    return 0;
}