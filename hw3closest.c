#include <stdio.h>
#include <math.h>

float get_d (int x1, int y1, int x2, int y2)
{
    int xd;
    int yd;
    xd = pow((x2 - x1), 2);
    yd = pow((y2 - y1), 2);
    float d;
    d = sqrt((float)xd + (float)yd);
    return d;
}


int main()
{
    int n = 0;
    scanf("%d", &n);
    while(n--)
    {
        int m = 0;
        scanf("%d", &m);
        int *x;
        int *y;
        x = (int *) malloc(sizeof(int*) * m);
        y = (int *) malloc(sizeof(int*) * m);
        int i = 0;
        for(i; i < m; i++)
        {
            scanf("%d", &x[i]);
            scanf("%d", &y[i]);
        }
        i = 0;
        int j;
        float d = 9999999;
        for(i; i < m; i++)
        {
            j = i+1;
            for(j; j < m; j++)
            {
                float temp;
                temp = get_d(x[i], y[i], x[j], y[j]);
                if (temp < d)
                    d = temp;
            }
        }
        printf("%.3f\n", d);
    }

}
