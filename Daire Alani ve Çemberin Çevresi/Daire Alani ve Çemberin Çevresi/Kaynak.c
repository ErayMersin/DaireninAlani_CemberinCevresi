#include<stdio.h>
#include<stdlib.h>

int main() {

//Dairenin Alani ve Çemberin Çevresini Hesaplama
//Dairenin Alani=pi*r*r
//Çemberin Çevresi=2*pi*r;
	float alan, cevre, r;
	double pi;
	int islem;
	
	pi = 3.14159265359;
	
	printf("Dairenin Alani ya da Cemberin Cevresini Hesapi Yapan Program\n");

	printf("islem seciniz...\n1-)Dairenin Alani.\n2-)Cemberin Cevresi.\n");
	printf("islem: ");
	scanf_s("%d", &islem);

	switch (islem)
	{
	case 1: printf("Yari Capi Giriniz: ");
		scanf_s("%f", &r);
		alan = pi *r*r; printf("Dairenin Alani=%f", alan);
		break;
	case 2: printf("Yari Capi Giriniz: ");
		scanf_s("%f", &r);
		cevre = 2 * pi * r; printf("Cemberin Cevresi=%f", cevre);
		break;
	default: printf(" ");
		break;
	}

	return 0;
   }