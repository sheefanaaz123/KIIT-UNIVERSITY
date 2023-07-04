#include <stdio.h>
#include <string.h>

char X[10] = "ABACA";
char Y[10] = "BCBBA";
char b[20][20];
int i, j, m, n;
int LCS_table[20][20];

void function_LCS() {
  m = strlen(X);
  n = strlen(Y);
  for (i = 0; i <= m; i++){
  LCS_table[i][0] = 0;
  }
  for (i = 0; i <= n; i++){
  LCS_table[0][i] = 0;
  }

  for (i = 1; i <= m; i++){
    for (j = 1; j <= n; j++){
      if (X[i - 1] == Y[j - 1]){
        LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
      }
      else if (LCS_table[i - 1][j] >= LCS_table[i][j - 1]){
        LCS_table[i][j] = LCS_table[i - 1][j];
      }
      else{
        LCS_table[i][j] = LCS_table[i][j - 1];
      }
    }
  }

  int index = LCS_table[m][n];
  char LCS[index + 1];
  LCS[index] = '\0';

  int i = m, j = n;
  while (i > 0 && j > 0)
  {
    if (X[i - 1] == Y[j - 1])
    {
      LCS[index - 1] = X[i - 1];
      i--;
      j--;
      index--;
    }

    else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
      i--;
    else
      j--;
  }

  printf("String 1 : %s \nString 2 : %s \n", X, Y);
  printf("Longest substring is : %s", LCS);
}

int main()
{
	
  function_LCS();
  
  return 0;
}
