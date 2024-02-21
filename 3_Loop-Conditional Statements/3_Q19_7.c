#include <stdio.h>
int main()
{
	int row,col,line,num=1,N=10;
    int matrix[10][10];
    for(line=0;line<(N+1)/2;line++)
	{
        for(col=line;col<N-line;col++)
            matrix[line][col]=num++;
        
        for(row=line+1;row<N-line;row++)
            matrix[row][N-1-line]=num++;
        
        for(col= N-2-line;col>=line;col--)
            matrix[N-1-line][col]=num++;
        
        for(row=N-2-line;row>line;row--)
            matrix[row][line]=num++;
    }

     for(row=0;row<N;row++)
	 {
        for(col=0;col<N;col++)
		{
            printf("%d\t",matrix[row][col]);
        }
        printf("\n\n");
    }
    return 0;
}

