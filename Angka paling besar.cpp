#include <stdio.h>

int paling_Besar(int a, int b, int c, int d, int e, int f, int g, int h);

int main ()
{
	
	int a, b, c, d, e, f, g, h;
	
	
	printf("Ketik 8 angka secara acak: \n");
	scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
	
	int hasil = paling_Besar(a, b, c, d, e, f, g, h);
	printf("Angka yang paling besar adalah: %d ", hasil);
	
	return 0;
}

int paling_Besar(int a, int b, int c, int d, int e, int f, int g, int h)
{
	int besar = a;
	
	if (b > besar) 
	{
		besar = b;
	}
	if (c > besar) 
	{
		besar = c;
	}	
	if (d > besar) 
	{
		besar = d;
	}
	if (e > besar) 
	{
		besar = e;
	}
	if (f > besar) 
	{
		besar = f;
	}
	if (g > besar) 
	{
		besar = g;
	}
	if (h > besar) 
	{
		besar = h;
	}
	

   return besar;
}
