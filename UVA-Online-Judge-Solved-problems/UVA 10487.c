#include<stdio.h>
#define INT_MAX 2147483647

int sum [1000 * 1000 + 10];

int main ()
{
    int n;
    int cases = 0;

    while ( scanf ("%d", &n) && n )
    {
        int nums [1000 + 10];

        int i,j;
        int sum_len = 0;
        for (i = 0; i < n; i++ )
        {
            scanf ("%d", &nums [i]);
            register int tmp=nums[i];
            for (j = i - 1; j >= 0; j-- ) sum [sum_len++] = tmp + nums [j];
        }


        int m;
        scanf ("%d", &m);

        printf ("Case %d:\n", ++cases);

        for (i = 0; i < m; i++ )
        {
            int query;
            scanf ("%d", &query);
            int min_diff = INT_MAX;
            int closest_sum;

            for (j = 0; j < sum_len; j++ )
            {
                int diff = abs (query - sum [j]);
                if ( diff < min_diff )
                {
                    min_diff = diff;
                    closest_sum = sum [j];
                }
            }

            printf ("Closest sum to %d is %d.\n", query, closest_sum);
        }
    }

    return 0;
}
