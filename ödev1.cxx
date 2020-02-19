/*
 * ödev1.cxx
 * 
 * Bu program [3-15] arasındaki tek sayılar boyutunda düz üçgen, ters üçgen ve [5-15] arasındaki tek sayılar boyutunda elmas basar.
 * 
 * Muhammed Furkan KAÇMAZ
 * 14/02/2020
 */


#include <iostream>

using namespace std;

void duzUcgen(int boyut){

	int x, y, yildiz=1, bosluk=(boyut-1)/2;//'bosluk' değişkeni ilk yıldızı basarken kaç boşluk bırakılacağını belirtir.'x' ve 'y' değişkenleri döngü sayaçlarıdır
	
	for(x=0;x<(boyut+1)/2;x++){
		for(y=0;y<bosluk;y++){//Boşlukları basan döngü
			cout << " ";
			}
			
		for(y=0;y<yildiz;y++){//Yıldızları basan döngü
			cout << "*";
			}
		
		cout << endl;
		yildiz += 2;//Üçgenin oluşturduğu şekil piramit şeklinde olduğu için her seferde 2 şer tane artacak.
		bosluk -= 1;
		}
	}


void tersUcgen(int boyut){

	int x=0, y=0, bosluk=0, z=(boyut+1)/2;//'z' değişkeni piramitin yüksekliğinin kaç satır olacağını tutar.
			
	while(z>0){//Üçgenin kaç satır olacağını belirleyen döngü oluşturuldu.
		
		while(bosluk<=y){//Boşluk basan döngü
			cout << " ";
			bosluk++;
			}
		
		while(x<boyut){//Yıldız basan döngü
			cout << "*";
			x++;
			}
			
		cout << endl;
		x=0;
		bosluk=0;
		y++;
		z--;
		boyut-=2;
		}
	}



void elmas(int boyut){
	
	duzUcgen(boyut);
	tersUcgen(boyut-2);
}


int main()
{
	int sec=4, i, boyut=0, k=2, sayac;
	
	cout << "1 : Duz Ucgen\n2 : Ters Ucgen\n3 : Elmas\n0 : Cikis\n" ;
	sayac=3;//Seçimi 3 defa hatalı girme hakkı tanıyan değişken
	while(sec!=0&&sec!=1&&sec!=2&&sec!=3&&sayac!=0){//Seçimin doğru seçilmesi için döngü oluşturuldu.
	
		cout << "\nSeciminiz nedir?\n" ;
		cin >> sec;
		
		if(sec!=0&&sec!=1&&sec!=2&&sec!=3){//Seçim geçersizse
			sayac--;
			cout << "Gecersiz secim girdiniz!!" << endl << sayac << " hakkiniz kaldi\n\n" ;
		}
	}
	
	if(sayac==0)//Eğer kullanıcı seçimi 3 defa geçersiz girdiyse
	exit(1);//Programı sonlandır.

	sayac=0;
	
	if(sec == 1){//Seçim 1 se
		i=3;
		while(i>0&&boyut!=3&&boyut!=5&&boyut!=7&&boyut!=9&&boyut!=11&&boyut!=13&&boyut!=15){//İlk seferde döngüye girilmesi için 'boyut' değişkeni sıfır, 'i' değişkeni üç olarak belirlendi.
		
			cout << "Duz ucgenin boyutu kac birimlik olsun?\n\n";
			cin >> boyut;
			for(int j=3;j<=15;j += 2){//Boyutun geçerli bir sayı olup olmadığına bakan döngü('sayac' değişkeni döngü sonunda sıfırsa geçersiz sayı girilmiştir.) 
				if(boyut == j)
				sayac++;
			}
			if(sayac==0)
			i--;//'i' değişkeni kalan seçim hakkını temsil eder.
			
			if(i==k){
				cout << "Gecersiz boyut girdiniz!!" << endl << i << " hakkiniz kaldi\n\n" ;
				k--;//'k' değişkeni geçersiz değer girilip girilmediğini kontrol eder.
			}
		}
		if(i!=0)//Eğer seçim hakkı bitmediyse
		duzUcgen(boyut);//Fonksiyonunu çağır
	}
	if(sec == 2){
		i=3;
		sayac=0;
		k=2;
		
		while(i>0&&boyut!=3&&boyut!=5&&boyut!=7&&boyut!=9&&boyut!=11&&boyut!=13&&boyut!=15){//İlk seferde döngüye girilmesi için 'boyut' değişkeni sıfır, 'i' değişkeni üç olarak belirlendi.
			cout << "Ters ucgenin boyutu kac birimlik olsun?\n\n";
			cin >> boyut;
			for(int j=3;j<=15;j += 2){//Boyutun geçerli bir sayı olup olmadığına bakan döngü('sayac' değişkeni döngü sonunda sıfırsa geçersiz sayı girilmiştir.) 
				if(boyut == j)
				sayac++;
			}
			if(sayac==0)
			i--;//'i' değişkeni kalan seçim hakkını temsil eder.
			
			if(i==k){
				cout << "Gecersiz boyut girdiniz!!" << endl << i << " hakkiniz kaldi\n\n" ;
				k--;//'k' değişkeni geçersiz değer girilip girilmediğini kontrol eder.
			}
		}
		if(i!=0)
		tersUcgen(boyut);
	}
		
	
	if(sec == 3){
		i=3;
		k=2;
		sayac=0;
		while(i>0&&boyut!=5&&boyut!=7&&boyut!=9&&boyut!=11&&boyut!=13&&boyut!=15){//İlk seferde döngüye girilmesi için 'boyut' değişkeni sıfır, 'i' değişkeni üç olarak belirlendi.
		
		cout << "Elmasin boyutu kac birimlik olsun?\n\n";
		cin >> boyut;
	for(int j=5;j<=15;j += 2){//Boyutun geçerli bir sayı olup olmadığına bakan döngü('sayac' değişkeni döngü sonunda sıfırsa geçersiz sayı girilmiştir.) 
				if(boyut == j)
				sayac++;
			}
			if(sayac==0)
			i--;//'i' değişkeni kalan seçim hakkını temsil eder.
			
			if(i==k){
				cout << "Gecersiz boyut girdiniz!!" << endl << i << " hakkiniz kaldi\n\n" ;
				k--;//'k' değişkeni geçersiz değer girilip girilmediğini kontrol eder.
			}
		}
		if(i!=0)
		elmas(boyut);
	}
		
	
	
	return 0;
}

