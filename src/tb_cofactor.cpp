#include<stdio.h>
#include<math.h>
#include"cofactor_wrapper.h"


int main()
{
  matrix_data_t a[DIM][DIM];
  matrix_data_t co_fac[DIM][DIM];
  int i,j;
  float d;
  printf("-------------------------------------------------------------\n");
  printf("C Program to find inverse of Matrix\n");
  printf("-------------------------------------------------------------\n\n\n");
// __SRAI  for (i=0;i<DIM;i++)
// __SRAI    {
// __SRAI     for (j=0;j<DIM;j++)
// __SRAI       {
// __SRAI        if (i == j) 
// __SRAI              a[i][j] = 1; 
// __SRAI        else
// __SRAI              a[i][j] = i+j; 
// __SRAI        }
// __SRAI    }
a[0][0] = 1.0;
a[0][1] = 2.0;
a[0][2] = 3.0;
a[0][3] = 4.0;
a[1][0] = 5.0;
a[1][1] = 6.0;
a[1][2] = 7.0;
a[1][3] = 8.0;
a[2][0] = 2.0;
a[2][1] = 6.0;
a[2][2] = 4.0;
a[2][3] = 8.0;
a[3][0] = 3.0;
a[3][1] = 1.0;
a[3][2] = 1.0;
a[3][3] = 2.0;
  printf("\n Input Test Matrix :\n\n");
  for (i=0;i<DIM;i++)
    {
     for (j=0;j<DIM;j++)
       {
          printf ("\t%f ",a[i][j]);
        }
          printf ("\n");
    }
  cofactor(a, co_fac);
  printf("\n**** co_factor Matrix ****\n\n");
  for (i=0;i<DIM;i++)
    {
     for (j=0;j<DIM;j++)
       {
          printf ("\t%f ",co_fac[i][j]);
        }
          printf ("\n");
    }



a[0][0] = 2.0;
a[0][1] = 4.0;
a[0][2] = 6.0;
a[0][3] = 8.0;
a[1][0] = 10.0;
a[1][1] = 12.0;
a[1][2] = 14.0;
a[1][3] = 16.0;
a[2][0] = 4.0;
a[2][1] = 12.0;
a[2][2] = 8.0;
a[2][3] = 16.0;
a[3][0] = 6.0;
a[3][1] = 2.0;
a[3][2] = 2.0;
a[3][3] = 4.0;


  printf("\n Input Test Matrix :\n\n");
  for (i=0;i<DIM;i++)
    {
     for (j=0;j<DIM;j++)
       {
          printf ("\t%f ",a[i][j]);
        }
          printf ("\n");
    }
  cofactor(a, co_fac);
  printf("\n**** co_factor Matrix ****\n\n");
  for (i=0;i<DIM;i++)
    {
     for (j=0;j<DIM;j++)
       {
          printf ("\t%f ",co_fac[i][j]);
        }
          printf ("\n");
    }
}
