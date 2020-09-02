#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>



 void stat(int n)                                                 //stat 함수 
{
    
    if(n==0)
     printf("  □□□□□ □□□□□ □□□□□\n");
    if(n==1)
     printf("  ■□□□□ □□□□□ □□□□□\n");
    if(n==2)
     printf("  ■■□□□ □□□□□ □□□□□\n");
    if(n==3)
     printf("  ■■■□□ □□□□□ □□□□□\n");
    if(n==4)  
     printf("  ■■■■□ □□□□□ □□□□□\n");
    if(n==5)
     printf("  ■■■■■ □□□□□ □□□□□\n");
    if(n==6)
     printf("  ■■■■■ ■□□□□ □□□□□\n");
    if(n==7)
     printf("  ■■■■■ ■■□□□ □□□□□\n");
    if(n==8)
     printf("  ■■■■■ ■■■□□ □□□□□\n");
    if(n==9)
     printf("  ■■■■■ ■■■■□ □□□□□\n");
    if(n==10)
     printf("  ■■■■■ ■■■■■ □□□□□\n");
    if(n==11)
     printf("  ■■■■■ ■■■■■ ■□□□□\n");
    if(n==12)
     printf("  ■■■■■ ■■■■■ ■■□□□\n");
    if(n==13)
     printf("  ■■■■■ ■■■■■ ■■■□□\n");
    if(n==14)
     printf("  ■■■■■ ■■■■■ ■■■■□\n");
    if(n==15)
     printf("  ■■■■■ ■■■■■ ■■■■■\n");
     
}



 void bye(int a, int b, int c, int d, int e)                   //*레어엔딩*가출 
{
    
    Sleep(1000);
    
    printf("애 교 : %d ", a);
    if(a>9)
     printf("\b");
    stat(a);
     
    printf("친밀감: %d ", b);
    if(b>9)
     printf("\b");
    stat(b);
    
    printf("배고픔: %d ", c);
    if(c>9)
     printf("\b");
    stat(c);
    
    printf("건 강 : %d ", d);
    if(d>9)
     printf("\b");
    stat(d);
    
    printf("피 로 : %d ", e);
    if(e>9)
     printf("\b");
    stat(e);
    
    
    Sleep(2000);
    printf("\n\n\n     !!!!!!!!!!!!   ");
    
    
    Sleep(3000);
    system("cls");
    printf("    *레어엔딩* \n\n배고파서 집을 나가버렸다.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".\n\n");
    
    
    printf("て------へ\n");
    printf(" |       |\n");
    printf(" |       |\n");
    printf(" (       |==================\n");
    printf(" |       | _               |\n");
    printf(" ||      || |                |\n");
    printf(" ||      |/ |             < @++++< \n");
    printf(" ||    ---  /\n");
    printf(" U    _  -ノ\n");
    printf("  |  / |/\n");
    printf("  | |  ||      터벅\n");
    printf("  ||   ||                  터벅    \n");
    printf("  c|   c| \n");
    printf("  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
   
 } 
 
 
 
 void end_cab(int a, int b, int c, int d, int e)
{
    
    Sleep(1000);
    
    printf("애 교 : %d ", a);
    if(a>9)
     printf("\b");
    stat(a);
    
    printf("친밀감: %d ", b);
    if(b>9)
     printf("\b");
    stat(b);
    
    printf("배고픔: %d ", c);
    if(c>9)
     printf("\b");
    stat(c);
    
    printf("건 강 : %d ", d);
    if(d>9)
     printf("\b");
    stat(d);
    
    printf("피 로 : %d ", e);
    if(e>9)
     printf("\b");
    stat(e);
    
    
    Sleep(2000);
    printf("\n\n\n     !!!!!!!!!!!!   ");
    Sleep(3000);
    system("cls");
    
    
    printf("    *레어엔딩* \n\n넘치는 활력을 이기지 못하고 냥배추가 되어버렸다!\n\n");
    printf("         へ ____へ\n");  
    printf("         |       |\n");
    printf("         | o  o  |\n");    
    printf("         /ミ ωミ|\n");   
    printf("        /|     //  |\n");
    printf("       |  |w  w//   )\n");
    printf("      /   |/ /       |\n");
    printf("     |    //         )\n");
    printf("      |  //         |\n");
    printf("       (/          /\n");
    printf("        し________|\n"); 
    
 } 










 int main(void)
{
    
    system("mode con: cols=70 lines=30"); 
    system("color F0");
 
    int len_name=0;
    char name[100];
    char tmp;
    int menu1_s,sel,rand_number,menu_s,rand_no;
    
   
   
   
    printf("안녕하세요\n");                                              //인트로 
    Sleep(1000);
    printf("고양이 키우기 게임에 오신것을\n");
    Sleep(1000);
    printf("환영합니다.\n");
    Sleep(1200);
    system("cls");

    printf("먼저 고양이의 이름을 설정해 주십시오.\n");
    printf("(6자이하로 입력해주십시오.)\n"); 

   
   
A:  printf("이름: ");                                                       //이름설정 
    scanf("%s", name);
    system("cls");
   
    len_name=0;
    while(name[len_name] != '\0')
    len_name++;
    if((name[0]>=65&&name[0]<=90)||(name[0]>=97&&name[0]<=122))
    {
        if(len_name>6)
        {
           	while(1)
           	{         
               	printf("6자를 넘을 수 없습니다. \n다시 설정해 주십시오. \n");
               	Sleep(1200);
               	system("cls");
               	printf("이름: ");
               	scanf("%s",name);
               	system("cls");
               	int len_name=0;
                    
           		while(name[len_name] != '\0')
               	len_name++;
                    
            	if(len_name<7)
               	break;
       
            }   
       	}

    }
   
   
   else
   {
       if(len_name>12)
       {
           while(1)
           {
               printf("6자를 넘을 수 없습니다. \n다시 설정해 주십시오. \n");
                Sleep(1200);
                system("cls");
                printf("이름: ");               
                  scanf("%s",name);
                  system("cls");
                  int len_name=0;
                  
            while(name[len_name] != '\0')
            len_name+=2;
                  
            if(len_name<13)
                  break;
       
           }
        }
   }

   
B:  printf("정말 고양이의 이름을 %s(으)로 하시겠습니까?\n", name);           //이름 확 인  
    printf("1. YES\n");
    printf("2. No\n");
   
   
    char name_s;
    name_s = getch();

   if(name_s==49)
   {
      	do{
        	system("cls");
         	printf("<SPACE를 누르면 고양이 키우기 게임을 시작합니다>\n");
         	tmp=getch();   
    	}while(tmp!=32);
   
    	system("cls");   
   }
   
   else if(name_s==50)
   {
      	system("cls");
      	printf("이름을 재설정합니다.\n");
      	Sleep(1200);
      	system("cls");
      	goto A;
   }
   
   else
   {
      	system("cls");
   		printf("잘못 입력하셨습니다.\n");
   		Sleep(1000);
   		system("cls");
   		goto B;
   }

      
    printf("L  O  A  D  I  N  G\n\n");                                   //로딩 
    printf("    ___            \n");
  	printf("   レ  レ    __    \n");
   	printf("  | _  _ |  へ |   \n");
    printf(" /ミ ωミ|   / /   \n");
    printf("|         | | |    \n");
    printf("|  |  |  ||_/ |    \n");
    printf("|  |  |  ||_ /     \n");
    printf(" へ( _へ_ )        \n");
    Sleep(1000);
    system("cls");
    
    printf("L  O  A  D  I  N  G .\n\n");
    printf("    ___            \n");
    printf("   レ  レ      __  \n");
    printf("  | _  _ |    /  | \n");
    printf(" /ミ ωミ|   / /   \n");
    printf("|         | | |    \n");
    printf("|  |  |  ||_/ |    \n");
    printf("|  |  |  ||_ /     \n");
    printf(" へ( _へ_ )        \n");   
   	Sleep(1000);
   	system("cls");   

    printf("L  O  A  D  I  N  G . .\n\n");
    printf("    ___            \n");
   	printf("   レ  レ    __    \n");
   	printf("  | _  _ |  へ |   \n");
    printf(" /ミ ωミ|   / /   \n");
    printf("|         | | |    \n");
    printf("|  |  |  ||_/ |    \n");
    printf("|  |  |  ||_ /     \n");
    printf(" へ( _へ_ )        \n");
    Sleep(1000);
    system("cls");
    
    printf("L  O  A  D  I  N  G . . .\n\n");
    printf("    ___            \n");
   	printf("   レ  レ      __  \n");
    printf("  | _  _ |    /  | \n");
    printf(" /ミ ωミ|   / /   \n");
    printf("|         | | |    \n");
    printf("|  |  |  ||_/ |    \n");
    printf("|  |  |  ||_ /     \n");
    printf(" へ( _へ_ )        \n");   
   	Sleep(1000);
   	system("cls");   
   
  	printf("[%s의 스텟]\n", name);                                                 //스탯 
  	int rand_num; 
   	int a, b, c, d, e;
   
   	srand((unsigned)time(NULL));
   	rand_num= rand();
   	rand_num = rand() % 5 + 1;
   	a=rand_num;
   
   	rand_num = rand() % 5 + 1;   
   	b=rand_num;

   	rand_num = rand() % 5 + 1;   
   	c=rand_num;

   	rand_num = rand() % 5 + 1;
   	d=rand_num;

   	rand_num = rand() % 5 + 1;
   	e=rand_num;
   
   	printf("애 교 : %d", a);
   	stat(a);
   	printf("친밀감: %d", b);
   	stat(b);
   	printf("배고픔: %d", c);
   	stat(c);
   	printf("건 강 : %d", d);
   	stat(d);
   	printf("피 로 : %d", e);
   	stat(e);
   
   	do{
    	printf("<SPACE를 누르면 다음으로 넘어갑니다>\n"); 
      	tmp=getch();
    }while(tmp != 32);
      
   	system("cls"); 

   	int menu;
   	int count=0; 
	
C:  while(1)                                                            //메인화면 
   	{
      	if(count>9)
      	{
         	char end_name[100];
		 	int ending;
		 	srand((unsigned)time(NULL));
   			ending= rand();
   			ending = rand() % 4 + 1;
		 
			if(ending==1)
			{
				strcpy(end_name,"냐로호");
				system("cls");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("      ㅅ____ㅅ          \n");
				printf("     |       |            \n");
				printf("     | _  _  |    __       \n");
				printf("     /ミ ωミ|   / _|\n");
				printf("    |        |   | |\n");
				printf("    |        |  / / \n");
				printf("    || |  | ||  | | \n");
				printf("    | w    w | _/ |\n");
				printf("    |        | _ /\n");
				printf("    |        |\n");
				printf("     ㄴwㅡ w  \n");
				Sleep(300);
				system("cls");
			
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("      ㅅ____ㅅ          \n");
				printf("     |       |          쿠  \n");
				printf("     | _  _  |    __       \n");
				printf("     /ミ ωミ|   / _|         \n");
				printf("    |        |   | |           \n");
				printf("    |        |  / /            \n");
				printf("    || |  | ||  | |             \n");
				printf("    | w    w | _/ |           \n");
				printf("    |        | _ /           \n");
				printf("    |        |                 \n");
				printf("     ㄴwㅡ w               \n");
				printf("       | | |              \n");
				printf("       |   |             \n");
				Sleep(300);
				system("cls");
			
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("      ㅅ____ㅅ          \n");
				printf("     |       |         쿠   \n");
				printf("     | _  _  |    __       \n");
				printf("     /ミ ωミ|   / _|  과       \n");
				printf("    |        |   | |          \n");
				printf("    |        |  / / \n");
				printf("    || |  | ||  | | \n");
				printf("    | w    w | _/ |\n");
				printf("    |        | _ /\n");
				printf("    |        |\n");
				printf("     ㄴwㅡ w  \n");
				printf("       | | |\n");
				printf("       |   |\n");
				printf("      |    |\n");
				printf("      /    |\n");
				Sleep(300);
				system("cls");
			
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("      ㅅ____ㅅ          \n");
				printf("     |       |         쿠    \n");
				printf("     | _  _  |    __       \n");
				printf("     /ミ ωミ|   / _|  과 \n");
				printf("    |        |   | |\n");
				printf("    |        |  / /    과\n");
				printf("    || |  | ||  | | \n");
				printf("    | w    w | _/ |\n");
				printf("    |        | _ /\n");
				printf("    |        |\n");
				printf("     ㄴwㅡ w  \n");
				printf("       | | |\n");
				printf("       |   |\n");
				printf("      |    |\n");
				printf("      /    |\n");
				printf("     (      )\n");
				printf("     (      )\n");
				Sleep(300);
				system("cls");
			
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("      ㅅ____ㅅ          \n");
				printf("     |       |         쿠    \n");
				printf("     | _  _  |    __       \n");
				printf("     /ミ ωミ|   / _|  과\n");
				printf("    |        |   | |   \n");
				printf("    |        |  / /    과\n");
				printf("    || |  | ||  | |    \n");
				printf("    | w    w | _/ |    과\n");
				printf("    |        | _ / \n");
				printf("    |        |\n");
				printf("     ㄴwㅡ w  \n");
				printf("       | | |\n");
				printf("       |   |\n");
				printf("      |    |\n");
				printf("      /    |\n");
				printf("     (      )\n");
				printf("     (      )\n");
				printf("    /        |\n");
				printf("  /            |\n");
				Sleep(300);
				system("cls");
			
				printf("\n");
				printf("\n");
				printf("      ㅅ____ㅅ          \n");
				printf("     |       |         쿠   \n");
				printf("     | _  _  |    __       \n");
				printf("     /ミ ωミ|   / _|  과\n");
				printf("    |        |   | |  \n");
				printf("    |        |  / /    과\n");
				printf("    || |  | ||  | | \n");
				printf("    | w    w | _/ |    과\n");
				printf("    |        | _ /     \n");
				printf("    |        |         ★ \n");
				printf("     ㄴwㅡ w  \n");
				printf("\n");
				printf("\n");
				printf("       | | |\n");
				printf("       |   |\n");
				printf("      |    |\n");
				printf("      /    |\n");
				printf("     (      )\n");
				printf("     (      )\n");
				printf("    /        |\n");
				printf("  /            |\n");
				Sleep(300);
				system("cls");
			
				printf("      ㅅ____ㅅ          \n");
				printf("     |       |         쿠   \n");
				printf("     | _  _  |    __       \n");
				printf("     /ミ ωミ|   / _|  과\n");
				printf("    |        |   | |\n");
				printf("    |        |  / /    과\n");
				printf("    || |  | ||  | | \n");
				printf("    | w    w | _/ |    과\n");
				printf("    |        | _ /\n");
				printf("    |        |         ★\n");
				printf("     ㄴwㅡ w  \n");
				printf("\n");
				printf("\n");			
				printf("\n");
				printf("\n");
				printf("       | | |\n");
				printf("       |   |\n");
				printf("      |    |\n");
				printf("      /    |\n");
				printf("     (      )\n");
				printf("     (      )\n");
				printf("    /        |\n");
				printf("  /            |\n");
				Sleep(2000);
				system("cls");
			}
	
			else if(ending==2)
			{
				strcpy(end_name,"냐무");
				system("cls");		
				printf("                            \n");
				printf("                              \n");
				printf("               _____              \n");
				printf("             /      )           \n");
				printf("           (          )         \n");
				printf("          (    フ   フ  )       \n");
				printf("         (      o  o     )       \n");
				printf("          (   ミ ㅅ ミ  )     \n");
				printf("               |   |      /    \n");
				printf("        ＼     |w w|          \n");
				printf("               |   |     ＼   \n");
				printf("       /       |   |         \n");
				Sleep(2000);
				system("cls");
		
				printf("                            \n");
				printf("                              \n");
				printf("               _____              \n");
				printf("             /      )           \n");
				printf("           (          )         \n");
				printf("          (    フ   フ  )       \n");
				printf("         (      o  o     )       \n");
				printf("          (   ミ ㅅ ミ  )     \n");
				printf("               |   |      ＼    \n");
				printf("       /       |w w|          \n");
				printf("               |   |    /   \n");
				printf("     ＼        |   |         \n");
				Sleep(3000);
				system("cls");
		
		
			}
	
			else if(ending==3)
			{
				strcpy(end_name,"냥말");
				system("cls");
				printf("                            \n");
				printf("             |          |         /               \n");
				printf("                                                  \n");
				printf("       L         /フ-- フ                       \n");
				printf("                | o  o |              /            \n");
				printf("  구리          ミ ㅅ ミ                            \n");
				printf("                |-w--w-|                           \n"); 
				printf("      -         |      |               -           \n");
				printf("                |      |                    구리         \n");
				printf("                |       :.                         \n");
				printf("                |         '                       \n");
				printf("                ㄴ          :                        \n");
				printf("                  '...      :                      \n");
				printf("                      ''''''                     \n");
				printf("                                구리         \n");
				Sleep(1000); 
				system("cls");	
		
				printf("                            \n");
				printf("             |          |         /               \n");
				printf("                                                  \n");
				printf("       L         /フ-- フ                  구리     \n");
				printf("                | o  o |              /            \n");
				printf("                ミ ㅅ ミ                            \n");
				printf("                |-w--w-|                           \n"); 
				printf("      -         |      |               -           \n");
				printf("                |      |                            \n");
				printf("                |       :.                         \n");
				printf("                |         '                       \n");
				printf("    구리        ㄴ          :                        \n");
				printf("                  '...      :                      \n");
				printf("                      ''''''                     \n");
				printf("                                      구리         \n");		
				Sleep(1000);
				system("cls");
				
				printf("                            \n");
				printf("             |          |         /               \n");
				printf("                                                  \n");
				printf("       L         /フ-- フ                       \n");
				printf("                | o  o |              /            \n");
				printf("  구리          ミ ㅅ ミ                            \n");
				printf("                |-w--w-|                           \n"); 
				printf("      -         |      |               -           \n");
				printf("                |      |                    구리         \n");
				printf("                |       :.                         \n");
				printf("                |         '                       \n");
				printf("                ㄴ          :                        \n");
				printf("                  '...      :                      \n");
				printf("                      ''''''                     \n");
				printf("                                구리         \n");	
				Sleep(3000);
				system("cls");		
			}
	
			else if(ending==4)
			{
				strcpy(end_name,"영냥제");
				system("cls");
				printf("                            \n");
				printf("         /フ   フ    \n");
				printf("        |  o o |    \n");
				printf("        |ミ ㅅ ミ    \n");
				printf("        |      |   \n");
				printf("        | w   w|   \n");
				printf("        |------|   \n");
				printf("        |      |   \n");
				printf("        |      |   \n");
				printf("         |    /   \n");
				printf("          ----   \n");
				Sleep(1000);
				system("cls");
					
				printf("                            \n");
				printf("         /フ   フ    \n");
				printf("        |  o o |    \n");
				printf("        |ミ ㅅ ミ    \n");
				printf("    +   |      |   \n");
				printf("        | w   w|   \n");
				printf("        |------|   \n");
				printf("        |      |   \n");
				printf("        |      |   \n");
				printf("         |    /   \n");
				printf("          ----   \n");		
				Sleep(1000);
				system("cls");
				
				printf("                            \n");
				printf("         /フ   フ    \n");
				printf("        |  o o |   + \n");
				printf("        |ミ ㅅ ミ    \n");
				printf("    +   |      |   \n");
				printf("        | w   w|   \n");
				printf("        |------|   \n");
				printf("        |      |   \n");
				printf("        |      |   \n");
				printf("         |    /   \n");
				printf("          ----   \n");	
				Sleep(3000);
				system("cls");	
			
			}

		 	Sleep(1000);
         	printf("지금까지...\n");
         	Sleep(1000);
         	printf("감사했어요.....\n");
      		Sleep(1000);
      		printf("덕분에 ");
      		Sleep(500);
      		printf("저는...\n");
      		Sleep(1000); 
      		printf("멋진! %s(이)가 되었답니다! \n",end_name);
      		Sleep(1000);
      		printf("바이 ");
      		Sleep(300);
      		printf("바이, "); 
      		Sleep(1000);
      		printf("주인님...... ");
     		Sleep(1000);
      		printf("안녕......");
      		Sleep(3000);
         	goto D;
     	}
     
    	int rand_kongjee;
   		srand((unsigned)time(NULL));
    	rand_kongjee=rand();
    	rand_kongjee=rand()%2+1;

     
     
     
     	if(kbhit())
      	{
         	menu = getch();
         	if(menu=='1')
         	 break; 
         
         	else if(menu=='2')
         	 break;
         
         	else
         	 goto C;
      	}
      	
      	printf("    ~%d일차~\n\n",count+1); 
      	printf("무엇을 하시겠습니까?\n\n");            
   		printf("    ___            \n");
   		printf("   レ  レ    __    \n");
    	printf("  | o  o |  へ |   \n");
    	printf(" /ミ ωミ|   / /   \n");
    	printf("|         | | |    \n");
    	printf("|  |  |  ||_/ |    \n");
    	printf("|  |  |  ||_ /     \n");
    	printf(" へ( _へ_ )        \n");
       	printf("1. 메뉴\n");
      	printf("2. %s의 상태\n\n\n", name);      	
    	if(rand_kongjee==1)
    	 printf("※고양이는 배가 많이 고프면 집을 나간답니다♬\n");
    	else if(rand_kongjee==2)
    	 printf("※10일을 함께하면 고양이가 <진★화> 해요!\n");
       	Sleep(600);
       	system("cls");
      
       	printf("    ~%d일차~\n\n",count+1);
      	printf("무엇을 하시겠습니까?\n\n");
    	printf("    ___          \n");
  	 	printf("   レ  レ      __  \n");
    	printf("  | o  o |    /  ) \n");
    	printf(" /ミ ωミ|   / /   \n");
    	printf("|         | | |    \n");
    	printf("|  |  |  ||_/ |    \n");
    	printf("|  |  |  ||_ /     \n");
    	printf(" へ( _へ_ )        \n");
       	printf("1. 메뉴\n");
      	printf("2. %s의 상태\n\n\n", name);
    	if(rand_kongjee==1)
    	 printf("※고양이는 배가 많이 고프면 집을 나간답니다♬\n");
    	else if(rand_kongjee==2)
    	 printf("※10일을 함께하면 고양이가 <진★화> 해요!\n");    
      	Sleep(600);
       	system("cls"); 
      
       	printf("    ~%d일차~\n\n",count+1);
      	printf("무엇을 하시겠습니까?\n\n");
   		printf("    ___            \n");
   		printf("   レ  レ        \n");
    	printf("  | o  o |    --へ \n");
    	printf(" /ミ ωミ|   / -へ)\n");
    	printf("|         | | |    \n");
    	printf("|  |  |  ||_/ |    \n");
    	printf("|  |  |  ||_ /     \n");
    	printf(" へ( _へ_ )        \n");
       	printf("1. 메뉴\n");
      	printf("2. %s의 상태\n\n\n", name);
    	if(rand_kongjee==1)
    	 printf("※고양이는 배가 많이 고프면 집을 나간답니다♬\n"); 
    	else if(rand_kongjee==2)
    	 printf("※10일을 함께하면 고양이가 <진★화> 해요!\n");        
      	Sleep(600);
       	system("cls");
       
        printf("    ~%d일차~\n\n",count+1);
      	printf("무엇을 하시겠습니까?\n\n");
    	printf("    ___          \n");
   		printf("   レ  レ      __  \n");
    	printf("  | o  o |    /  ) \n");
    	printf(" /ミ ωミ|   / /   \n");
    	printf("|         | | |    \n");
    	printf("|  |  |  ||_/ |    \n");
    	printf("|  |  |  ||_ /     \n");
    	printf(" へ( _へ_ )        \n");
       	printf("1. 메뉴\n");
      	printf("2. %s의 상태\n\n\n", name);
    	if(rand_kongjee==1)
    	 printf("※고양이는 배가 많이 고프면 집을 나간답니다♬\n");  
    	else if(rand_kongjee==2)
    	 printf("※10일을 함께하면 고양이가 <진★화> 해요!\n");       
      	Sleep(600);
       	system("cls");
           
   	}
      
   if(menu=='1')                                                             //1 메뉴  
   {
      	printf("0. 뒤로가기\n");      
      	printf("1. 놀아주기\n");
      	printf("2. 밥주기\n");
      	printf("3. 쓰다듬기\n");
      	printf("4. 말걸기\n");
      	printf("5. 재우기\n");   
   
      	menu1_s=getch();
      
      
      	if(menu1_s==48)
      	{
      		system("cls");
      		goto C;
     	}
    
     	if(menu1_s==49)                                          //놀아주기 
     	{
       		system("cls");
       		printf("1.공 2.낚싯대 \n"); 
       		sel=getch();
       		if(sel==49)
      		{
            	system("cls");
           
        		int i;
        		for(i=0; i<2; i++)
      			{
         			printf("%s(은)는 공을 가지고 놀기 시작했다!\n\n", name);
        			printf("    __へ                      \n");
       				printf("   / __ ) /フ   フ            \n");
       				printf("  / /    |  o  o|              \n");
       				printf(" ( |____/  ミ ωミ            \n");
       				printf(" |       (      |                \n");
       				printf(" |    へ     へ  へ               \n");
       				printf(" (  へ __)_へ_ )_ )    ○  \n");       
           			Sleep(500);
           			system("cls");
           
        			printf("%s(은)는 공을 가지고 놀기 시작했다!\n\n", name);   
        			printf("    __へ                             \n");
       				printf("   / __ ) /フ   フ                 \n");
       				printf("  / /    |  o  o|                 \n");
       				printf(" ( |____/  ミ ωミ                 \n");
       				printf(" |       (         へ __     \n");
       				printf(" |    へ       へ  ____ )        \n");
       				printf(" (  へ __)_  へ_ )         ○         \n");  
       		      
           			Sleep(500);
           			system("cls"); 
     			}
     			
           		srand((unsigned)time(NULL));
           		rand_number=rand();
           		rand_number=rand()%4+1;
           		if(rand_number==1)
           		{
                 	printf("%s(이)가 당신의 무릎위에 올라왔다! \n\n",name);
           		}
           		else if(rand_number==2)
           		{
               		printf("%s(이)가 앞발을 열심히 핥는다. \n\n",name);
           		}
            	else
            	{
              	 	printf("%s(이)가 당신의 손에 얼굴을 부빈다! \n\n",name); 
            	}
            
         		int rand_stat; 
            	srand((unsigned)time(NULL));
            	rand_stat=rand();
            
           		rand_stat=rand()%4+1;
           		printf("애 교 : %d + %d ",a,rand_stat); 
           		if(a>9)
           		 printf("\b");           
		   		a+=rand_stat;
           		if(a>15)
           		 a=15;
           		stat(a);
           
           		rand_stat=rand()%4+1;
           		printf("친밀감: %d + %d ",b,rand_stat);
           		if(b>9)
           		 printf("\b");          
		   		b+=rand_stat;         
           		if(b>15)
           		 b=15;
           		stat(b);
           
           		rand_stat=rand()%4+1;
           		printf("배고픔: %d + %d ",c,rand_stat);
           		if(c>9)
           		 printf("\b");
		   		c+=rand_stat;
           		if(c>=15)
           		{   
                 	c=15;
                 	system("cls");
                 	bye(a, b, c, d, e);    
                 
                 	goto D;
         		}
         		stat(c); 


           
           
           		rand_stat=rand()%4+1;
           		printf("건 강 : %d + %d ",d,rand_stat);
           		if(d>9)
           		 printf("\b");
           		d+=rand_stat;           
           		if(d>=15)
           		{    
				   	d=15;
           	    	system("cls");
               		end_cab(a,b,c,d,e);
               		goto D;
           		}
           		stat(d);
           

           
           		rand_stat=rand()%4+1;
           		printf("피 로 : %d + %d ",e,rand_stat);
           		if(e>9)
           		 printf("\b");           
		   		e+=rand_stat;           
           		if(e>15)
           		 e=15;
           		stat(e);
           
           		Sleep(400);
            	printf("\n 아무키나 누르세요!"); 
           
            
           
           
        		menu1_s=getch();
        		if(menu1_s!=0)
        		 system("cls");
        		count= count+1;
        		goto C;
         
       		}
       		
       	else
       	{
           	system("cls");
           
        	int i;
        	for(i=0; i<2; i++)
      		{
         		printf("%s(은)는 낚싯대를 가지고 놀기 시작했다!\n\n", name);
         		printf("         / )       __\n");
           		printf("        / /)  /)  /  )       \n");
           		printf("       / /     | / /       へ\n");           
           		printf("      / /  o  o|/ /       /\n");
           		printf("     /    ミ_ωミ|       /\n");           
           		printf("                /       |\n");
           		printf("    |          |        /\n");
           		printf("    |          |       ☆\n");           
           		printf("    |          |\n");     
         		printf("               |\n"); 
         		printf("    |   /_     /_\n"); 
         		printf("     へ___) へ___)\n");       
           		Sleep(500);
           		system("cls");
           
           		printf("%s(은)는 낚싯대를 가지고 놀기 시작했다!\n\n", name);
           		printf("         / )       __\n");
           		printf("        / /)  /)  /  )       \n");
           		printf("       / /     | / /       へ\n");           
           		printf("      / /  o  o|/ /        |\n");
           		printf("     /    ミ_ωミ|        / \n");           
           		printf("                /        /\n");
           		printf("    |          |       /\n");
           		printf("    |          |      ★\n");           
           		printf("    |          |\n");     
         		printf("               |\n"); 
         		printf("    |   /_     /_\n"); 
         		printf("     へ___) へ___)\n");              
           		Sleep(500);
           		system("cls");           
        	}  
         
          
         

           
        	srand((unsigned)time(NULL));
        	rand_number=rand();
        	rand_number=rand()%4+1;
        
        	if(rand_number==1)
         	 printf("%s(이)가 당신의 무릎위에 올라왔다! \n\n",name);
        
        	else if(rand_number==2)
         	 printf("%s(이)가 앞발을 열심히 핥는다. \n\n",name);
        
        	else
         	 printf("%s(이)가 당신의 손에 얼굴을 부빈다! \n\n",name); 
        
            
            
        	int rand_stat; 
        	srand((unsigned)time(NULL));
        	rand_stat=rand();
            
        	rand_stat=rand()%4+1;
        	printf("애 교 : %d + %d ",a,rand_stat); 
        	if(a>9)
         	 printf("\b");
			a+=rand_stat;
        	if(a>15)
         	 a=15;
        	stat(a);
           
        	rand_stat=rand()%4+1;
        	printf("친밀감: %d + %d ",b,rand_stat);
        	if(b>9)
        	 printf("\b");
			b+=rand_stat;
        	if(b>15)
        	 b=15;
        	stat(b);
           
        	rand_stat=rand()%4+1;
        	printf("배고픔: %d + %d ",c,rand_stat);
        	if(c>9)
        	 printf("\b");
			c+=rand_stat; 
        	if(c>=15)
        	{
            	c=15;
            	system("cls");
            	bye(a, b, c, d, e);
            	goto D;
             
        	}
        	stat(c);
         
 
           
        	rand_stat=rand()%4+1;
        	printf("건 강 : %d + %d ",d,rand_stat);
        	if(d>9)
        	 printf("\b");
			d+=rand_stat;
        	if(d>=15)
        	{    
            	d=15;
            	system("cls");
            	end_cab(a,b,c,d,e);
            	goto D;
        	}
        	stat(d);
           

           
        	rand_stat=rand()%4+1;
        	printf("피 로 : %d + %d ",e,rand_stat);
        	if(e>9)
        	 printf("\b"); 
			e+=rand_stat;
        	if(e>15)
        	 e=15;
        	stat(e);
           
        	Sleep(400);
        	printf("\n 아무키나 누르세요!"); 
   
        	menu1_s=getch();
        	if(menu1_s!=0)
        	 system("cls");
        	count= count+1;
        	goto C; 
    	}
       
       
    }
   
   
   if(menu1_s==50)                                      // 밥주기 
   {
    	system("cls");
    	printf("1.싸구려사료 2.사료 3.고급사료 4.초고급사료\n");
    	menu_s=getch();
    	if(menu_s==49)
    	{
        	system("cls");
        	srand((unsigned)time(NULL));
        	rand_no=rand();
        	rand_no=rand()%2+1;
        	if(rand_no==1)
        	{
        		printf("%s(이)가 밥그릇을 던지고 집으로 들어가버렸다! \n\n",name);
        		printf("    __へ                      \n");
 				printf("   / __ ) /フ   フ            \n");
 				printf("  / /    |  o  o|    ?...        \n");
 				printf(" ( |____/  ミ ㅅミ        싸    \n");
 				printf(" |       (      |        구려        \n");
 				printf(" |    へ     へ  へ     사__료          \n");
 				printf(" (  へ __)_へ_ )_ )    /______＼ \n");  
 				Sleep(2000);
 				system("cls");
 		
 				printf("%s(이)가 밥그릇을 던지고 집으로 들어가버렸다! \n\n",name);
 		 		printf("    __へ                                             \n");
 				printf("   / __ ) /フ   フ                                  \n");
 				printf("  / /    |  0  0|       .........                          \n");
 				printf(" ( |____/  ミ ㅅミ            ___                      \n");
 				printf(" |       (         へ __      ＼ ＼  싸          \n");
 				printf(" |    へ       へ  ____ )       ＼ ＼   려  료             \n");
 				printf(" (  へ __)_  へ_ )                ＼|  구 사             \n");
 				Sleep(2000);
 				system("cls");
             
            	int rand_stat;
            	srand((unsigned)time(NULL));
            	rand_stat=rand();
            
            
           		rand_stat=rand()%4+3;
           		printf("친밀감: %d - %d ",b,rand_stat);
           		if(b>9)
           		 printf("\b");
		   		b-=rand_stat;
           		if(b<0)
           		 b=0;
           		stat(b);
           
           		rand_stat=rand()%4+3;
           		printf("배고픔: %d + %d ",c,rand_stat);
           		if(c>9)
           		 printf("\b");
		   		c+=rand_stat; 
           		if(c>=15)
           		{
            		c=15;
            		system("cls");
          			bye(a, b, c, d, e);
                	goto D;
         		}
         		stat(c);
         
         		rand_stat=rand()%4+3;
           		printf("건강: %d - %d   ",d,rand_stat);
           		if(d>9)
           		 printf("\b");
         		d-=rand_stat;
           		if(d<0)
           		 d=0;
           		stat(d);
         		printf("\n 아무키나 누르세요!"); 
                                                               
           
           
        		menu1_s=getch();
        		if(menu1_s!=0)
        		 system("cls");
        		count= count+1;
        		goto C;
			}
        
        	else 
    		{
            	printf("%s(이)가 사료를 먹긴 먹지만 어딘가 슬퍼보인다...\n\n",name);
				printf("         /フ   フ   \n");
 				printf("        |  o  o|   ... \n");
 				printf("       /  ミ ㅅミ                  \n");
 				printf("      /         |               \n");
 				printf("   __/    へ    ノ      사료       \n");
 				printf(" /   |     |  | |      사__료        \n");
 				printf("|     へ __へ_ )_ )   /______＼        \n");
 				Sleep(2000);
 				system("cls");
 		
        		printf("%s(이)가 사료를 먹긴 먹지만 어딘가 슬퍼보인다...\n\n",name);
				printf("                                  \n");
 				printf("             /フ   フ         \n");
 				printf("        ____|  o  o|   .....         \n");
 				printf("      /       ミ Δミ             \n");
 				printf("   __/                    료         \n");
 				printf(" /   |     |  ノ  ノ   사__료              \n");
 				printf("|     へ __へ_ ) _)   /______＼             \n");
 				Sleep(1000);
 				system("cls");
 		
 				printf("%s(이)가 사료를 먹긴 먹지만 어딘가 슬퍼보인다...\n\n",name);
				printf("                                  \n");
 				printf("             /フ   フ         \n");
 				printf("        ____|  o  o|   .......         \n");
 				printf("      /       ミ ㅅミ             \n");
 				printf("   __/                              \n");
 				printf(" /   |     |  ノ  ノ   사__료              \n");
 				printf("|     へ __へ_ ) _)   /______＼             \n");
 				Sleep(1000);
 				system("cls");
		
				printf("%s(이)가 사료를 먹긴 먹지만 어딘가 슬퍼보인다...\n\n",name); 
				printf("                                  \n");
 				printf("             /フ   フ         \n");
 				printf("        ____|  o  o|   .........         \n");
 				printf("      /       ミ Δミ             \n");
 				printf("   __/                             \n");
 				printf(" /   |     |  ノ  ノ   ____료              \n");
 				printf("|     へ __へ_ ) _)   /______＼             \n"); 		
 				Sleep(1000);
 				system("cls");
		 
				printf("%s(이)가 사료를 먹긴 먹지만 어딘가 슬퍼보인다...\n\n",name); 
				printf("                                  \n");
 				printf("             /フ   フ         \n");
 				printf("        ____|  o  o|   ...........         \n");
 				printf("      /       ミ ㅅミ             \n");
 				printf("   __/                              \n");
 				printf(" /   |     |  ノ  ノ   ______              \n");
 				printf("|     へ __へ_ ) _)   /______＼             \n");
				Sleep(2000);
 				system("cls");		
		    
            	int rand_stat;
            	srand((unsigned)time(NULL));
            	rand_stat=rand();
           
           		rand_stat=rand()%3+3;
           		printf("친밀감: %d - %d ",b,rand_stat);
           		if(b>9)
           		 printf("\b");
		   		b-=rand_stat;
           		if(b<0)
           		 b=0;
           		stat(b);
           
           		rand_stat=rand()%4+1;
           		printf("배고픔: %d - %d ",c,rand_stat);
           		if(c>9)
           		 printf("\b");
		   		c-=rand_stat;
		    	if(c<0)
          		 c=0;
           		stat(c);
           
          
            	rand_stat=rand()%3+3;
           		printf("건강: %d - %d   ",d,rand_stat);
           		if(d>9)
           		 printf("\b");
         		d-=rand_stat;
           		if(d<0)
           		 d=0;
           		stat(d);
           
            	Sleep(400);
            	printf("\n 아무키나 누르세요!"); 
       
        	}
    	}
    	else if(menu_s==50)
    	{
        	system("cls");
        	printf("%s(이)가 사료를 먹는다.\n\n",name); 
			printf("         /フ   フ       \n");
 			printf("        |  o  o|   ...!    \n");
 			printf("       /  ミ ㅅミ                  \n");
 			printf("      /         |               \n");
 			printf("   __/    へ    ノ      사료      \n");
 			printf(" /   |     |  | |      사__료        \n");
 			printf("|     へ __へ_ )_ )   /______＼        \n"); 
       		Sleep(2000);
       		system("cls");
        
        	printf("%s(이)가 사료를 먹는다.\n\n",name);
        	printf("                                  \n");
 			printf("             /フ   フ         \n");
 			printf("        ____|  o  o|   ♬         \n");
 			printf("      /       ミ ▽ミ             \n");
 			printf("   __/                  사료          \n");
 			printf(" /   |     |  ノ  ノ   사__료              \n");
 			printf("|     へ __へ_ ) _)   /______＼             \n");
        	Sleep(1000);
        	system("cls");
		
			printf("%s(이)가 사료를 먹는다.\n\n",name); 		
        	printf("                                  \n");
 			printf("             /フ   フ     ♪    \n");
 			printf("        ____|  o  o|   ♬         \n");
 			printf("      /       ミ ㅅミ             \n");
 			printf("   __/                    료        \n");
 			printf(" /   |     |  ノ  ノ   사__료              \n");
 			printf("|     へ __へ_ ) _)   /______＼             \n");
        	Sleep(1000);
        	system("cls");
		
        	printf("%s(이)가 사료를 먹는다.\n\n",name);
        	printf("                                  \n");
 			printf("             /フ   フ         \n");
 			printf("        ____|  o  o|   ♬         \n");
 			printf("      /       ミ ▽ミ             \n");
 			printf("   __/                            \n");
 			printf(" /   |     |  ノ  ノ    ____료              \n");
 			printf("|     へ __へ_ ) _)   /______＼             \n");
        	Sleep(1000);
        	system("cls");
		
			printf("%s(이)가 사료를 먹는다.\n\n",name); 		
        	printf("                                  \n");
 			printf("             /フ   フ     ♪    \n");
 			printf("        ____|  o  o|   ♬         \n");
 			printf("      /       ミ ㅅミ             \n");
 			printf("   __/                            \n");
 			printf(" /   |     |  ノ  ノ   ______              \n");
 			printf("|     へ __へ_ ) _)   /______＼             \n");
        	system("cls"); 	
		
			printf("친밀감: %d + %d ",b, 1);	
			if(b>9)
        	 printf("\b");
			b=b+1;
			if(b>15)
			 b=15;
			stat(b);
		
			printf("건 강 : %d + %d ", d, 1);
			if(d>9)
        	 printf("\b");
			d=d+1;
           if(d>=15)
           	{    d=15;
               system("cls");
               end_cab(a,b,c,d,e);
               goto D;
           	}
           stat(d);  

		
			printf("배고픔: %d - %d ", c, 2);
			if(c>9)
        	 printf("\b");
			c=c-2;
			if(c<0)
			 c=0;
			stat(c);        
       
	   		printf("\n 아무키나 누르세요!");  
    	}
    	else if(menu_s==51)
    	{
         	system("cls");
        	printf("%s(이)가 너무 좋은나머지 밥그릇에 들어가버렸다.\n\n",name); 
			printf("         /フ   フ       \n");
 			printf("        |  o  o|   ...!    \n");
 			printf("       /  ミ ㅅミ                  \n");
 			printf("      /         |               \n");
 			printf("   __/    へ    ノ      사료      \n");
 			printf(" /   |     |  | |      사__료        \n");
 			printf("|     へ __へ_ )_ )   /______＼        \n"); 
        	Sleep(2000);
        	system("cls");
        
        	printf("%s(이)가 너무 좋은나머지 밥그릇에 들어가버렸다.\n\n",name); 
			printf("                                  \n");
 			printf("             /フ   フ         \n");
 			printf("        ____|  o  o|   !!!♥♥         \n");
 			printf("      /       ミ_▽ミ             \n");
 			printf("   __/                  사료          \n");
 			printf(" /   |     |  ノ  ノ   사__료              \n");
 			printf("|     へ __へ_ ) _)   /______＼             \n");
        	Sleep(2000);
        	system("cls");
		
			printf("%s(이)가 너무 좋은나머지 밥그릇에 들어가버렸다.\n",name); 		
 			printf("                         ___                     \n");     
			printf("                       レ   レ     / へ♥              \n");
 			printf("                      |  o _o     / へ )              \n");
 			printf("                     / ミ ▽ ミ  / /                  \n");
 			printf("                    |         | | |                   \n");          
 			printf("                    |  |  |  ||_/ |                     \n");   
 			printf("                    |  |__|__||_ /              \n");
 			printf("                    ＼/______＼          \n");
        	Sleep(1000);
        	system("cls"); 
        
        
        	printf("%s(이)가 너무 좋은나머지 밥그릇에 들어가버렸다.\n",name); 		
 			printf("                         ___                     \n");     
			printf("                       レ   レ     __  ♥      \n");
 			printf("                      |  - _-     /  )         \n");
 			printf("             ♥      / ミ ▽ ミ  / /                  \n");
 			printf("                    |         | | |                   \n");          
 			printf("                    |  |  |  ||_/ |                     \n");   
 			printf("                    |  |__|__||_ /              \n");
 			printf("                    ＼/______＼          \n");
        	Sleep(1000);
        	system("cls"); 
        	
        	printf("%s(이)가 너무 좋은나머지 밥그릇에 들어가버렸다.\n",name); 		
 			printf("                         ___                     \n");     
			printf("                  ♥   レ   レ    __  ♥      \n");
 			printf("                      |  o _o    へ |   \n");
 			printf("             ♥      / ミ ▽ ミ   / |  \n");
 			printf("                    |         |  / /                   \n");          
 			printf("                    |  |  |  ||_/ /                     \n");   
 			printf("                    |  |__|__||_ /              \n");
 			printf("                    ＼/______＼          \n");
        	Sleep(2000);
        	system("cls"); 

			printf("애 교 : %d + %d ",a, 3);	
			if(a>9)
        	 printf("\b");
			a=a+3;
			if(a>15)
			 a=15;
			stat(a);
		
			printf("건 강 : %d + %d ", d, 3);
			if(d>9)
        	 printf("\b");
			d=d+3;
           	if(d>=15)
           	{   d=15;
               	system("cls");
               	end_cab(a,b,c,d,e);
               	goto D;
           	}
           	stat(d);
		
			printf("배고픔: %d - %d ", c, 3);
			if(c>9)
        	 printf("\b");
			c=c-3;
			if(c<0)
			 c=0;
			stat(c);
		
			printf("친밀감: %d + %d ",b, 3);	
			if(b>9)
        	 printf("\b");
			b=b+3;
			if(b>15)
			 b=15;
			stat(b);		 
        
        	printf("\n 아무키나 누르세요!"); 
    	}
    	else
    	{ 
         	system("cls"); 
        	printf("%s(이)가 눈 초점이 안맞는 채로 사료를 3통째 먹어치우는 중이다.\n\n",name);  
        	printf("                                                           \n");                       
 			printf("             /フ   フ                                        \n");
 			printf("        ____|  ○  o|  ...       |      | |      | |      |      \n");
 			printf("      /       ミ Δ ミ           |      | |      | |      |        \n");
 			printf("   __/                  사료     |사료사| |      | |      |    \n");
 			printf(" /   |     |  ノ  ノ   사__료    |료사료| |      | |      |        \n");
 			printf("|     へ __へ_ ) _)   /______＼  |사_료_| |______| |______|         \n");
        	Sleep(2000);
        	system("cls");
		
			printf("%s(이)가 눈 초점이 안맞는 채로 사료를 3통째 먹어치우는 중이다.\n\n",name);  		
 			printf("                                                           \n"); 
 			printf("             /フ   フ                                        \n");
 			printf("        ____|  ○  o|  ...ㅎ     |      | |      | |      |      \n");
 			printf("      /       ミ ▽ ミ           |      | |      | |      |        \n");
 			printf("   __/                    료     |사료사| |      | |      |    \n");
 			printf(" /   |     |  ノ  ノ   사__료    |료사료| |      | |      |        \n");
 			printf("|     へ __へ_ ) _)   /______＼  |사_료_| |______| |______|         \n");
        	Sleep(1000);
        	system("cls"); 
        
        
        	printf("%s(이)가 눈 초점이 안맞는 채로 사료를 3통째 먹어치우는 중이다.\n\n",name);  		
 			printf("                                                           \n"); 
 			printf("             /フ   フ                                        \n");
 			printf("        ____|  ○  o|            |      | |      | |      |      \n");
 			printf("      /       ミ Δ ミ           |      | |      | |      |        \n");
 			printf("   __/                           |사료사| |      | |      |    \n");
 			printf(" /   |     |  ノ  ノ   ____료    |료사료| |      | |      |        \n");
 			printf("|     へ __へ_ ) _)   /______＼  |사_료_| |______| |______|         \n");
        	Sleep(2000);
        	system("cls"); 
        
        	printf("%s(이)가 눈 초점이 안맞는 채로 사료를 3통째 먹어치우는 중이다.\n\n",name); 		
			printf("                                                           \n"); 
 			printf("             /フ   フ                                        \n");
 			printf("        ____|  ○  o| ㅎㅎㅎㅎ   |      | |      | |      |      \n");
 			printf("      /       ミ ▽ ミ           |      | |      | |      |        \n");
 			printf("   __/                           |사료사| |      | |      |    \n");
 			printf(" /   |     |  ノ  ノ   ______    |료사료| |      | |      |        \n");
 			printf("|     へ __へ_ ) _)   /______＼  |사_료_| |______| |______|         \n");

			Sleep(2000);
        	system("cls"); 
        
			printf("애 교 : %d + %d ",a, 5);
			if(a>9)
           	 printf("\b");	
			a=a+5;
			if(a>15)
			 a=15;
			stat(a);
		
			printf("건 강 : %d + %d ", d, 5);
			if(d>9)
           	 printf("\b");
			d=d+5;
           	if(d>=15)
           	{   d=15;
              	 system("cls");
               	end_cab(a,b,c,d,e);
               	goto D;
           	}
           	stat(d);
		
			printf("배고픔: %d - %d ", c, 5);
			if(c>9)
          	  printf("\b");
			c=c-5;
			if(c<0)
			 c=0;
			stat(c);
		
			printf("친밀감: %d + %d ",b, 5);
			if(b>9)
           	 printf("\b");	
			b=b+5;
			if(b>15)
			 b=15;
			stat(b);        

        	printf("\n 아무키나 누르세요!"); 
    	}
    
     	menu1_s=getch();
        if(menu1_s!=0)
         system("cls");
        count= count+1;
        goto C;
   	}
   
   
   if(menu1_s==51)                                     // 쓰다듬 기  
   {
       	system("cls");
	    printf("%s (을)를 쓰다듬었다!\n\n\n\n",name); 
	    printf("    __へ               \n");
       	printf("   / __ ) /フ   フ     \n");
	    printf("  / /    |  o  o|      \n");
	    printf(" ( |____/  ミ ㅅ ミ     \n");
	    printf(" |       (      |      \n");
	    printf(" |    へ     へ  へ    \n");
	    printf(" (  へ __)_へ_ )_ )    \n");
	    Sleep(1500);
	    system("cls");
	    printf("\n\n\n                   \n"); 
        printf("    __へ               \n");
       	printf("   / __ ) /フ   フ     \n");
       	printf("  / /    |  o  o|    !!....  \n");
       	printf(" ( |____/  ミ ㅁ ミ     \n");
       	printf(" |       (      |      \n");
       	printf(" |    へ     へ  へ    \n");
       	printf(" (  へ __)_へ_ )_ )    \n");
       	Sleep(2000);
       	system("cls");
       
       	int rand_ss;
        srand((unsigned)time(NULL));
        rand_ss=rand();
        rand_ss=rand()%6+1;
        if(rand_ss==1)
        {
           
        	int i;
        	for(i=0; i<2; i++)
        	{
            	printf("%s(이)가 화내면서 당신을 할퀴었다.\n\n\n",name); 
           		printf("                 \n"); 
         		printf("   ＼ ＼ ＼       \n");
         		Sleep(200);
         		system("cls");
 
          		printf("%s(이)가 화내면서 당신을 할퀴었다.\n\n\n",name);
         		printf("   ＼ ＼ ＼       \n");
         		printf("     ＼ ＼ ＼     \n");
         		Sleep(200);
         		system("cls");         
         
         		printf("%s(이)가 화내면서 당신을 할퀴었다.\n\n\n",name);
         		printf("                 \n"); 
         		printf("   ＼ ＼ ＼       \n");
         		printf("     ＼ ＼ ＼     \n");
         		printf("       ＼ ＼ ＼    \n");
         		Sleep(200);
         		system("cls");
         
         		printf("%s(이)가 화내면서 당신을 할퀴었다.\n\n\n",name);         
           		printf("                 \n"); 
         		printf("   ＼ ＼ ＼       \n");
         		printf("     ＼ ＼ ＼     \n");
         		printf("       ＼ ＼ ＼    \n");
         		printf("         ＼ ＼ ＼   \n");                  
         		Sleep(200);
         		system("cls");
         
         		printf("%s(이)가 화내면서 당신을 할퀴었다.\n\n\n",name);
         		printf("                     \n"); 
         		printf("        /  /  /    \n");         
         		Sleep(200);
         		system("cls");

         		printf("%s(이)가 화내면서 당신을 할퀴었다.\n\n\n",name);
         		printf("                     \n"); 
         		printf("        /  /  /    \n");
         		printf("       /  /  /     \n");
         		Sleep(200);
         		system("cls");
         
         		printf("%s(이)가 화내면서 당신을 할퀴었다.\n\n\n",name);               
         		printf("                     \n"); 
         		printf("        /  /  /    \n");
         		printf("       /  /  /     \n");
         		printf("      /  /  /     \n");
         		Sleep(200);
         		system("cls");         
         
         		printf("%s(이)가 화내면서 당신을 할퀴었다.\n\n\n",name);
         		printf("                     \n"); 
         		printf("        /  /  /    \n");
         		printf("       /  /  /     \n");
         		printf("      /  /  /     \n");
         		printf("     /  /  /      \n");   
         		Sleep(400);
         		system("cls");                        
   			}
   			
         	printf("%s(이)가 화내면서 당신을 할퀴었다.\n\n\n",name);
         	printf("                     \n"); 
         	printf("        /  /  /    \n");
         	printf("       /  /  /     \n");
         	printf("      /  /  /     \n");
         	printf("     /  /  /      \n");  
         
           	Sleep(1000);
           	system("cls");
           	printf("애 교 : %d - %d ",a,3);
           	if(a>9)
           	 printf("\b");
           	a-=3;
           	if(a<0)
           	 b=0;
           	stat(b);
           
            printf("친밀감: %d - %d ",b,3);
            if(b>9)
           	 printf("\b");
            b-=3;
            if(b<0)
             b=0;
            stat(b);
            
            Sleep(400);
            printf("\n 아무키나 누르세요!"); 
		}
      
      
        
    	else if(rand_ss==2)
    	{
        	printf("%s(이)가 별 감흥 없어보인다.\n\n\n",name);
        	printf("    __へ                  \n\n");
        	printf("   / __ ) /フ   フ      .\n");
        	printf("  / /    |  ㅁ ㅁ|      \n");
        	printf(" ( |____/  ミ ㅅ ミ     \n");
        	printf(" |       (      |      \n");
        	printf(" |    へ     へ  へ    \n");
        	printf(" (  へ __)_へ_ )_ )    \n");
        	Sleep(400);
        	system("cls");
        	printf("%s(이)가 별 감흥 없어보인다.\n\n\n",name);
        	printf("    __へ                  \n\n");
        	printf("   / __ ) /フ   フ      . .\n");
        	printf("  / /    |  ㅁ ㅁ|      \n");
        	printf(" ( |____/  ミ ㅅ ミ     \n");
        	printf(" |       (      |      \n");
        	printf(" |    へ     へ  へ    \n");
        	printf(" (  へ __)_へ_ )_ )    \n");
        	Sleep(400);
        	system("cls");
        	printf("%s(이)가 별 감흥 없어보인다.\n\n\n",name);
        	printf("    __へ                  \n\n");
        	printf("   / __ ) /フ   フ      . . .\n");
        	printf("  / /    |  ㅁ ㅁ|      \n");
        	printf(" ( |____/  ミ ㅅ ミ     \n");
        	printf(" |       (      |      \n");
        	printf(" |    へ     へ  へ    \n");
        	printf(" (  へ __)_へ_ )_ )    \n");
        	Sleep(1000);
        	system("cls");
            
        	printf("애 교 : %d + %d ",a,1);
        	if(a>9)
        	printf("\b");
        	a+=1;
        	if(a>15)
        	 a=15;
        	stat(a);
           
        	printf("친밀감: %d - %d ",b,1);
        	if(b>9)
        	 printf("\b");
        	b+=1;
        	if(b>15)
        	 b=15;
        	stat(b);
            
        	Sleep(400);
        	printf("\n 아무키나 누르세요!"); 
    	}
    	else if(rand_ss==3)
    	{
    		int i;
        	for(i=0; i<2; i++)
    		{
      
    			printf("%s(이)가 귀를 쫑긋했다.\n\n\n\n",name);
    			printf("          /)  /)    \n");   
    			printf("         /     |    \n");
    			printf("        |  _  _|    \n");
    			printf("       /  ミ_ωミ   \n");
    			printf("      /         |   \n");
    			printf("   __/    へ    ノ  \n");
    			printf(" /   |     |  | |   \n");
    			printf("|     へ __へ_ )_ ) \n");
    			Sleep(500);
    			system("cls");
            
    			printf("%s(이)가 귀를 쫑긋했다.\n\n\n\n",name);
    			printf("                     \n");
    			printf("         /フ   フ   \n");
    			printf("        |  _  _|    \n");
    			printf("       /  ミ_ωミ   \n");
    			printf("      /         |   \n");
    			printf("   __/    へ    ノ  \n");
    			printf(" /   |     |  | |   \n");
    			printf("|     へ __へ_ )_ ) \n");
    			Sleep(1000);
    			system("cls");
   			}
        
			printf("%s(이)가 귀를 쫑긋했다.\n\n\n\n",name);
     		printf("                     \n");
       		printf("         /フ   フ   \n");
      		printf("        |  _  _|    \n");
       		printf("       /  ミ_ωミ   \n");
       		printf("      /         |   \n");
       		printf("   __/    へ    ノ  \n");
      		printf(" /   |     |  | |   \n");
       		printf("|     へ __へ_ )_ ) \n");
        	Sleep(1000);
        	system("cls");
       
       		printf("애 교 : %d + %d ",a,3);
        	if(a>9)
        	 printf("\b");
			a+=3;
        	if(a>15)
        	 a=15;
        	stat(a);
           
        	printf("친밀감: %d + %d ",b,3);
        	if(b>9)
        	 printf("\b");
			b+=3;
        	if(b>15)
        	 b=15;
       		stat(b);
        
        	Sleep(400);
        	printf("\n 아무키나 누르세요!"); 
    	}
        
		else if(rand_ss==4)
    	{
        	printf("%s(이)가 \"야옹\"했다.\n\n\n",name);
        	printf("    __へ               \n");
       		printf("   / __ ) /フ   フ     \n");
       		printf("  / /    |  o  o|      \n");
       		printf(" ( |____/  ミ . ミ     \n");
       		printf(" |       (      |      \n");
       		printf(" |    へ     へ  へ    \n");
       		printf(" (  へ __)_へ_ )_ )    \n");
       		Sleep(1000);
       		system("cls");

			printf("%s(이)가 \"야옹\"했다.\n\n\n",name);
       		printf("    __へ               \n");
       		printf("   / __ ) /フ   フ     \n");
       		printf("  / /    |  o  o|      \n");
       		printf(" ( |____/  ミ o ミ     \n");
       		printf(" |       (      |      \n");
       		printf(" |    へ     へ  へ    \n");
       		printf(" (  へ __)_へ_ )_ )    \n");
       		Sleep(1000);
       		system("cls");

			printf("%s(이)가 \"야옹\"했다.\n\n\n",name);
       		printf("    __へ               \n");
       		printf("   / __ ) /フ   フ     \n");
       		printf("  / /    |  -  -|      \n");
       		printf(" ( |____/  ミ O ミ     \n");
       		printf(" |       (      |      \n");
       		printf(" |    へ     へ  へ    \n");
       		printf(" (  へ __)_へ_ )_ )    \n");
      		Sleep(1000);
       		system("cls");

			printf("%s(이)가 \"야옹\"했다.\n\n\n",name);
       		printf("    __へ               \n");
       		printf("   / __ ) /フ   フ     야 \n");
       		printf("  / /    |  -  -|      \n");
       		printf(" ( |____/  ミ O ミ     \n");
       		printf(" |       (      |      \n");
       		printf(" |    へ     へ  へ    \n");
       		printf(" (  へ __)_へ_ )_ )    \n");
       		Sleep(1000);
       		system("cls");

			printf("%s(이)가 \"야옹\"했다.\n\n\n",name);	  
       		printf("    __へ               \n");
       		printf("   / __ ) /フ   フ     야 옹\n");
       		printf("  / /    |  -  -|      \n");
       		printf(" ( |____/  ミ O ミ     \n");
       		printf(" |       (      |      \n");
       		printf(" |    へ     へ  へ    \n");
       		printf(" (  へ __)_へ_ )_ )    \n");
       		Sleep(1000);
       		system("cls");

			printf("%s(이)가 \"야옹\"했다.\n\n\n",name);       
       		printf("  +  __へ      +         \n");
       		printf("+  / __ ) /フ   フ     야 옹 \n");
       		printf("  / /    |  -  -|   +   \n");
       		printf(" ( |____/  ミ O ミ     +\n");
       		printf(" |       (      |      \n");
       		printf(" |    へ     へ  へ    \n");
       		printf(" (  へ __)_へ_ )_ )    \n");

        	printf("애 교 : %d + %d ",a,3);
        	if(a>9)
        	 printf("\b");
			a+=3;
        	if(a>15)
        	 a=15;
        	stat(a);
           
        	printf("친밀감: %d + %d ",b,3);
        	if(b>9)
        	 printf("\b");
			b+=3;
        	if(b>15)
        	 b=15;
        	stat(b);
		 

        	Sleep(400);
        	printf("\n 아무키나 누르세요!"); 
    	}	
        
		else
    	{
        	int i;
        	for(i=0; i<2; i++)
        	{
				printf("%s(이)가 그루밍을 하기 시작했다.\n\n\n",name);
            	printf("         /フ   フ            \n");
 				printf("        /  _  _|          \n");
 				printf("       /  ミ_ωミ                \n");
 				printf("      /                 \n");
 				printf("   __/    へ    ノ           \n");
 				printf(" /   |     |  | |           \n");
 				printf("|     へ __へ_ )_)       \n");
            	Sleep(1000);
            	system("cls");
            
            	printf("%s(이)가 그루밍을 하기 시작했다.\n\n\n",name);
            	printf("         /フ   フ            \n");
 				printf("        /  _  _| __         \n");
 				printf("       /  ミ_ 3 /  )            \n");
 				printf("      /          /       \n");
 				printf("   __/    へ   ノ           \n");
 				printf(" /   |     |  |            \n");
 				printf("|     へ __へ_ )        \n"); 
 				Sleep(1000);
 				system("cls");
        
          
        	}
        	printf("애 교 : %d + %d ",a,3);
        	if(a>9)
        	 printf("\b");
			a+=3;
        	if(a>15)
        	 a=15;
        	stat(a);
           
        	printf("친밀감: %d + %d ",b,3);
        	if(b>9)
        	 printf("\b");
			b+=3;
        	if(b>15)
        	 b=15;
        	stat(b);
        
        	Sleep(400);
      
      		printf("\n 아무키나 누르세요!"); 
  		}
    
		menu1_s=getch();
    	if(menu1_s!=0) 
    	 system("cls");
    	count= count+1;
    	goto C;
   	}
   

   
   if(menu1_s==52)                                    //말걸기  
   	{
        int i;
        if(a>=10)
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(이)가 대답하려는듯하다.\n\n",name); 
        		printf("     ___             \n");     
      			printf("   レ   レ            \n");
       			printf("  |  o _o      --へ  \n");
       			printf(" / ミ  ㅅミ  /  -へ )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");

      			printf("%s(이)가 대답하려는듯하다.\n\n",name); 
       			printf("     ___        ♡♥ 움늄냠늉냥 ♥♡ \n");     
      			printf("   レ   レ      -へ  \n");
       			printf("  |  o _o     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(3000);
       			system("cls");
       
       
      		}
    
    	}
    
     	else if(b>=10)
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(이)가 대답하려는듯하다.\n\n",name); 
        		printf("     ___             \n");     
      			printf("   レ   レ            \n");
       			printf("  |  o _o      --へ  \n");
       			printf(" / ミ  ㅅミ  /  -へ )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");

      			printf("%s(이)가 대답하려는듯하다.\n\n",name); 
       			printf("     ___      집사    \n");     
     		 	printf("   レ   レ      -へ  \n");
       			printf("  |  o _o     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");
       
        		printf("%s(이)가 대답하려는듯하다.\n\n",name); 
       			printf("     ___      집사 너무    \n");     
      			printf("   レ   レ      -へ  \n");
       			printf("  |  o _o     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");
       
        		printf("%s(이)가 대답하려는듯하다.\n\n",name); 
       			printf("     ___      집사 너무 좋아!!!!!!!!!!!!!!!!!!!!!!!!!!!!!    \n");     
      			printf("   レ   レ      -へ  \n");
       			printf("  |  o _o     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(3000);
       			system("cls");
       
      		}
  		}
    
    	else if(c>=10)
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(이)가 대답하려는듯하다.\n\n",name); 
        		printf("     ___             \n");     
      			printf("   レ   レ            \n");
       			printf("  |  o _o      --へ  \n");
       			printf(" / ミ  ㅅミ  /  -へ )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");

      			printf("%s(이)가 대답하려는듯하다.\n\n",name); 
       			printf("     ___        밥조. \n");     
      			printf("   レ   レ      -へ  \n");
       			printf("  |  o _o     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");
       
       
      			printf("%s(이)가 대답하려는듯하다.\n\n",name); 
      	 		printf("     ___        밥조.. \n");     
      			printf("   レ   レ      -へ  \n");
       			printf("  |  o _o     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");
       
       
      			printf("%s(이)가 대답하려는듯하다.\n\n",name); 
       			printf("     ___        밥조... \n");     
      			printf("   レ   レ      -へ  \n");
       			printf("  |  o _o     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(3000);
       			system("cls");
       
       
      		}
    
    	}
    
    	 else if(d>=10)
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(이)가 대답하려는듯하다.\n\n",name); 
        		printf("     ___             \n");     
      			printf("   レ   レ            \n");
       			printf("  |  o _o      --へ  \n");
       			printf(" / ミ  ㅅミ  /  -へ )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");

     			 printf("%s(이)가 대답하려는듯하다.\n\n",name); 
       			printf("     ___        산책가자 집사야 \n");     
      			printf("   レ   レ   +   -へ  \n");
       			printf("  |  o _o     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(3000);
       			system("cls");
       
       
      		}
    
    	}
    
    	else if(e>=10)
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(이)가 대답하려는듯하다.\n\n",name); 
        		printf("     ___             \n");     
      			printf("   レ   レ            \n");
       			printf("  |  o _o      --へ  \n");
       			printf(" / ミ  ㅅミ  /  -へ )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");

      			printf("%s(이)가 대답하려는듯하다.\n\n",name); 
       			printf("     ___        잠좀자게해주라. \n");     
      			printf("   レ   レ      -へ  \n");
       			printf("  |  - _-     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");
       
       
      			printf("%s(이)가 대답하려는듯하다.\n\n",name); 
       			printf("     ___        잠좀자게해주라.. \n");     
      			printf("   レ   レ      -へ  \n");
       			printf("  |  - _-     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");
       
       
     			printf("%s(이)가 대답하려는듯하다.\n\n",name); 
       			printf("     ___        잠좀자게해주라... \n");     
      			printf("   レ   レ      -へ  \n");
       			printf("  |  - _-     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(3000);
       			system("cls");
       
       
      		}
    
    	}
    	else
        {
        	for(i=0; i<2; i++)
      		{
      			system("cls");
        		printf("%s(이)가 대답하려는듯하다.\n\n",name); 
        		printf("     ___             \n");     
     			printf("   レ   レ            \n");
       			printf("  |  o _o      --へ  \n");
       			printf(" / ミ  ㅅミ  /  -へ )\n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");

      			printf("%s(이)가 대답하려는듯하다.\n\n",name); 
       			printf("     ___        냐  \n");     
      			printf("   レ   レ      -へ  \n");
       			printf("  |  o _o     / へ ) \n");
       			printf(" / ミ  Δミ  / /     \n");
       			printf("|         | | |      \n");          
       			printf("|  |  |  ||_/ |      \n");   
       			printf("|  |  |  ||_ /       \n");
       			printf(" へ( _へ_ )          \n");
       			Sleep(1000);
       			system("cls");
       
       
      		}
    
       		printf("%s는 열심히 대답했지만\n",name);
       		Sleep(1000);
       		printf("결국 하나도 알아듣지 못했다."); 
       		Sleep(1000);
       		printf("..");
       		Sleep(1000);
       		printf("...");
       		Sleep(1000);
       		printf(".............\n\n");
       		Sleep(2000);
       
    	}
        printf("\n 아무키나 누르세요!"); 
        
      	menu1_s=getch();
      	system("cls");
      	count= count+1;
      	goto C;
       
   

   }
   
   if(menu1_s==53)                                    //재우 기  
   {
       	system("cls");
       	printf("%s(이)가 당신의 무릎위에 올라와 눈을 감았다.\n",name); 
        printf("    __へ               \n");
       	printf("   / __ ) /フ   フ     \n");
       	printf("  / /    |  _  _|      \n");
       	printf(" ( |____/  ミ ωミ     \n");
       	printf(" |       (      |      \n");
       	printf(" |    へ     へ  へ    \n");
       	printf(" (  へ __)_へ_ )_ )    \n");
      	Sleep(1000);
      	system("cls");  

        int i;
        for(i=0; i<2; i++)
        {
        	printf("%s(이)가 당신의 무릎위에 올라와 눈을 감았다.\n",name);
        	printf("      ____             \n");
       		printf("     / __ )            \n");
       		printf("    / / ____      z    \n");
       		printf("   | |/      フ   フ   \n");
      		printf("  /           _  _|    \n");
      		printf(" (   へ    へミ_ωミへ \n");
       		printf("   へ __)_______) へ__)\n");  
       		Sleep(1000);
      		system("cls");
      
       
      		printf("%s(이)가 당신의 무릎위에 올라와 눈을 감았다.\n",name);
        	printf("      ____             \n");
       		printf("     / __ )         Z  \n");
       		printf("    / / ____      z    \n");
       		printf("   | |/      フ   フ   \n");
       		printf("  /           _  _|    \n");
       		printf(" (   へ    へミ_ωミへ \n");
       		printf("   へ __)_______) へ__)\n");  
       		Sleep(1000);
      		system("cls"); 
      
      
      	}
        
   		printf("애 교 : %d + %d ", a,3);
   		if(a>9)
   		 printf("\b");
   		a+=3;
   		if(a>15)
   		 a=15; 
   		stat(a);
   
   
   		printf("친밀감: %d + %d ", b,3);
   		if(b>9)
    	 printf("\b");
   		b+=3;
   		if(b>15)
   		 b=15;
    	stat(b);
   
   
   		printf("건 강 : %d + %d ", d,3);
   		if(d>9)
   		 printf("\b");
   		d+=3;
        if(d>=15)
        {    d=15;
            system("cls");
            end_cab(a,b,c,d,e);
            goto D;
        }
        stat(d);
   
   
   		printf("피 로 : %d - %d ", e,5);
   		if(e>9)
    	 printf("\b");
   		e-=5;
   		if(e<0)
   	 	 e=0;
   		stat(e);
   		Sleep(400);
   		printf("\n 아무키나 누르세요!"); 
            
   
      	menu1_s=getch();
      	system("cls");
      	count= count+1;
      	goto C;
   	}

   
	}
    

   if(menu=='2')                                                                //2 스탯확인 
   {
   		printf("애 교 : %d ", a);
   		if(a>9)
   		printf("\b");
   		stat(a);
   		printf("친밀감: %d ", b);
   		if(b>9)
   		printf("\b");
   		stat(b);
   		printf("배고픔: %d ", c);
   		if(c>9)
   		printf("\b");
   		stat(c);
   		printf("건 강 : %d ", d);
   		if(d>9)
   		printf("\b");
   		stat(d);
   		printf("피 로 : %d ", e);
   		if(e>9)
   		printf("\b");
   		stat(e);
   		Sleep(400);
   		printf("\n 아무키나 누르세요!"); 
            
   
      	int menu1_s;   
   		do{
      		menu1_s=getch();
      		system("cls");
      		goto C;
         
      		}while(menu1_s!=48);
 	}
   
D:      
      
   return 0;
      
}		
		 

