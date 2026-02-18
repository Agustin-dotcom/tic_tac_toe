#include<stdio.h>

void display_matrix(int matrix[n][n], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j]==0){
				printf("  ");
			}
			if(matrix[i][j]==1){
				printf("x ");
			}
		}
		printf("\n");
	}
}
/*
(1) Displays the matrix which is the board, grid of the tic tac toe
(2) Initializes all values to 0 which means nobody put a circle or a cross
    in that cell
*/
void main(){
	int n = 3;
	int matrix[n][n] = new int[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			matrix[i][j] = 0; // (2)
		}
	}
	display_matrix(matrix,n); // (1)
}

