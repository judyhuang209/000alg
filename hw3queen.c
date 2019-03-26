#include<stdio.h>

void print_step(int x1, int y1, int x2, int y2)
{
    int steps = 0;
    if ((x2-x1) == (y2-y1) || (x2-x1) == (-1)*(y2-y1))
    {
        if((x2-x1) == 0)
            steps = 0;
        else
            steps = 1;
    }
    else if (((x2-x1) == 0) || ((y2-y1) == 0))
        steps = 1;
    else
        steps = 2;
    printf("%d\n", steps);
}



int main()
{
    int x1, y1, x2, y2;
    while(1){
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        if (x1==0 && y1==0 && x2==0 && y2==0)
            break;
        print_step(x1, y1, x2, y2);
    }
}
