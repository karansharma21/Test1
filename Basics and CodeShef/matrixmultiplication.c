# include <stdio.h>
# include <conio.h>
void main()
{
  int mata[10][10], matb[10][10], matc[10][10] ;
  int i, j, k, row1, col1, row2, col2 ;
  printf("Enter the order of first matrix : ") ;
  scanf("%d %d", &row1, &col1) ;
  printf("\nEnter the order of second matrix : ") ;
  scanf("%d %d", &row2, &col2) ;
  if(col1 == row2)
  {
    printf("\nEnter the elements of first matrix : \n\n") ;
    for(i = 0 ; i < row1 ; i++)
      for(j = 0 ; j < col1 ; j++)
        scanf("%d", &mata[i][j]) ;
    printf("\nEnter the elements of second matrix : \n\n") ;
    for(i = 0 ; i < row2 ; i++)
      for(j = 0 ; j < col2 ; j++)
        scanf("%d", &matb[i][j]) ;
    for(i = 0 ; i < row1 ; i++)
    {
      for(j = 0 ; j < col2 ; j++)
      {
        matc[i][j] = 0 ;
        for(k = 0 ; k < col1 ; k++)
          matc[i][j] = matc[i][j] + mata[i][k] * matb[k][j] ;
      }
    }
    printf("\nThe resultant matrix is : \n\n") ;
    for(i = 0 ; i < row1 ; i++)
    {
      for(j = 0 ; j < col2 ; j++)
      {
        printf("%d \t", matc[i][j]) ;
      }
      printf("\n") ;
    }
  }
  else
    printf("\nMatrix Multiplication is not possible ...") ;
  getch() ;
}
