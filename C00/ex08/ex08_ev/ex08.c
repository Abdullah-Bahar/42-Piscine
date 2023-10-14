#include <unistd.h>

void ft_putchar(char * digit, int n)
{
	write (1, digit, n);
}


denwme(char * digit, int n, int push, int reqIn, int one)
{	
	int i;/*start*/
	
	if (one == 1)
	{
		// ayarlama yapilmali
	}	
	while (push <= (11 - n) && reqIn < n - 1)
	{
		i = reqIn;
		while (i < n)
		{
			digit[i] = digit [i] + 1;
			i++;
		}
		deneme(digit, n, push, reqIn++, 0);
		push++;		
	}
}

void ft_print_combn(int n)
{
	int i;		// baslangic deger atamasinin kontrolu
	char digit[n];
	int push;
	int reqIn;		// kacinci indexten baslayacagi  (req index)
	
	digit[0] = '0';
	i = 1;	
	while(i < n)	// ilk deger atamasi
	{
		digit[i] = digit[i - 1] + 1;
		i++;
	}		
	if (n == 1)
		printZero(digit); // tek basamakli ise
	else
	{
		push = 1;
		reqFIn = n - 2;
		deneme(digit, n, push, reqIn, 1);	// baslangis degeri icin ozel bir cagrim
		reqIn = n - 1;
		deneme(digit, n, push, reqIn, 0);	// geri kalanlari icin
	}		
}


////////////////////////////////////////////////////////




void start(char * digit, int n)   // simdilik kullanilmiyor
{ 	
 	// asagisinin akibeti belli degil
 	int j;
	int i; 	// en son hangi karaktere kadar gidecek (0,1,..,8,9)
	
	i = 9;
	j = n - 1; // hangi indexte calisacagimizi gostermekte
	i = i - ((n - j);	// i formülü = indexin en fazla kaç karakter gitmesi gerektiginin formulu
	
	while (digit[j] <= ((10 % i) + 48))
	{
		ft_putchar(digit, n)
		digit[j]++;
	}
	prev(digit, n, j, i);
	
	/*	digit[j - 1] = digit[j - 1] + 1;	// oncesini bir arttir
		digit[j] = digit[j - 1] + 1;		// oncesinin sonrasini, öncesinin bir fazlası yap
	*/	
	
		while (digit[j] <= ((10 % i) + 48))
	{
		
	}
}


int main()
{

		
	return 0;
}