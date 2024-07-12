#include <stdio.h>
#include <stdlib.h>

// Benim Deðiþkenler
int altinmiktar,almialtin,alisaltin,madenmiktar,kfmiktar,tarlamiktar,askermiktar,odunmiktar,besinmiktar,almikf;
int aliskf,almitarla,alistarla,besinlealabilecegin,altinlaalabilecegin,alabileceginaskermiktar,almakistediginasker;
int eklekf,eklemaden,ekletarla,cikarmaden,cikarkf,cikartarla;
int nklasker,menu2,menu,ekleasker;
float cemilaskersayisi,ahmetaskersayisi,cemilaskergucu,ahmetaskergucu,sonuc,bol,kalanasker,coklukbonusu;
int cemilaskerseviyesi,ahmetaskerseviyesi,cemilduvarseviyesi,ahmetduvarseviyesi,ahmetduvarbonusi,cemilduvarbonusi;
int madensv,kfsv,tarlasv;
// Cemilin
int caltinmiktar,calmialtin,calisaltin,cmadenmiktar,ckfmiktar,ctarlamiktar,caskermiktar,codunmiktar,cbesinmiktar,calmikf;
int caliskf,calmitarla,calistarla,cbesinlealabilecegin,caltinlaalabilecegin,calabilecegincaskermiktar,calmakistediginasker;
int ceklekf,ceklemaden,ekletarla,ccikarmaden,ccikarkf,ccikartarla;
int cnklasker,cmenu2,cmenu;
float cemilaskersayisi,ahmetaskersayisi,cemilaskergucu,ahmetaskergucu,csonuc,cbol,ckalanasker,ccoklukbonusu;
int cemilaskerseviyesi,ahmetaskerseviyesi,cemilduvarseviyesi,ahmetduvarseviyesi,ahmetduvarbonusi,cemilduvarbonusi;
int cmadensv,ckfsv,ctarlasv;




int main(int argc, char *argv[]) {
	
	
	system ("COLOR 70");

	printf("Ahmet Altin Miktarinizi Giriniz: ");
	scanf("%d",&altinmiktar);
	
	printf("Ahmet Odun Miktarinizi Giriniz: ");
	scanf("%d",&odunmiktar);
	
	printf("Ahmet Besin Miktarinizi Giriniz: ");
	scanf("%d",&besinmiktar);
	
	// Bunlar sabir bunlarla baþta uðraþmicam ondan
	// üstekiler kalýyor çünkü onu kullanýcýya 600 birim veriyorum daðýtýyor
	
	
	askermiktar=0;
    madenmiktar=0;
	kfmiktar=0;
	tarlamiktar=0;
	ahmetaskerseviyesi=1;
	ahmetduvarseviyesi=1;
	madensv=1;
	kfsv=1;
	tarlasv=1;
	
	/// Cemil Verileri Giriliyor
	
	printf("\nCemil Altin Miktarinizi Giriniz: ");
	scanf("%d",&caltinmiktar);
	
	printf("Cemil Odun Miktarinizi Giriniz: ");
	scanf("%d",&codunmiktar);
	
	printf("Cemil Besin Miktarinizi Giriniz: ");
	scanf("%d",&cbesinmiktar);
	
	caskermiktar=0;
	cmadenmiktar=0;          // Bu 0 lara baþta deðer vermesem acaba kendi sýfýr alýormuydu alýyordu ama yazdým gitti
	ckfmiktar=0;
	ctarlamiktar=0;
	cemilaskerseviyesi=1;
	cemilduvarseviyesi=1;
	cmadensv=1;
	ckfsv=1;
	ctarlasv=1;

	
	printf("\n\nAhmet Basliyor");
	printf("\n");
    system("pause");
	
	donus5:
	donus:
    // asker miktar savaþtan sonra +-1 hata veriyor onun nedeni aþaðýd kalan asker float asker miktari int o yüzden sayýyý yuvarlýyor
	system("CLS");
	printf("AHMET  AHMET  AHMET\n\n");
	printf("\nKalan Altin: %d",altinmiktar);    	printf("          Toplam Maden Sayisi: %d",madenmiktar);             printf("                              Asker Seviyen: %d",ahmetaskerseviyesi); 
	printf("\nKalan Odun: %d",odunmiktar);          printf("           Toplam Kereste Fabrkasi Sayisi: %d",kfmiktar);    printf("                   Duvar Seviyen: %d",ahmetduvarseviyesi); 
	printf("\nKalan Besin: %d",besinmiktar);	    printf("          Toplam Tarla Sayisi: %d",tarlamiktar);              printf("                              Maden Seviyen: %d",madensv);
	printf("\nKalan Asker: %d",askermiktar);        printf("                                                              Tarla Seviyen: %d\n",tarlasv);
	                                                printf("                                                                            Kereste F. Seviyen: %d",kfsv);
	printf("\n\nYapmak Istediginiz Islemi Secin: \n");                              
	printf("1-) Madden Alma\n");
	printf("2-) Merkez Savasi\n");                              
	printf("3-) Bolge Savasi\n");
	printf("4-) Bolge Ekle-Cikar\n");                
	printf("5-) Merkez Asker Nakli\n");
	printf("6-) Seviye Gelistirme\n");
	printf("7-) Tur Atla\n");
	
	scanf("%i",&menu);
	system("CLS");
	switch(menu)
    {
    case 1: system ("COLOR 70");
	printf("1-) Madden Alma\n\n");
	
	system("CLS");
	
	printf("***Satin Alma Yeri***\n");
	
	almialtin=odunmiktar/20;
	if(almialtin+madenmiktar>100)
	{
		almialtin=100-madenmiktar;
	}
	
    printf("\nNe Kadar Maden Almak Istiyosun(%d):  ",almialtin); scanf("%d",&alisaltin);  
    if(alisaltin>almialtin)
	{
		printf("Bu kadar Maden Alamazsin\n\n"); 
	}
	
	else if(alisaltin*2<=odunmiktar)
	{
		odunmiktar= odunmiktar - alisaltin*20;
		madenmiktar= madenmiktar+alisaltin;
	}
	
	almikf=besinmiktar/20;
	if(almikf+kfmiktar>100)
	{
		almikf=100-kfmiktar;
	}
	
    printf("Ne Kadar Keresete Fabrikasi Almak Istiyosun(%d):  ",almikf); scanf("%d",&aliskf);  
    
	if(aliskf>almikf)
	{
		printf("Bu kadar Kereste Fabrikasi Alamazsin\n\n");
	}

	else if(aliskf*2<=besinmiktar)
	{
		besinmiktar= besinmiktar - aliskf*20;
		kfmiktar= kfmiktar+aliskf;
	}
	
	almitarla=altinmiktar/20;
	if(almitarla+tarlamiktar>100)
	{
		almitarla=100-tarlamiktar;
	}
	
    printf("Ne Kadar Tarla Almak Istiyosun(%d):  ",almitarla); scanf("%d",&alistarla);  
    if(alistarla>almitarla)
	{
		printf("Bu kadar Tarla Alamazsin\n\n");
	}
	else if(alistarla*2<=altinmiktar)   
	{
		altinmiktar= altinmiktar - alistarla*20;
		tarlamiktar= tarlamiktar+alistarla;
	}
	
	altinlaalabilecegin=altinmiktar/20;
	besinlealabilecegin=besinmiktar/20;

	if(besinlealabilecegin>altinlaalabilecegin)
	{
		alabileceginaskermiktar=altinlaalabilecegin;
		
		printf("Ne Kadar Asker Almak Istiyosun: (%d):  ",alabileceginaskermiktar);  scanf("%d",&almakistediginasker);  
		
		if(almakistediginasker*20>altinmiktar)   
		printf("Bu Kadar ASker Alamazsin (Altin Eksik)\n\n");
	    else if(almakistediginasker*20<=altinmiktar) 
	    {
	    	altinmiktar=altinmiktar - almakistediginasker*20;
	    	besinmiktar=besinmiktar - almakistediginasker*20;
			
			askermiktar=askermiktar+almakistediginasker;
		}
	}

    if(altinlaalabilecegin>=besinlealabilecegin)  
	{
		alabileceginaskermiktar=besinlealabilecegin;
		
		printf("Ne Kadar Asker Almak Istiyosun: (%d):  ",alabileceginaskermiktar);  scanf("%d",&almakistediginasker);
		
		if(almakistediginasker*20>altinmiktar)
		printf("\n Bu Kadar ASker Alamazsin (Altin Eksik)\n\n");
	    else if(almakistediginasker*20<=altinmiktar)    
	    {
	    	altinmiktar=altinmiktar - almakistediginasker*20;
	    	besinmiktar=besinmiktar - almakistediginasker*20;
			
			askermiktar=askermiktar+almakistediginasker;
		}
	}
	
	system("CLS");
	
	printf("***Sonuc***");
	printf("\nKalan Altin: %d",altinmiktar);
	printf("\nKalan Odun: %d",odunmiktar);
	printf("\nKalan Besin: %d",besinmiktar);
	
	printf("\nToplam Maden Sayisi: %d",madenmiktar);
	printf("\nToplam Kereste Fabrkasi Sayisi: %d",kfmiktar);
	printf("\nToplam Tarla Sayisi: %d",tarlamiktar);
	printf("\nToplam Asker Sayisi: %d",askermiktar);    
	printf("\n");
    system("pause");
	goto donus;
	break;
	

	
	case 2:  // SAvaþlarda altta girdiðin miktar üstteki deðerlrideðiþtiriyor
	system ("COLOR 70");
	// Eðer CEmil Bana saldirirsa Merkezden merkeze
	
	printf("2-) Savas\n\n");
	printf("Cemil Asker Sayisini Giriniz: ");
	scanf("%f",&cemilaskersayisi);

	
	printf("\n\nAhmet Asker Sayisini Giriniz: ");
	scanf("%f",&ahmetaskersayisi);
                    	
	switch(ahmetduvarseviyesi)
	{
		case 0: ahmetduvarbonusi=0;break;
		case 1: ahmetduvarbonusi=10;break;
		case 2: ahmetduvarbonusi=25;break;
		case 3: ahmetduvarbonusi=30;break;
		case 4: ahmetduvarbonusi=35;break;
		case 5: ahmetduvarbonusi=40;break;
		case 6: ahmetduvarbonusi=45;break;
		case 7: ahmetduvarbonusi=50;break;
		case 8: ahmetduvarbonusi=55;break;         
		case 9: ahmetduvarbonusi=65;break;   
		case 10: ahmetduvarbonusi=70;break;
	
	
	}
	
/*	switch(cemilduvarseviyesi)
	{
		case 0: cemilduvarbonusi=0;break;
		case 1: cemilduvarbonusi=10;break;
		case 2: cemilduvarbonusi=25;break;
		case 3: cemilduvarbonusi=30;break;
		case 4: cemilduvarbonusi=35;break;
		case 5: cemilduvarbonusi=40;break;
		case 6: cemilduvarbonusi=45;break;
		case 7: cemilduvarbonusi=50;break;
		case 8: cemilduvarbonusi=55;break;
		case 9: cemilduvarbonusi=65;break;
		case 10: cemilduvarbonusi=70;break;
	}
*/	
	
	
	 switch(cemilaskerseviyesi)   
	{
		case 1: cemilaskergucu=(cemilaskersayisi*5); break;  //  +(cemilaskersayisi*5*cemilduvarbonusi/100) Cemil saldýrýyor diye duvar bonus sildim
		case 2: cemilaskergucu=(cemilaskersayisi*5.5); break;
		case 3: cemilaskergucu=(cemilaskersayisi*6); break;
		case 4: cemilaskergucu=(cemilaskersayisi*6.5); break;
		case 5: cemilaskergucu=(cemilaskersayisi*7); break;
		case 6: cemilaskergucu=(cemilaskersayisi*7.5); break;
		case 7: cemilaskergucu=(cemilaskersayisi*8); break;
		case 8: cemilaskergucu=(cemilaskersayisi*8.5); break;
		case 9: cemilaskergucu=(cemilaskersayisi*9); break;
		case 10: cemilaskergucu=(cemilaskersayisi*9.5); break;
		
	}
	
	
	switch(ahmetaskerseviyesi)  
	{
		case 1: ahmetaskergucu=(ahmetaskersayisi*5)+(ahmetaskersayisi*5*ahmetduvarbonusi/100); break;  
		case 2: ahmetaskergucu=(ahmetaskersayisi*5.5)+(ahmetaskersayisi*5.5*ahmetduvarbonusi/100); break;
		case 3: ahmetaskergucu=(ahmetaskersayisi*6)+(ahmetaskersayisi*6*ahmetduvarbonusi/100); break;
		case 4: ahmetaskergucu=(ahmetaskersayisi*6.5)+(ahmetaskersayisi*6.5*ahmetduvarbonusi/100); break;
		case 5: ahmetaskergucu=(ahmetaskersayisi*7)+(ahmetaskersayisi*7*ahmetduvarbonusi/100); break;
		case 6: ahmetaskergucu=(ahmetaskersayisi*7.5)+(ahmetaskersayisi*7.5*ahmetduvarbonusi/100); break;
		case 7: ahmetaskergucu=(ahmetaskersayisi*8)+(ahmetaskersayisi*8*ahmetduvarbonusi/100); break;
		case 8: ahmetaskergucu=(ahmetaskersayisi*8.5)+(ahmetaskersayisi*8.5*ahmetduvarbonusi/100); break;
		case 9: ahmetaskergucu=(ahmetaskersayisi*9)+(ahmetaskersayisi*9*ahmetduvarbonusi/100); break;
		case 10: ahmetaskergucu=(ahmetaskersayisi*9.5)+(ahmetaskersayisi*9.5*ahmetduvarbonusi/100); break;
		
	}
	
	
	
	if(cemilaskersayisi>ahmetaskersayisi)
	{
	coklukbonusu= (cemilaskersayisi/ahmetaskersayisi)*8/100;
	}                                                         
	else if(ahmetaskersayisi>cemilaskersayisi)                  
	{                                                           
	coklukbonusu= (ahmetaskersayisi/cemilaskersayisi)*8/100;}
	
	system("CLS");
	
	sonuc=ahmetaskergucu-cemilaskergucu;
	if(sonuc>0)
	{
	printf("Ahmet Kazandi\n");
	bol= ahmetaskerseviyesi+4;
	kalanasker=sonuc/bol;
	kalanasker=kalanasker + (kalanasker*coklukbonusu);
	if (kalanasker>ahmetaskersayisi)
	{
	printf("Kayip Yok: Kalan Asker= %.0f", ahmetaskersayisi);
	}
	else if(kalanasker<=ahmetaskersayisi)
	{
	printf("Kalanasker= %.0f",kalanasker);	
	}
	
	askermiktar=kalanasker;
	}
	
	else if(sonuc<0)
	{
	printf("Cemil Kazandi\n");
	bol= cemilaskerseviyesi+4;
	kalanasker= -sonuc/bol;
	kalanasker=kalanasker + (kalanasker*coklukbonusu);	
	if (kalanasker>cemilaskersayisi)
	{
	printf("Kayip Yok: Kalan Asker= %.0f", cemilaskersayisi);
	}
	else if(kalanasker<=cemilaskersayisi)
	{
	printf("Kalanasker= %.0f",kalanasker);	
	}
    
    askermiktar=0;
    
	}
	else if (sonuc==0)
	{
	printf("Berabere");
	askermiktar=0;
	}
	printf("\n");
    system("pause");
	goto donus;
	break;
		
		
	case 3:
	printf("\n Burasi hatali daha yapilmadi\n\n");
    system("pause");
	goto donus;
	break;	
	
	// Bölge alýp çýkarma için ekstra program yazýcam
	case 4:
	system ("COLOR 70");

    printf("Eklemek Istedigin Maden Sayisi: ");
	scanf("%d",&eklemaden);
	printf("Eklemek Istedigin Kereste F. Sayisi: ");
	scanf("%d",&eklekf);
	printf("Eklemek Istedigin Tarla Sayisi: ");
	scanf("%d",&ekletarla);
	printf("\nCikarmak Istedigin Maden Sayisi: ");
	scanf("%d",&cikarmaden);
	printf("Cikarmak Istedigin Kereste F. Sayisi: ");
	scanf("%d",&cikarkf);
	printf("Cikarmak Istedigin Tarla Sayisi: ");
	scanf("%d",&cikartarla);
	
	madenmiktar=madenmiktar+eklemaden-cikarmaden;
	kfmiktar=kfmiktar+eklekf-cikarkf;
	tarlamiktar=tarlamiktar+ekletarla-cikartarla;
	
	printf("\n");
	system("pause");
	goto donus;
	break;
	
	case 5:
	system ("COLOR 70");
	
	printf("Nakil Edilecek Asker Sayisi: ");
	scanf("%d",&nklasker);
	askermiktar=askermiktar-nklasker;
	
	printf("Merkeze asker ekle:");
	scanf("%d",&ekleasker);
	askermiktar=askermiktar+ekleasker;
	
	printf("\n");
	system("pause");
	goto donus;
	break;
	
	case 6: system ("COLOR 70");
	
	
	
	donus2:
	system("CLS");
		
	printf("Hangi Seyi Seviye Atlatmak Istersin");
    printf("\n1-) Asker Seviye Yukselt");
    switch(ahmetaskerseviyesi)
    {
    	case 1: printf("  Sonraki Seviye Icin 150 Altin -- 150 Besin Gerekli"); break;
    	case 2: printf("  Sonraki Seviye Icin 250 Altin -- 250 Besin Gerekli"); break;
    	case 3: printf("  Sonraki Seviye Icin 400 Altin -- 400 Besin Gerekli"); break;
    	case 4: printf("  Sonraki Seviye Icin 650 Altin -- 650 Besin Gerekli"); break;
    	case 5: printf("  Sonraki Seviye Icin 950 Altin -- 950 Besin Gerekli"); break;
    	case 6: printf("  Sonraki Seviye Icin 1350 Altin -- 1350 Besin Gerekli"); break;
    	case 7: printf("  Sonraki Seviye Icin 1850 Altin -- 1850 Besin Gerekli"); break;
    	case 8: printf("  Sonraki Seviye Icin 2300 Altin -- 2300 Besin Gerekli"); break;
    	case 9: printf("  Sonraki Seviye Icin 3000 Altin -- 3000 Besin Gerekli"); break;
	}
    
	printf("\n\n2-) Duvar Seviye Yukselt");
	switch(ahmetduvarseviyesi)
    {
    	case 1: printf("  Sonraki Seviye Icin 150 Altin -- 300 Odun Gerekli"); break;
    	case 2: printf("  Sonraki Seviye Icin 250 Altin -- 500 Odun Gerekli"); break;
    	case 3: printf("  Sonraki Seviye Icin 400 Altin -- 800 Odun Gerekli"); break;
    	case 4: printf("  Sonraki Seviye Icin 650 Altin -- 1300 Odun Gerekli"); break;
    	case 5: printf("  Sonraki Seviye Icin 950 Altin -- 1900 Odun Gerekli"); break;
    	case 6: printf("  Sonraki Seviye Icin 1350 Altin -- 2700 Odun Gerekli"); break;
    	case 7: printf("  Sonraki Seviye Icin 1850 Altin -- 3700 Odun Gerekli"); break;
    	case 8: printf("  Sonraki Seviye Icin 2300 Altin -- 4600 Odun Gerekli"); break;
    	case 9: printf("  Sonraki Seviye Icin 3000 Altin -- 6000 Odun Gerekli"); break;
	}
	
	
	printf("\n\n3-) Maden Seviye Yukselt");
	switch(madensv)
    {
    	case 1: printf("  Sonraki Seviye Icin 150 Odun -- 150 Besin Gerekli"); break;
    	case 2: printf("  Sonraki Seviye Icin 250 Odun -- 250 Besin Gerekli"); break;
    	case 3: printf("  Sonraki Seviye Icin 400 Odun -- 400 Besin Gerekli"); break;
    	case 4: printf("  Sonraki Seviye Icin 650 Odun -- 650 Besin Gerekli"); break;
    	case 5: printf("  Sonraki Seviye Icin 950 Odun -- 950 Besin Gerekli"); break;
    	case 6: printf("  Sonraki Seviye Icin 1350 Odun -- 1350 Besin Gerekli"); break;
    	case 7: printf("  Sonraki Seviye Icin 1850 Odun -- 1850 Besin Gerekli"); break;
    	case 8: printf("  Sonraki Seviye Icin 2300 Odun -- 2300 Besin Gerekli"); break;
    	case 9: printf("  Sonraki Seviye Icin 3000 Odun -- 3000 Besin Gerekli"); break;
	}
	
	
	printf("\n\n4-) Kereste F. Seviye Yukselt");
	switch(kfsv)
    {
    	case 1: printf("  Sonraki Seviye Icin 150 Altin -- 150 Besin Gerekli"); break;
    	case 2: printf("  Sonraki Seviye Icin 250 Altin -- 250 Besin Gerekli"); break;
    	case 3: printf("  Sonraki Seviye Icin 400 Altin -- 400 Besin Gerekli"); break;
    	case 4: printf("  Sonraki Seviye Icin 650 Altin -- 650 Besin Gerekli"); break;
    	case 5: printf("  Sonraki Seviye Icin 950 Altin -- 950 Besin Gerekli"); break;
    	case 6: printf("  Sonraki Seviye Icin 1350 Altin -- 1350 Besin Gerekli"); break;
    	case 7: printf("  Sonraki Seviye Icin 1850 Altin -- 1850 Besin Gerekli"); break;
    	case 8: printf("  Sonraki Seviye Icin 2300 Altin -- 2300 Besin Gerekli"); break;
    	case 9: printf("  Sonraki Seviye Icin 3000 Altin -- 3000 Besin Gerekli"); break;
	}
	
	printf("\n\n5-) Tarla Seviye Yukselt");
	switch(tarlasv)
    {
    	case 1: printf("  Sonraki Seviye Icin 150 Altin -- 150 Odun Gerekli"); break;
    	case 2: printf("  Sonraki Seviye Icin 250 Altin -- 250 Odun Gerekli"); break;
    	case 3: printf("  Sonraki Seviye Icin 400 Altin -- 400 Odun Gerekli"); break;
    	case 4: printf("  Sonraki Seviye Icin 650 Altin -- 650 Odun Gerekli"); break;
    	case 5: printf("  Sonraki Seviye Icin 950 Altin -- 950 Odun Gerekli"); break;
    	case 6: printf("  Sonraki Seviye Icin 1350 Altin -- 1350 Odun Gerekli"); break;
    	case 7: printf("  Sonraki Seviye Icin 1850 Altin -- 1850 Odun Gerekli"); break;
    	case 8: printf("  Sonraki Seviye Icin 2300 Altin -- 2300 Odun Gerekli"); break;
    	case 9: printf("  Sonraki Seviye Icin 3000 Altin -- 3000 Odun Gerekli"); break;
	}
	
	
	printf("\n\n6-) Ana Sayfaya Donmek icin\n");
	
	scanf("%d",&menu2);
	



	switch(menu2)
	{
		case 1:
			switch(ahmetaskerseviyesi)// ahmet içinse ahmetin asker sv si hmet is ahmetin
			{
				
				case 1:
					if(altinmiktar>=150 && besinmiktar>=150)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-150;
						besinmiktar= besinmiktar-150;
						ahmetaskerseviyesi=ahmetaskerseviyesi+1;
						system("pause"); goto donus; break;
						
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
			    	
					case 2:
					if(altinmiktar>=250 && besinmiktar>=250)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-250;
						besinmiktar= besinmiktar-250;
						ahmetaskerseviyesi=ahmetaskerseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
			    	
					case 3:
					if(altinmiktar>=400 && besinmiktar>=400)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-400;
						besinmiktar= besinmiktar-400;
						ahmetaskerseviyesi=ahmetaskerseviyesi+1;
						system("pause"); goto donus; break;
						
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}	
				case 4:
					if(altinmiktar>=650 && besinmiktar>=650)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-650;
						besinmiktar= besinmiktar-650;
						ahmetaskerseviyesi=ahmetaskerseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}    	
				case 5:
					if(altinmiktar>=950 && besinmiktar>=950)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-950;
						besinmiktar= besinmiktar-950;
						ahmetaskerseviyesi=ahmetaskerseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 6:
					if(altinmiktar>=1350 && besinmiktar>=1350)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-1350;
						besinmiktar= besinmiktar-1350;
						ahmetaskerseviyesi=ahmetaskerseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 7:
					if(altinmiktar>=1850 && besinmiktar>=1850)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-1850;
						besinmiktar= besinmiktar-1850;
						ahmetaskerseviyesi=ahmetaskerseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 8:
					if(altinmiktar>=2300 && besinmiktar>=2300)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-2300;
						besinmiktar= besinmiktar-2300;
						ahmetaskerseviyesi=ahmetaskerseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 9:
					if(altinmiktar>=3000 && besinmiktar>=3000)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-3000;
						besinmiktar= besinmiktar-3000;
						ahmetaskerseviyesi=ahmetaskerseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
			
			
			}
		
	system("pause");
	goto donus2;
	break;	
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	case 2: // Duvar seviyesi
	switch(ahmetduvarseviyesi)
	{
		
		case 1:
					if(altinmiktar>=150 && odunmiktar>=300)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-150;
						odunmiktar= odunmiktar-300;
						ahmetduvarseviyesi=ahmetduvarseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto donus2; break;
					}
					
					case 2:
					if(altinmiktar>=250 && odunmiktar>=500)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-250;
						odunmiktar= odunmiktar-500;
						ahmetduvarseviyesi=ahmetduvarseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto donus2; break;
					}
					
					case 3:
					if(altinmiktar>=400 && odunmiktar>=800)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-400;
						odunmiktar= odunmiktar-800;
						ahmetduvarseviyesi=ahmetduvarseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto donus2; break;
					}
					
					
					case 4:
					if(altinmiktar>=650 && odunmiktar>=1300)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-650;
						odunmiktar= odunmiktar-1300;
						ahmetduvarseviyesi=ahmetduvarseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto donus2; break;
					}
					
					
					case 5:
					if(altinmiktar>=950 && odunmiktar>=1900)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-950;
						odunmiktar= odunmiktar-1900;
						ahmetduvarseviyesi=ahmetduvarseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto donus2; break;
					}
					
					case 6:
					if(altinmiktar>=1350 && odunmiktar>=2700)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-1350;
						odunmiktar= odunmiktar-2700;
						ahmetduvarseviyesi=ahmetduvarseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto donus2; break;
					}
					
					case 7:
					if(altinmiktar>=1850 && odunmiktar>=3700)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-1850;
						odunmiktar= odunmiktar-3700;
						ahmetduvarseviyesi=ahmetduvarseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto donus2; break;
					}
					
					case 8:
					if(altinmiktar>=2300 && odunmiktar>=4600)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-2300;
						odunmiktar= odunmiktar-4600;
						ahmetduvarseviyesi=ahmetduvarseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Odun Yok\n");
						system("pause"); goto donus2; break;
					}
					
					case 9:
					if(altinmiktar>=3000 && odunmiktar>=6000)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-3000;
						odunmiktar= odunmiktar-6000;
						ahmetduvarseviyesi=ahmetduvarseviyesi+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Odun Yok\n");
						system("pause"); goto donus2; break;
					}
					
					
	}
	
	system("pause");
	goto donus2;
	break;
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	case 3:  // maden
	
		switch(madensv)// CEmil içinse cemilin asker sv si hmet is ahmetin
			{
				
				case 1:
					if(odunmiktar>=150 && besinmiktar>=150)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-150;
						besinmiktar= besinmiktar-150;
						madensv=madensv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
			    	
					case 2:
					if(odunmiktar>=250 && besinmiktar>=250)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-250;
						besinmiktar= besinmiktar-250;
						madensv=madensv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
			    	
					case 3:
					if(odunmiktar>=400 && besinmiktar>=400)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-400;
						besinmiktar= besinmiktar-400;
						madensv=madensv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}	
				case 4:
					if(odunmiktar>=650 && besinmiktar>=650)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-650;
						besinmiktar= besinmiktar-650;
						madensv=madensv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}    	
				case 5:
					if(odunmiktar>=950 && besinmiktar>=950)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-950;
						besinmiktar= besinmiktar-950;
						madensv=madensv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 6:
					if(odunmiktar>=1350 && besinmiktar>=1350)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-1350;
						besinmiktar= besinmiktar-1350;
						madensv=madensv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 7:
					if(odunmiktar>=1850 && besinmiktar>=1850)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-1850;
						besinmiktar= besinmiktar-1850;
						madensv=madensv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 8:
					if(odunmiktar>=2300 && besinmiktar>=2300)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-2300;
						besinmiktar= besinmiktar-2300;
						madensv=madensv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 9:
					if(odunmiktar>=3000 && besinmiktar>=3000)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-3000;
						besinmiktar= besinmiktar-3000;
						madensv=madensv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
			
			
			}
		
		
		system("pause");
	goto donus2;
	break;
	
	
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
	case 4:  // Odun
	
	
			switch(kfsv)// CEmil içinse cemilin asker sv si hmet is ahmetin
			{
				
				case 1:
					if(altinmiktar>=150 && besinmiktar>=150)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-150;
						besinmiktar= besinmiktar-150;
						kfsv=kfsv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
			    	
					case 2:
					if(altinmiktar>=250 && besinmiktar>=250)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-250;
						besinmiktar= besinmiktar-250;
						kfsv=kfsv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
			    	
					case 3:
					if(altinmiktar>=400 && besinmiktar>=400)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-400;
						besinmiktar= besinmiktar-400;
						kfsv=kfsv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}	
				case 4:
					if(altinmiktar>=650 && besinmiktar>=650)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-650;
						besinmiktar= besinmiktar-650;
						kfsv=kfsv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}    	
				case 5:
					if(altinmiktar>=950 && besinmiktar>=950)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-950;
						besinmiktar= besinmiktar-950;
						kfsv=kfsv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 6:
					if(altinmiktar>=1350 && besinmiktar>=1350)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-1350;
						besinmiktar= besinmiktar-1350;
						kfsv=kfsv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 7:
					if(altinmiktar>=1850 && besinmiktar>=1850)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-1850;
						besinmiktar= besinmiktar-1850;
						kfsv=kfsv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 8:
					if(altinmiktar>=2300 && besinmiktar>=2300)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-2300;
						besinmiktar= besinmiktar-2300;
						kfsv=kfsv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 9:
					if(altinmiktar>=3000 && besinmiktar>=3000)
					{
						printf("Seviye atlandi");
						altinmiktar= altinmiktar-3000;
						besinmiktar= besinmiktar-3000;
						kfsv=kfsv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto donus2; break;
					}
					
			
			
			}
		
		
		system("pause");
	goto donus2;
	break;	
	
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	case 5: // Tarla
		
		switch(tarlasv)// CEmil içinse cemilin asker sv si hmet is ahmetin
			{
				
				case 1:
					if(odunmiktar>=150 && altinmiktar>=150)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-150;
						altinmiktar= altinmiktar-150;
						tarlasv=tarlasv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto donus2; break;
					}
			    	
					case 2:
					if(odunmiktar>=250 && altinmiktar>=250)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-250;
						altinmiktar= altinmiktar-250;
						tarlasv=tarlasv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto donus2; break;
					}
			    	
					case 3:
					if(odunmiktar>=400 && altinmiktar>=400)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-400;
						altinmiktar= altinmiktar-400;
						tarlasv=tarlasv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto donus2; break;
					}	
				case 4:
					if(odunmiktar>=650 && altinmiktar>=650)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-650;
						altinmiktar= altinmiktar-650;
						tarlasv=tarlasv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto donus2; break;
					}    	
				case 5:
					if(odunmiktar>=950 && altinmiktar>=950)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-950;
						altinmiktar= altinmiktar-950;
						tarlasv=tarlasv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 6:
					if(odunmiktar>=1350 && altinmiktar>=1350)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-1350;
						altinmiktar= altinmiktar-1350;
						tarlasv=tarlasv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 7:
					if(odunmiktar>=1850 && altinmiktar>=1850)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-1850;
						altinmiktar= altinmiktar-1850;
						tarlasv=tarlasv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 8:
					if(odunmiktar>=2300 && altinmiktar>=2300)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-2300;
						altinmiktar= altinmiktar-2300;
						tarlasv=tarlasv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto donus2; break;
					}
					
						case 9:
					if(odunmiktar>=3000 && altinmiktar>=3000)
					{
						printf("Seviye atlandi");
						odunmiktar= odunmiktar-3000;
						altinmiktar= altinmiktar-3000;
						tarlasv=tarlasv+1;
						system("pause"); goto donus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto donus2; break;
					}
					
			
			
			}
		
		
		system("pause");
	goto donus2;
	break;	
	
	case 6:
		
	system("pause");
	goto donus;  
	break;		
	
	default:
	printf("Hatali Giris");
	system("pause");
	goto donus;
	break;			
	}   // Bura seviye geliþtirmenin sonu
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	system("pause");
	goto donus;                   /// Bu case7 srviye geliþtirmeninn sonu
	break;	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	case 7:  //  Tur atlar ve besinleri ekler
	system("pause");
	
	switch(madensv)
	{
		case 1: altinmiktar=altinmiktar+(madenmiktar*10);        break;
		case 2: altinmiktar=altinmiktar+(madenmiktar*12);        break;
		case 3: altinmiktar=altinmiktar+(madenmiktar*14);        break;
		case 4: altinmiktar=altinmiktar+(madenmiktar*16);        break;
		case 5: altinmiktar=altinmiktar+(madenmiktar*18);        break;
		case 6: altinmiktar=altinmiktar+(madenmiktar*20);        break;
		case 7: altinmiktar=altinmiktar+(madenmiktar*22);        break;
		case 8: altinmiktar=altinmiktar+(madenmiktar*24);        break;
		case 9: altinmiktar=altinmiktar+(madenmiktar*26);        break;
    	case 10: altinmiktar=altinmiktar+(madenmiktar*28);        break;					
	}
	switch(kfsv)
	{
		case 1: odunmiktar=odunmiktar+(kfmiktar*10);   break;
		case 2: odunmiktar=odunmiktar+(kfmiktar*12);   break;
		case 3: odunmiktar=odunmiktar+(kfmiktar*14);   break;
		case 4: odunmiktar=odunmiktar+(kfmiktar*16);   break;
		case 5: odunmiktar=odunmiktar+(kfmiktar*18);   break;
		case 6: odunmiktar=odunmiktar+(kfmiktar*20);  break;
		case 7: odunmiktar=odunmiktar+(kfmiktar*22);   break;
		case 8: odunmiktar=odunmiktar+(kfmiktar*24);   break;
		case 9: odunmiktar=odunmiktar+(kfmiktar*26);   break;
		case 10: odunmiktar=odunmiktar+(kfmiktar*28);   break;
	}
	switch(tarlasv)
	{
		case 1:  besinmiktar=besinmiktar+(tarlamiktar*10);  break;
		case 2:  besinmiktar=besinmiktar+(tarlamiktar*12);  break;
		case 3:  besinmiktar=besinmiktar+(tarlamiktar*14);  break;
		case 4:  besinmiktar=besinmiktar+(tarlamiktar*16);  break;
		case 5:  besinmiktar=besinmiktar+(tarlamiktar*18);  break;
		case 6:  besinmiktar=besinmiktar+(tarlamiktar*20);  break;
		case 7:  besinmiktar=besinmiktar+(tarlamiktar*22);  break;
		case 8:  besinmiktar=besinmiktar+(tarlamiktar*24);  break;
		case 9:  besinmiktar=besinmiktar+(tarlamiktar*26);  break;
		case 10:  besinmiktar=besinmiktar+(tarlamiktar*28);  break;
	}
	
	
	goto donus4;  
	break;	
	///////////////////////////
/*	 case 9:  // Secim Ekrani
		
	
	printf("\n");
	system("pause");
	goto donus3;    /// donus 3 olmalý ana cmenuye donmeli  ve oldu
	break;
*/   
	//////////////////////////////////////////////////////////////////////
	
	
	default: printf("Hatali Giris");
	printf("\n");
    system("pause");           /////////// Ahmet menu sonu
    goto donus;
	break;
	}
    ////////////////////////
	/////////////////
     
	 
	 
	 // CEmil baþlangýç
	 
	 ///////////////
	 
	 //////////////////////////
	 ////////////////////////
	 
	

    
        donus4:
    	system ("COLOR 70");
	cdonus:
    // asker miktar savaþtan sonra +-1 hata veriyor onun nedeni aþaðýd kalan asker float asker miktari int o yüzden sayýyý yuvarlýyor
	system("CLS");
	printf("CEMIL  CEMIL  CEMIL\n\n");
	printf("\nKalan Altin: %d",caltinmiktar);    	printf("          Toplam Maden Sayisi: %d",cmadenmiktar);             printf("                              Asker Seviyen: %d",cemilaskerseviyesi); 
	printf("\nKalan Odun: %d",codunmiktar);          printf("           Toplam Kereste Fabrkasi Sayisi: %d",ckfmiktar);    printf("                   Duvar Seviyen: %d",cemilduvarseviyesi); 
	printf("\nKalan Besin: %d",cbesinmiktar);	    printf("          Toplam Tarla Sayisi: %d",ctarlamiktar);              printf("                              Maden Seviyen: %d",cmadensv);
	printf("\nKalan Asker: %d",caskermiktar);        printf("                                                              Tarla Seviyen: %d\n",ctarlasv);
	                                                printf("                                                                            Kereste F. Seviyen: %d",ckfsv);
	printf("\n\nYapmak Istediginiz Islemi Secin: \n");                              
	printf("1-) Madden Alma\n");
	printf("2-) Merkez Savasi\n");                              
	printf("3-) Bolge Savasi\n");
	printf("4-) Bolge Ekle-Cikar\n");                
	printf("5-) Merkez Asker Nakli\n");
	printf("6-) Seviye Gelistirme\n");
	printf("7-) Tur Atla\n");
	
	
	scanf("%i",&cmenu);
	system("CLS");
	switch(cmenu)
    {
    case 1: system ("COLOR 70");
	printf("1-) Madden Alma\n\n");
	
	system("CLS");
	
	printf("***Satin Alma Yeri***\n");
	
	calmialtin=codunmiktar/20;
	if(calmialtin+cmadenmiktar>100)
	{
		calmialtin=100-cmadenmiktar;
	}
	
    printf("\nNe Kadar Maden Almak Istiyosun(%d):  ",calmialtin); scanf("%d",&calisaltin);  
    if(calisaltin>calmialtin)
	{
		printf("Bu kadar Maden Alamazsin\n\n"); 
	}
	else if(calisaltin*2<=codunmiktar)
	{
		codunmiktar= codunmiktar - calisaltin*20;
		cmadenmiktar= cmadenmiktar+calisaltin;
	}
	
	calmikf=cbesinmiktar/20;
	if(calmikf+ckfmiktar>100)
	{
		calmikf=100-ckfmiktar;
	}
	
    printf("Ne Kadar Keresete Fabrikasi Almak Istiyosun(%d):  ",calmikf); scanf("%d",&caliskf);  
    if(caliskf>calmikf)
	{
		printf("Bu kadar Kereste Fabrikasi Alamazsin\n\n");
	}
	else if(caliskf*2<=cbesinmiktar)
	{
		cbesinmiktar= cbesinmiktar - caliskf*20;
		ckfmiktar= ckfmiktar+caliskf;
	}
	
	calmitarla=caltinmiktar/20;
	if(calmitarla+ctarlamiktar>100)
	{
		calmitarla=100-ctarlamiktar;
	}
	
	
    printf("Ne Kadar Tarla Almak Istiyosun(%d):  ",calmitarla); scanf("%d",&calistarla);  
    if(calistarla>calmitarla)
	{
		printf("Bu kadar Tarla Alamazsin\n\n");
	}
	else if(calistarla*2<=caltinmiktar)   
	{
		caltinmiktar= caltinmiktar - calistarla*20;
		ctarlamiktar= ctarlamiktar+calistarla;
	}
	
	caltinlaalabilecegin=caltinmiktar/20;
	cbesinlealabilecegin=cbesinmiktar/20;

	if(cbesinlealabilecegin>caltinlaalabilecegin)
	{
		calabilecegincaskermiktar=caltinlaalabilecegin;
		
		printf("Ne Kadar Asker Almak Istiyosun: (%d):  ",calabilecegincaskermiktar);  scanf("%d",&calmakistediginasker);  
		
		if(calmakistediginasker*20>caltinmiktar)   
		printf("Bu Kadar ASker Alamazsin (Altin Eksik)\n\n");
	    else if(calmakistediginasker*20<=caltinmiktar) 
	    {
	    	caltinmiktar=caltinmiktar - calmakistediginasker*20;
	    	cbesinmiktar=cbesinmiktar - calmakistediginasker*20;
			
			caskermiktar=caskermiktar+calmakistediginasker;
		}
	}

    if(caltinlaalabilecegin>=cbesinlealabilecegin)  
	{
		calabilecegincaskermiktar=cbesinlealabilecegin;
		
		printf("Ne Kadar Asker Almak Istiyosun: (%d):  ",calabilecegincaskermiktar);  scanf("%d",&calmakistediginasker);
		
		if(calmakistediginasker*20>caltinmiktar)
		printf("\n Bu Kadar ASker Alamazsin (Altin Eksik)\n\n");
	    else if(calmakistediginasker*20<=caltinmiktar)    
	    {
	    	caltinmiktar=caltinmiktar - calmakistediginasker*20;
	    	cbesinmiktar=cbesinmiktar - calmakistediginasker*20;
			
			caskermiktar=caskermiktar+calmakistediginasker;
		}
	}
	
	system("CLS");
	
	printf("***csonuc***");
	printf("\nKalan Altin: %d",caltinmiktar);
	printf("\nKalan Odun: %d",codunmiktar);
	printf("\nKalan Besin: %d",cbesinmiktar);
	
	printf("\nToplam Maden Sayisi: %d",cmadenmiktar);
	printf("\nToplam Kereste Fabrkasi Sayisi: %d",ckfmiktar);
	printf("\nToplam Tarla Sayisi: %d",ctarlamiktar);
	printf("\nToplam Asker Sayisi: %d",caskermiktar);    
	printf("\n");
    system("pause");
	goto cdonus;
	break;
		
	case 2:
	system ("COLOR 70");
	
	
	printf("2-) Savas\n\n");
	printf("Cemil Asker Sayisini Giriniz: ");
	scanf("%f",&cemilaskersayisi);

	
	printf("\n\nAhmet Asker Sayisini Giriniz: ");
	scanf("%f",&ahmetaskersayisi);
                    	
/*	switch(ahmetduvarseviyesi)
	{
		case 0: ahmetduvarbonusi=0;break;
		case 1: ahmetduvarbonusi=10;break;
		case 2: ahmetduvarbonusi=25;break;
		case 3: ahmetduvarbonusi=30;break;
		case 4: ahmetduvarbonusi=35;break;
		case 5: ahmetduvarbonusi=40;break;
		case 6: ahmetduvarbonusi=45;break;
		case 7: ahmetduvarbonusi=50;break;
		case 8: ahmetduvarbonusi=55;break;         
		case 9: ahmetduvarbonusi=65;break;   
		case 10: ahmetduvarbonusi=70;break;
	
	
	}
*/	
	switch(cemilduvarseviyesi)
	{
		case 0: cemilduvarbonusi=0;break;
		case 1: cemilduvarbonusi=10;break;
		case 2: cemilduvarbonusi=25;break;
		case 3: cemilduvarbonusi=30;break;
		case 4: cemilduvarbonusi=35;break;
		case 5: cemilduvarbonusi=40;break;
		case 6: cemilduvarbonusi=45;break;
		case 7: cemilduvarbonusi=50;break;
		case 8: cemilduvarbonusi=55;break;
		case 9: cemilduvarbonusi=65;break;
		case 10: cemilduvarbonusi=70;break;
	}
	
	
	
	 switch(cemilaskerseviyesi)   
	{
		case 1: cemilaskergucu=(cemilaskersayisi*5)+(cemilaskersayisi*5*cemilduvarbonusi/100); break; 
		case 2: cemilaskergucu=(cemilaskersayisi*5.5)+(cemilaskersayisi*5.5*cemilduvarbonusi/100); break;
		case 3: cemilaskergucu=(cemilaskersayisi*6)+(cemilaskersayisi*6*cemilduvarbonusi/100); break;
		case 4: cemilaskergucu=(cemilaskersayisi*6.5)+(cemilaskersayisi*6.5*cemilduvarbonusi/100); break;
		case 5: cemilaskergucu=(cemilaskersayisi*7)+(cemilaskersayisi*7*cemilduvarbonusi/100); break;
		case 6: cemilaskergucu=(cemilaskersayisi*7.5)+(cemilaskersayisi*7.5*cemilduvarbonusi)/100; break;
		case 7: cemilaskergucu=(cemilaskersayisi*8)+(cemilaskersayisi*8*cemilduvarbonusi/100); break;
		case 8: cemilaskergucu=(cemilaskersayisi*8.5)+(cemilaskersayisi*8.5*cemilduvarbonusi/100); break;
		case 9: cemilaskergucu=(cemilaskersayisi*9)+(cemilaskersayisi*9*cemilduvarbonusi/100); break;
		case 10: cemilaskergucu=(cemilaskersayisi*9.5)+(cemilaskersayisi*9.5*cemilduvarbonusi/100); break;
		
	}
	
	
	switch(ahmetaskerseviyesi)  
	{
		case 1: ahmetaskergucu=(ahmetaskersayisi*5); break;  // +(ahmetaskersayisi*5*ahmetduvarbonusi/100)
		case 2: ahmetaskergucu=(ahmetaskersayisi*5.5); break;
		case 3: ahmetaskergucu=(ahmetaskersayisi*6); break;
		case 4: ahmetaskergucu=(ahmetaskersayisi*6.5); break;
		case 5: ahmetaskergucu=(ahmetaskersayisi*7); break;
		case 6: ahmetaskergucu=(ahmetaskersayisi*7.5); break;
		case 7: ahmetaskergucu=(ahmetaskersayisi*8); break;
		case 8: ahmetaskergucu=(ahmetaskersayisi*8.5); break;
		case 9: ahmetaskergucu=(ahmetaskersayisi*9); break;
		case 10: ahmetaskergucu=(ahmetaskersayisi*9.5); break;
		
	}
	
	
	
	if(cemilaskersayisi>ahmetaskersayisi)
	{
	ccoklukbonusu= (cemilaskersayisi/ahmetaskersayisi)*8/100;
	}                                                         
	else if(ahmetaskersayisi>cemilaskersayisi)                  
	{                                                           
	ccoklukbonusu= (ahmetaskersayisi/cemilaskersayisi)*8/100;}
	
	system("CLS");
	
	csonuc=ahmetaskergucu-cemilaskergucu;
	if(csonuc>0)
	{
	printf("Ahmet Kazandi\n");
	cbol= ahmetaskerseviyesi+4;
	ckalanasker=csonuc/cbol;
	ckalanasker=ckalanasker + (ckalanasker*ccoklukbonusu);
	if (ckalanasker>ahmetaskersayisi)
	{
	printf("Kayip Yok: Kalan Asker= %.0f", ahmetaskersayisi);
	}
	else if(ckalanasker<=ahmetaskersayisi)
	{
	printf("ckalanasker= %.0f",ckalanasker);	
	}
	
	caskermiktar=0;
	}
	
	else if(csonuc<0)
	{
	printf("Cemil Kazandi\n");
	cbol= cemilaskerseviyesi+4;
	ckalanasker= -csonuc/cbol;
	ckalanasker=ckalanasker + (ckalanasker*ccoklukbonusu);	
	if (ckalanasker>cemilaskersayisi)
	{
	printf("Kayip Yok: Kalan Asker= %.0f", cemilaskersayisi);
	}
	else if(ckalanasker<=cemilaskersayisi)
	{
	printf("ckalanasker= %.0f",ckalanasker);	
	}
    
    caskermiktar=ckalanasker;
    
	}
	else if (csonuc==0)
	{
	printf("Berabere");
	caskermiktar=0;
	}
	printf("\n");
    system("pause");
	goto cdonus;
	break;
		
		
	case 3:
	printf("\n Burasi hatali daha yapilmadi\n\n");
	system("pause");
	goto cdonus;
	break;	
	
	// Bölge alýp çýkarma için ekstra program yazýcam
	case 4:
	system ("COLOR 70");

    printf("Eklemek Istedigin Maden Sayisi: ");
	scanf("%d",&ceklemaden);
	printf("Eklemek Istedigin Kereste F. Sayisi: ");
	scanf("%d",&ceklekf);
	printf("Eklemek Istedigin Tarla Sayisi: ");
	scanf("%d",&ekletarla);
	printf("\nCikarmak Istedigin Maden Sayisi: ");
	scanf("%d",&ccikarmaden);
	printf("Cikarmak Istedigin Kereste F. Sayisi: ");
	scanf("%d",&ccikarkf);
	printf("Cikarmak Istedigin Tarla Sayisi: ");
	scanf("%d",&ccikartarla);
	
	cmadenmiktar=cmadenmiktar+ceklemaden-ccikarmaden;
	ckfmiktar=ckfmiktar+ceklekf-ccikarkf;
	ctarlamiktar=ctarlamiktar+ekletarla-ccikartarla;
	
	printf("\n");
	system("pause");
	goto cdonus;
	break;
	
	case 5:
	system ("COLOR 70");
	
	printf("Nakil Edilecek Asker Sayisi: ");
	scanf("%d",&cnklasker);
	caskermiktar=caskermiktar-cnklasker;
	
	printf("\n");
	system("pause");
	goto cdonus;
	break;
	
	case 6: system ("COLOR 70");
	
	
	
	cdonus2:
	system("CLS");
		
	printf("Hangi Seyi Seviye Atlatmak Istersin");
    printf("\n1-) Asker Seviye Yukselt");
    switch(cemilaskerseviyesi)
    {
    	case 1: printf("  Sonraki Seviye Icin 150 Altin -- 150 Besin Gerekli"); break;
    	case 2: printf("  Sonraki Seviye Icin 250 Altin -- 250 Besin Gerekli"); break;
    	case 3: printf("  Sonraki Seviye Icin 400 Altin -- 400 Besin Gerekli"); break;
    	case 4: printf("  Sonraki Seviye Icin 650 Altin -- 650 Besin Gerekli"); break;
    	case 5: printf("  Sonraki Seviye Icin 950 Altin -- 950 Besin Gerekli"); break;
    	case 6: printf("  Sonraki Seviye Icin 1350 Altin -- 1350 Besin Gerekli"); break;
    	case 7: printf("  Sonraki Seviye Icin 1850 Altin -- 1850 Besin Gerekli"); break;
    	case 8: printf("  Sonraki Seviye Icin 2300 Altin -- 2300 Besin Gerekli"); break;
    	case 9: printf("  Sonraki Seviye Icin 3000 Altin -- 3000 Besin Gerekli"); break;
	}
    
	printf("\n\n2-) Duvar Seviye Yukselt");
	switch(cemilduvarseviyesi)
    {
    	case 1: printf("  Sonraki Seviye Icin 150 Altin -- 300 Odun Gerekli"); break;
    	case 2: printf("  Sonraki Seviye Icin 250 Altin -- 500 Odun Gerekli"); break;
    	case 3: printf("  Sonraki Seviye Icin 400 Altin -- 800 Odun Gerekli"); break;
    	case 4: printf("  Sonraki Seviye Icin 650 Altin -- 1300 Odun Gerekli"); break;
    	case 5: printf("  Sonraki Seviye Icin 950 Altin -- 1900 Odun Gerekli"); break;
    	case 6: printf("  Sonraki Seviye Icin 1350 Altin -- 2700 Odun Gerekli"); break;
    	case 7: printf("  Sonraki Seviye Icin 1850 Altin -- 3700 Odun Gerekli"); break;
    	case 8: printf("  Sonraki Seviye Icin 2300 Altin -- 4600 Odun Gerekli"); break;
    	case 9: printf("  Sonraki Seviye Icin 3000 Altin -- 6000 Odun Gerekli"); break;
	}
	
	
	printf("\n\n3-) Maden Seviye Yukselt");
	switch(cmadensv)
    {
    	case 1: printf("  Sonraki Seviye Icin 150 Odun -- 150 Besin Gerekli"); break;
    	case 2: printf("  Sonraki Seviye Icin 250 Odun -- 250 Besin Gerekli"); break;
    	case 3: printf("  Sonraki Seviye Icin 400 Odun -- 400 Besin Gerekli"); break;
    	case 4: printf("  Sonraki Seviye Icin 650 Odun -- 650 Besin Gerekli"); break;
    	case 5: printf("  Sonraki Seviye Icin 950 Odun -- 950 Besin Gerekli"); break;
    	case 6: printf("  Sonraki Seviye Icin 1350 Odun -- 1350 Besin Gerekli"); break;
    	case 7: printf("  Sonraki Seviye Icin 1850 Odun -- 1850 Besin Gerekli"); break;
    	case 8: printf("  Sonraki Seviye Icin 2300 Odun -- 2300 Besin Gerekli"); break;
    	case 9: printf("  Sonraki Seviye Icin 3000 Odun -- 3000 Besin Gerekli"); break;
	}
	
	
	printf("\n\n4-) Kereste F. Seviye Yukselt");
	switch(ckfsv)
    {
    	case 1: printf("  Sonraki Seviye Icin 150 Altin -- 150 Besin Gerekli"); break;
    	case 2: printf("  Sonraki Seviye Icin 250 Altin -- 250 Besin Gerekli"); break;
    	case 3: printf("  Sonraki Seviye Icin 400 Altin -- 400 Besin Gerekli"); break;
    	case 4: printf("  Sonraki Seviye Icin 650 Altin -- 650 Besin Gerekli"); break;
    	case 5: printf("  Sonraki Seviye Icin 950 Altin -- 950 Besin Gerekli"); break;
    	case 6: printf("  Sonraki Seviye Icin 1350 Altin -- 1350 Besin Gerekli"); break;
    	case 7: printf("  Sonraki Seviye Icin 1850 Altin -- 1850 Besin Gerekli"); break;
    	case 8: printf("  Sonraki Seviye Icin 2300 Altin -- 2300 Besin Gerekli"); break;
    	case 9: printf("  Sonraki Seviye Icin 3000 Altin -- 3000 Besin Gerekli"); break;
	}
	
	printf("\n\n5-) Tarla Seviye Yukselt");
	switch(ctarlasv)
    {
    	case 1: printf("  Sonraki Seviye Icin 150 Altin -- 300 Odun Gerekli"); break;
    	case 2: printf("  Sonraki Seviye Icin 250 Altin -- 500 Odun Gerekli"); break;
    	case 3: printf("  Sonraki Seviye Icin 400 Altin -- 800 Odun Gerekli"); break;
    	case 4: printf("  Sonraki Seviye Icin 650 Altin -- 1300 Odun Gerekli"); break;
    	case 5: printf("  Sonraki Seviye Icin 950 Altin -- 1900 Odun Gerekli"); break;
    	case 6: printf("  Sonraki Seviye Icin 1350 Altin -- 2700 Odun Gerekli"); break;
    	case 7: printf("  Sonraki Seviye Icin 1850 Altin -- 3700 Odun Gerekli"); break;
    	case 8: printf("  Sonraki Seviye Icin 2300 Altin -- 4600 Odun Gerekli"); break;
    	case 9: printf("  Sonraki Seviye Icin 3000 Altin -- 6000 Odun Gerekli"); break;
	}
	
	
	printf("\n\n6-) Ana Sayfaya Donmek icin\n");
	
	scanf("%d",&cmenu2);
	



	switch(cmenu2)
	{
		case 1:
			switch(cemilaskerseviyesi)// CEmil içinse cemilin asker sv si hmet is ahmetin
			{
				
				case 1:
					if(caltinmiktar>=150 && cbesinmiktar>=150)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-150;
						cbesinmiktar= cbesinmiktar-150;
						cemilaskerseviyesi=cemilaskerseviyesi+1;
						system("pause"); goto cdonus; break;
						
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
			    	
					case 2:
					if(caltinmiktar>=250 && cbesinmiktar>=250)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-250;
						cbesinmiktar= cbesinmiktar-250;
						cemilaskerseviyesi=cemilaskerseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
			    	
					case 3:
					if(caltinmiktar>=400 && cbesinmiktar>=400)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-400;
						cbesinmiktar= cbesinmiktar-400;
						cemilaskerseviyesi=cemilaskerseviyesi+1;
						system("pause"); goto cdonus; break;
						
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}	
				case 4:
					if(caltinmiktar>=650 && cbesinmiktar>=650)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-650;
						cbesinmiktar= cbesinmiktar-650;
						cemilaskerseviyesi=cemilaskerseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}    	
				case 5:
					if(caltinmiktar>=950 && cbesinmiktar>=950)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-950;
						cbesinmiktar= cbesinmiktar-950;
						cemilaskerseviyesi=cemilaskerseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 6:
					if(caltinmiktar>=1350 && cbesinmiktar>=1350)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-1350;
						cbesinmiktar= cbesinmiktar-1350;
						cemilaskerseviyesi=cemilaskerseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 7:
					if(caltinmiktar>=1850 && cbesinmiktar>=1850)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-1850;
						cbesinmiktar= cbesinmiktar-1850;
						cemilaskerseviyesi=cemilaskerseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 8:
					if(caltinmiktar>=2300 && cbesinmiktar>=2300)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-2300;
						cbesinmiktar= cbesinmiktar-2300;
						cemilaskerseviyesi=cemilaskerseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 9:
					if(caltinmiktar>=3000 && cbesinmiktar>=3000)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-3000;
						cbesinmiktar= cbesinmiktar-3000;
						cemilaskerseviyesi=cemilaskerseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
			
			
			}
		
	system("pause");
	goto cdonus2;
	break;	
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	case 2: // Duvar seviyesi
	switch(cemilduvarseviyesi)
	{
		
		case 1:
					if(caltinmiktar>=150 && codunmiktar>=300)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-150;
						codunmiktar= codunmiktar-300;
						cemilduvarseviyesi=cemilduvarseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
					case 2:
					if(caltinmiktar>=250 && codunmiktar>=500)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-250;
						codunmiktar= codunmiktar-500;
						cemilduvarseviyesi=cemilduvarseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
					case 3:
					if(caltinmiktar>=400 && codunmiktar>=800)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-400;
						codunmiktar= codunmiktar-800;
						cemilduvarseviyesi=cemilduvarseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
					
					case 4:
					if(caltinmiktar>=650 && codunmiktar>=1300)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-650;
						codunmiktar= codunmiktar-1300;
						cemilduvarseviyesi=cemilduvarseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
					
					case 5:
					if(caltinmiktar>=950 && codunmiktar>=1900)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-950;
						codunmiktar= codunmiktar-1900;
						cemilduvarseviyesi=cemilduvarseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
					case 6:
					if(caltinmiktar>=1350 && codunmiktar>=2700)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-1350;
						codunmiktar= codunmiktar-2700;
						cemilduvarseviyesi=cemilduvarseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
					case 7:
					if(caltinmiktar>=1850 && codunmiktar>=3700)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-1850;
						codunmiktar= codunmiktar-3700;
						cemilduvarseviyesi=cemilduvarseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya odun Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
					case 8:
					if(caltinmiktar>=2300 && codunmiktar>=4600)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-2300;
						codunmiktar= codunmiktar-4600;
						cemilduvarseviyesi=cemilduvarseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Odun Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
					case 9:
					if(caltinmiktar>=3000 && codunmiktar>=6000)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-3000;
						codunmiktar= codunmiktar-6000;
						cemilduvarseviyesi=cemilduvarseviyesi+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Odun Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
					
	}
	
	system("pause");
	goto cdonus2;
	break;
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	case 3:  // maden
	
		switch(cmadensv)// CEmil içinse cemilin asker sv si hmet is ahmetin
			{
				
				case 1:
					if(codunmiktar>=150 && cbesinmiktar>=150)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-150;
						cbesinmiktar= cbesinmiktar-150;
						cmadensv=cmadensv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
			    	
					case 2:
					if(codunmiktar>=250 && cbesinmiktar>=250)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-250;
						cbesinmiktar= cbesinmiktar-250;
						cmadensv=cmadensv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
			    	
					case 3:
					if(codunmiktar>=400 && cbesinmiktar>=400)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-400;
						cbesinmiktar= cbesinmiktar-400;
						cmadensv=cmadensv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}	
				case 4:
					if(codunmiktar>=650 && cbesinmiktar>=650)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-650;
						cbesinmiktar= cbesinmiktar-650;
						cmadensv=cmadensv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}    	
				case 5:
					if(codunmiktar>=950 && cbesinmiktar>=950)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-950;
						cbesinmiktar= cbesinmiktar-950;
						cmadensv=cmadensv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 6:
					if(codunmiktar>=1350 && cbesinmiktar>=1350)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-1350;
						cbesinmiktar= cbesinmiktar-1350;
						cmadensv=cmadensv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 7:
					if(codunmiktar>=1850 && cbesinmiktar>=1850)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-1850;
						cbesinmiktar= cbesinmiktar-1850;
						cmadensv=cmadensv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 8:
					if(codunmiktar>=2300 && cbesinmiktar>=2300)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-2300;
						cbesinmiktar= cbesinmiktar-2300;
						cmadensv=cmadensv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 9:
					if(codunmiktar>=3000 && cbesinmiktar>=3000)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-3000;
						cbesinmiktar= cbesinmiktar-3000;
						cmadensv=cmadensv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
			
			
			}
		
		
		system("pause");
	goto cdonus2;
	break;
	
	
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	
	case 4:  // Odun
	
	
			switch(ckfsv)// CEmil içinse cemilin asker sv si hmet is ahmetin
			{
				
				case 1:
					if(caltinmiktar>=150 && cbesinmiktar>=150)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-150;
						cbesinmiktar= cbesinmiktar-150;
						ckfsv=ckfsv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
			    	
					case 2:
					if(caltinmiktar>=250 && cbesinmiktar>=250)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-250;
						cbesinmiktar= cbesinmiktar-250;
						ckfsv=ckfsv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
			    	
					case 3:
					if(caltinmiktar>=400 && cbesinmiktar>=400)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-400;
						cbesinmiktar= cbesinmiktar-400;
						ckfsv=ckfsv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}	
				case 4:
					if(caltinmiktar>=650 && cbesinmiktar>=650)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-650;
						cbesinmiktar= cbesinmiktar-650;
						ckfsv=ckfsv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}    	
				case 5:
					if(caltinmiktar>=950 && cbesinmiktar>=950)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-950;
						cbesinmiktar= cbesinmiktar-950;
						ckfsv=ckfsv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 6:
					if(caltinmiktar>=1350 && cbesinmiktar>=1350)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-1350;
						cbesinmiktar= cbesinmiktar-1350;
						ckfsv=ckfsv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 7:
					if(caltinmiktar>=1850 && cbesinmiktar>=1850)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-1850;
						cbesinmiktar= cbesinmiktar-1850;
						ckfsv=ckfsv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 8:
					if(caltinmiktar>=2300 && cbesinmiktar>=2300)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-2300;
						cbesinmiktar= cbesinmiktar-2300;
						ckfsv=ckfsv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 9:
					if(caltinmiktar>=3000 && cbesinmiktar>=3000)
					{
						printf("Seviye atlandi");
						caltinmiktar= caltinmiktar-3000;
						cbesinmiktar= cbesinmiktar-3000;
						ckfsv=ckfsv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince Altin veya Besin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
			
			
			}
		
		
		system("pause");
	goto cdonus2;
	break;	
	
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	case 5: // Tarla
		
		switch(ctarlasv)// CEmil içinse cemilin asker sv si hmet is ahmetin
			{
				
				case 1:
					if(codunmiktar>=150 && caltinmiktar>=150)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-150;
						caltinmiktar= caltinmiktar-150;
						ctarlasv=ctarlasv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto cdonus2; break;
					}
			    	
					case 2:
					if(codunmiktar>=250 && caltinmiktar>=250)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-250;
						caltinmiktar= caltinmiktar-250;
						ctarlasv=ctarlasv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto cdonus2; break;
					}
			    	
					case 3:
					if(codunmiktar>=400 && caltinmiktar>=400)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-400;
						caltinmiktar= caltinmiktar-400;
						ctarlasv=ctarlasv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto cdonus2; break;
					}	
				case 4:
					if(codunmiktar>=650 && caltinmiktar>=650)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-650;
						caltinmiktar= caltinmiktar-650;
						ctarlasv=ctarlasv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto cdonus2; break;
					}    	
				case 5:
					if(codunmiktar>=950 && caltinmiktar>=950)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-950;
						caltinmiktar= caltinmiktar-950;
						ctarlasv=ctarlasv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 6:
					if(codunmiktar>=1350 && caltinmiktar>=1350)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-1350;
						caltinmiktar= caltinmiktar-1350;
						ctarlasv=ctarlasv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 7:
					if(codunmiktar>=1850 && caltinmiktar>=1850)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-1850;
						caltinmiktar= caltinmiktar-1850;
						ctarlasv=ctarlasv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 8:
					if(codunmiktar>=2300 && caltinmiktar>=2300)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-2300;
						caltinmiktar= caltinmiktar-2300;
						ctarlasv=ctarlasv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
						case 9:
					if(codunmiktar>=3000 && caltinmiktar>=3000)
					{
						printf("Seviye atlandi");
						codunmiktar= codunmiktar-3000;
						caltinmiktar= caltinmiktar-3000;
						ctarlasv=ctarlasv+1;
						system("pause"); goto cdonus; break;
					}
					else
					{
						printf("Yeterince odun veya altin Yok\n");
						system("pause"); goto cdonus2; break;
					}
					
			
			
			}
		
		
		system("pause");
	goto cdonus2;
	break;	
	
	
	
	
	case 6:
		
	system("pause");
	goto cdonus;  
	break;		
	
	default:
	printf("Hatali Giris");
	system("pause");              // Seviye bitiþ sonu
	goto cdonus;
	break;			
	}
	
	
	printf("\n");
	system("pause");    // Bu seviye geliþtirme case 6 nin dönüþü
	goto cdonus;
	break;
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	case 7:  // Tur
	
	
	switch(cmadensv)
	{
		case 1: caltinmiktar=caltinmiktar+(cmadenmiktar*10);        break;
		case 2: caltinmiktar=caltinmiktar+(cmadenmiktar*12);        break;
		case 3: caltinmiktar=caltinmiktar+(cmadenmiktar*14);        break;
		case 4: caltinmiktar=caltinmiktar+(cmadenmiktar*16);        break;
		case 5: caltinmiktar=caltinmiktar+(cmadenmiktar*18);        break;
		case 6: caltinmiktar=caltinmiktar+(cmadenmiktar*20);        break;
		case 7: caltinmiktar=caltinmiktar+(cmadenmiktar*22);        break;
		case 8: caltinmiktar=caltinmiktar+(cmadenmiktar*24);        break;
		case 9: caltinmiktar=caltinmiktar+(cmadenmiktar*26);        break;
    	case 10: caltinmiktar=caltinmiktar+(cmadenmiktar*28);        break;					
	}
	switch(ckfsv)
	{
		case 1: codunmiktar=codunmiktar+(ckfmiktar*10);   break;
		case 2: codunmiktar=codunmiktar+(ckfmiktar*12);   break;
		case 3: codunmiktar=codunmiktar+(ckfmiktar*14);   break;
		case 4: codunmiktar=codunmiktar+(ckfmiktar*16);   break;
		case 5: codunmiktar=codunmiktar+(ckfmiktar*18);   break;
		case 6: codunmiktar=codunmiktar+(ckfmiktar*20);  break;
		case 7: codunmiktar=codunmiktar+(ckfmiktar*22);   break;
		case 8: codunmiktar=codunmiktar+(ckfmiktar*24);   break;
		case 9: codunmiktar=codunmiktar+(ckfmiktar*26);   break;
		case 10: codunmiktar=codunmiktar+(ckfmiktar*28);   break;
	}
	switch(ctarlasv)
	{
		case 1:  cbesinmiktar=cbesinmiktar+(ctarlamiktar*10);  break;
		case 2:  cbesinmiktar=cbesinmiktar+(ctarlamiktar*12);  break;
		case 3:  cbesinmiktar=cbesinmiktar+(ctarlamiktar*14);  break;
		case 4:  cbesinmiktar=cbesinmiktar+(ctarlamiktar*16);  break;
		case 5:  cbesinmiktar=cbesinmiktar+(ctarlamiktar*18);  break;
		case 6:  cbesinmiktar=cbesinmiktar+(ctarlamiktar*20);  break;
		case 7:  cbesinmiktar=cbesinmiktar+(ctarlamiktar*22);  break;
		case 8:  cbesinmiktar=cbesinmiktar+(ctarlamiktar*24);  break;
		case 9:  cbesinmiktar=cbesinmiktar+(ctarlamiktar*26);  break;
		case 10:  cbesinmiktar=cbesinmiktar+(ctarlamiktar*28);  break;
	}
	
	printf("\n");
	system("pause");
	goto donus5;    /// donus 3 olmalý ana cmenuye donmeli  ve oldu
	break;
	
///////////////////////////////////////	

  /*  case 9:  // Secim ekrani
		
	
	printf("\n");
	system("pause");
	goto donus3;    /// donus 3 olmalý ana cmenuye donmeli  ve oldu
	break;   
*/

///////////////////////////////////////
	default: printf("Hatali Giris");
	printf("\n");
    system("pause");      // Burasýsanýrým cemilin menu bitiþi
    goto cdonus;
	break;
}
//////////////////////////////////////7
	
	////////////////

	///////////////
	
	
	
	
	return 0;
}
