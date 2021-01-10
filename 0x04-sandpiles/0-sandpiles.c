#include <stdlib.h>
#include <stdio.h>

#include "sandpiles.h"
/**
*
*/
static void print_grid(int grid[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
}
/**
*
*/
void cpgrid(int grid[3][3], int nwgrid[3][3])
{
  int i , y;
  for (i = 0; i < 3; i++)
  for (y = 0; y < 3; y++)
  {
    nwgrid[i][y] = grid[i][y];
  }
}
/**
  *
  *
  */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
  int grid[3][3];
  int i, y, test = 0;
  for (i = 0; i < 3; i++)
    for (y = 0; y < 3 ; y++)
    {
      grid1[i][y] = grid1[i][y] + grid2[i][y];
    }
  while (1)
  {
    test = 0;
    cpgrid(grid1, grid);
    for (i = 0; i < 3; i++) 
      for (y = 0; y < 3 ; y++)
      {
        if (grid[i][y] > 3)
        {
          test = 1;
          grid1[i][y] = grid1[i][y] - 4;
          if (i-1 >= 0)
            grid1[i-1][y]++;
          if (i+1 <= 2)
            grid1[i+1][y]++;
          if (y-1 >= 0)
            grid1[i][y-1]++; 
          if (y+1 <= 2)
            grid1[i][y+1]++;
        }
      }
    if (test == 0)
      break;
    printf("=\n");
    print_grid(grid);
  }
}