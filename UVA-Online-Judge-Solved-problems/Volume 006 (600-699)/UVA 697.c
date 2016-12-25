#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
#define gc getchar_unlocked
int neg;
int scandigits(double *x, int div) {
  register int c = gc();
  register double pow10 = 1;
  if ( x == NULL ) {
    return -1;
  }
  *x = 0;
  while ( (c < '0' || c > '9') && c != '-' ) {
    c = gc();
  }
  if ( c == '-' ) {
    neg = 1;
    c = gc();
  }
  while ( !(c < '0' || c > '9') ) {
    *x *= 10;
    *x += (c - '0');
    pow10 *= 10;
    c = gc();
  }
  if ( neg )
    *x = -*x;
  if ( div )
    *x /= pow10;
  return c;
}

void scandouble(double *x) {
  double left, right = 0;
  if ( x == NULL ) {
    return;
  }
  neg = 0;
  int ret = scandigits(&left, 0);
  if ( ret == '.' )
    scandigits(&right, 1);
  *x = left + right;
}

int main()
{
    double UP;
    int counts=0;
    while(1)
    {
        scandouble(&UP);
        if(UP<1.0) return 0;
        double D,L,B,P,DOWN,V,tempL,TimeRequired=0.0;
        scandouble(&D),scandouble(&L),scandouble(&B),scandouble(&P),scandouble(&DOWN),scandouble(&V);
        tempL=L;
        int visit_time=(int)ceil(V/B- 0.000000000001);  /*counter of how many time we have to go to the mounten to collect V volume of water by B volume bucket*/
        while(visit_time--)
        {
            TimeRequired+=UP+DOWN+sqrt(2*tempL/(32.2*12))+tempL/P; /*Every time we collect water,we have to spend UP & DOWN time once.then after reaching the well we need sqrt(2s/a) time to reach the water surface,and then with P velocity per second we need another L/P time to bring the water at the top */
            tempL+=4*B*12*12*12/(pi*D*D);  /*each time we collect some water,the water level decrease,that means L increases by B/(pi*D^2)  */
        }
        if(counts) printf("\n");
        printf("Scenario %d:\n     up hill         %10.2lf sec\n     well diameter   %10.2lf in\n     water level     %10.2lf in\n     bucket volume   %10.2lf cu ft\n     bucket ascent rate%8.2lf in/sec\n     down hill       %10.2lf sec\n     required volume %10.2lf cu ft\n     TIME REQUIRED   %10.2lf sec\n",++counts,UP,D,L,B, P, DOWN, V,TimeRequired);
    }
    return 0;
}
