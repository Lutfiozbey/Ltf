#include <stdio.h>
#include <conio.h>
#include <locale.h>
// klavyeden girilen say�n�n asal veya asal olmad���n� kontrol eden kod.
main()
{
    setlocale(LC_ALL, "Turkish"); 
    int sayi=0;
    int sayac=0;
    printf("bir sayi girin  :");
    scanf("%d",&sayi);
    for(int i=2;i<sayi;i++)
      if(sayi%i==0)
      sayac++;
      
        if(sayac==0)
          printf("girilen say� asal");
        else
		printf("girilen sayi asal de�il");

    
	    
getch();
}
