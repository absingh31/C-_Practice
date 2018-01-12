#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    // char **matrix;
    
    scanf("%d", &n);
    char matrix[n][n];

    // matrix = (char**)calloc(n, sizeof(char*));
    // for(int i=0; i<n; i++)
    //         matrix[i] = (char*)calloc(n, sizeof(char));
        
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            scanf("%s", &matrix[i][j]);
    }
    
    // for(int i=0; i<n; i++)
    // {
    //         if(isupper(matrix[i][i]))
    //                 matrix[i][i] = tolower(matrix[i][i]);
    //         else if(islower(matrix[i][i]))
    //                 matrix[i][i] = toupper(matrix[i][i]);
    //         if(isupper(matrix[n-i-1][i]) && (n-i-1)!=i)
    //                 matrix[n-i-1][i] = tolower(matrix[n-i-1][i]);
    //         else if(islower(matrix[n-i-1][i]) && (n-i-1)!=i)
    //                 matrix[n-i-1][i] = toupper(matrix[n-i-1][i]);
    // }
    for(int i=0; i<n; i++)
    {
            for(int j=0; j<n; j++)
                    printf("%c ", matrix[i][j]);
            printf("\n");
    }
    
   // free(matrix);
    return 0;
}
