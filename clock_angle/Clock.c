#include <stdio.h>
#include <math.h>

int calcAngle(int ha, int ma)
{
    if (ha == 12)
        ha = 0;
    if (ma == 60)
        ma = 0;
    int hour_angle = (int)(0.5 * (ha * 60 + ma));
    int minute_angle = (int)(6 * ma);

    int angle = fabs(hour_angle - minute_angle);
    int ang = 360 - angle;
    return (ang > angle) ? angle : ang;
}

int main(void)

{
    int ha = 0;
    printf("Enter the Hour\n");
    scanf("%d", &ha);
    int ma = 0;
    printf("Enter the Minutes\n");
    scanf("%d", &ma);
    if (ha < 0 || ma < 0 || ha > 12 || ma > 60)
    {
        printf("\nWrong input..!");
    }
    else
    {
        printf("\nAngle between hour and minute hands %d", calcAngle(ha, ma));
    }
}