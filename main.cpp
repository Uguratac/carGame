#include<graphics.h>
#include<windows.h>
#include<pthread.h>

int main(){ 
	
	initwindow(1200,800);
	
	
	int agac_bir[8]={75,200,150,200,125,125,75,200};    // fillpoly fonksiyonlari için
	int agac_iki[8]={175,200,250,200,225,125,175,200};
	int agac_uc[8]={275,200,350,200,325,125,275,200};
	int agac_dort[8]={375,200,450,200,425,125,375,200};
	int agac_bes[8]={475,200,550,200,525,125,475,200};
	int agac_alti[8]={575,200,650,200,625,125,575,200};
	int agac_yedi[8]={675,200,750,200,725,125,675,200};
	int agac_sekiz[8]={775,200,850,200,825,125,775,200};
	int agac_dokuz[8]={875,200,950,200,925,125,875,200};
	int agac_on[8]={975,200,1050,200,1025,125,975,200};
	int agac_onBir[8]={1075,200,1150,200,1125,125,1075,200};
	
	int x = 10;
	int w = 10;
		
	while(1)
	{
		
	setcolor(8);
	sector(300,300,0,180,300,300);  // daðlar
	sector(900,300,0,180,300,300);
	
/////////////////////////////////////////////////////////
		
	line(0,500,1200,500);  
	line(0,600,1200,600);  // yollar
	line(0,700,1200,700);
	
//////////////////////////////////////////////////////////	

	setfillstyle(1,6);  // engel bir
	bar(300,500,320,600);
	
	setfillstyle(1,6);  // engel iki
	bar(580,600,600,700);
	
	setfillstyle(1,6);  // engel üç
	bar(1080,500,1100,600);

////////////////////////////////////////////////////////////	
	
	setfillstyle(1,6);
	bar(100,200,130,350);  // aðaç 1
	setfillstyle(1,2);
	fillpoly(4,agac_bir);
	
	setfillstyle(1,6);
	bar(200,200,230,350);  // aðaç 2
	setfillstyle(1,2);
	fillpoly(4,agac_iki);
	
	setfillstyle(1,6);
	bar(300,200,330,350);  // aðaç 3
	setfillstyle(1,2);
	fillpoly(4,agac_uc);
	
	setfillstyle(1,6);
	bar(400,200,430,350);  // aðaç 4
	setfillstyle(1,2);
	fillpoly(4,agac_dort);

	setfillstyle(1,6);
	bar(500,200,530,350);  // aðaç 5
	setfillstyle(1,2);
	fillpoly(4,agac_bes);
	
	setfillstyle(1,6);
	bar(600,200,630,350);  // aðaç 6
	setfillstyle(1,2);
	fillpoly(4,agac_alti);
	
	setfillstyle(1,6);
	bar(700,200,730,350);  // aðaç 7
	setfillstyle(1,2);
	fillpoly(4,agac_yedi);
	
	setfillstyle(1,6);
	bar(800,200,830,350);  // aðaç 8
	setfillstyle(1,2);
	fillpoly(4,agac_sekiz);
	
	setfillstyle(1,6);
	bar(900,200,930,350);  // aðaç 9
	setfillstyle(1,2);
	fillpoly(4,agac_dokuz);
	
	setfillstyle(1,6);
	bar(1000,200,1030,350);  // aðaç 10
	setfillstyle(1,2);
	fillpoly(4,agac_on);
	
	setfillstyle(1,6);
	bar(1100,200,1130,350);  // aðaç 11
	setfillstyle(1,2);
	fillpoly(4,agac_onBir);
	
//////////////////////////////////////////////////////
	
	setfillstyle(1,2);
	bar(50+x,450+w,200+x,550+w); // gövde
		
	setfillstyle(1,1);
	fillellipse(50+x,550+w,40,40); // tekerler
	fillellipse(200+x,550+w,40,40);

/////////////////////////////////////////////////////////	

		int a = getch();
		
		 if(a==77)
		{
			cleardevice();   // sað
			x+=10;
		}
		
		else if(a==75)
		{
			cleardevice(); // sol
			x-=10;
		}
		
		else if(a == 72)
		{
			cleardevice();  // yukarý
			w-=10;
		}
		
		else if(a == 80)
		{
			cleardevice(); // aþaðý
			w+=10;
		}
		
		settextstyle(1,HORIZ_DIR,5);
		
		if(590+w < 580 || 590+w > 700)
		{
			outtextxy(400,400,"Yoldan çýktýnýz\n");  //  yoldan çýkma mekaniði
		
		}
	
		if( (240+x == 300 && 590+w < 700 )  || (50+x == 360 && 590+w < 700) )     // engel 1 e çarpma mekaniði 
		{
			outtextxy(400,400,"GAME OVER\n");
			break;
		}	
			
		if( (240+x == 580 && 590+w > 600) || (50+x == 640 && 590+w > 600) )    // engel 2 ye çarpma mekaniði
		{
			outtextxy(400,400,"GAME OVER\n");
			break;	
		}
		
		if( (240+x == 1080 && 590+w < 700 ) || (50+x == 1140 && 590+w < 700) )    // engel 3 e çarpma mekaniði
		{
			outtextxy(400,400,"GAME OVER\n");
			break;	
		}
		
	
				
    }
    
  getch();
  closegraph();
}
