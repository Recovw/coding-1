#include <stdio.h>
#include <ctype.h>


// buat game labirin

/*
0 = buat player jalan
1 = tembok
2 = posisi player
3 = pintu keluat 
*/
  
int maze[11][10] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{2, 0, 0, 1, 0, 0, 0, 0, 0, 1}, 
	{1, 1, 0, 0, 0, 1, 1, 1, 0, 1}, 
	{1, 0, 0, 1, 0, 1, 0, 0, 0, 1}, 
	{1, 0, 1, 1, 0, 1, 0, 1, 0, 1}, 
	{1, 0, 1, 0, 0, 1, 0, 1, 0, 1}, 
	{1, 0, 0, 0, 1, 1, 0, 1, 0, 1}, 
	{1, 0, 1, 1, 1, 1, 0, 1, 0, 1}, 
	{1, 0, 1, 0, 0, 0, 0, 1, 0, 1}, 
	{1, 0, 0, 0, 1, 1, 0, 1, 0, 3},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	
};
	
void printMaze( int maze[11][10] )	{
	printf("@ = PLAYER\n");
	printf("$ = EXIT\n");
	printf("================================\n");
	printf("|| PENCET W/A/S/D UNTUK GERAK ||\n");
	printf("================================\n");


	for(int i = 0; i < 11; i++) {
		for (int j = 0; j < 10; j++) {
			if (maze[i][j] == 0) {
				printf("   ");
			} else if (maze[i][j] == 1) {
				printf(" # ");
			} else if (maze[i][j] == 2) {
			    printf(" @ ");
			} else if (maze[i][j] == 3) {
				printf(" $ ");
			}
		}
	printf("\n\n");
	}
}
	
void playerGerak(int maze [11][10], char gerak, int *x, int *y) {
	int newX = *x, newY = *y;
		gerak = toupper(gerak);
	if (gerak == 'W' ) newX--;
	else if(gerak == 'S') newX++;
	else if(gerak == 'A') newY--;
	else if(gerak == 'D') newY++;
	gerak = toupper(gerak);
	
	if (maze[newX][newY] == 0 || maze[newX][newY] == 3) {
		maze[*x][*y] = 0;
		*x = newX;
		*y = newY;
		maze[*x][*y] = 2;
	}
}

int cekMenang(int x, int y, int maze[11][10]) {
	printf("Pemain berada di posisi (%d, %d)\n", x, y);
	return maze[x][y] == 3;
	
}

int main () {
	
	//BUAT GAME LABIRIN
	int x = 1, y = 1;
	char gerak;
	
	printf("SELAMAT DATANG DI GAME LABIRINTH!!!");
	
	while (1) {
		
		printMaze(maze);
		printf("Masukkan W/A/S/D: ");
		scanf(" %c", &gerak);
		playerGerak(maze, gerak, &x, &y);
		
		if (cekMenang(x, y, maze)) {
			printf("SELAMAT ANDA TELAH MENANG!!!\n");
			break;
		}
		
	}
	
	
	return 0;
}
