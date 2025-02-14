#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<windows.h>
#include<conio.h>
#include<time.h>
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
using namespace std;
string a[21][20]= {"■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■",
               "■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■",
               "■","■","□","□","□","□","□","□","□","□","□","□","□","□","□","▓","▓","▲","■","■",
               "■","□","□","□","■","■","□","■","□","■","■","■","■","■","■","▓","▓","▓","■","■",
               "■","□","□","□","□","□","∷","□","□","■","∷","∷","∷","□","□","□","▓","▓","■","■",
               "■","□","■","□","□","□","□","■","□","■","∷","∷","■","□","□","□","■","□","■","■",
               "■","□","■","□","□","□","□","■","□","■","∷","■","□","□","□","□","■","□","■","■",
               "■","□","□","∷","□","□","□","□","□","■","□","□","□","□","■","∷","■","□","■","■",
               "■","□","■","□","■","■","□","□","■","■","□","□","□","■","∷","∷","■","□","■","■",
               "■","□","□","□","□","□","□","■","□","□","□","□","□","∷","∷","∷","■","□","■","■",
               "■","□","■","■","■","■","■","■","□","■","□","■","■","■","■","■","■","□","■","■",
               "■","□","■","∷","∷","∷","□","□","□","□","□","■","□","□","□","□","□","□","■","■",
               "■","□","■","∷","∷","■","□","□","□","■","■","□","□","■","■","□","■","□","■","■",
               "■","□","■","∷","■","□","□","□","□","■","□","□","□","□","□","∷","□","□","■","■",
               "■","□","■","□","□","□","□","■","∷","■","□","■","□","□","□","□","■","□","■","■",
               "■","□","■","□","□","□","■","∷","∷","■","□","■","□","□","□","□","■","□","■","■",
               "■","▓","▓","□","□","□","∷","∷","∷","■","□","□","∷","□","□","□","□","□","■","■",
               "■","▓","▓","▓","■","■","■","■","■","■","□","■","□","■","■","□","□","□","■","■",
               "■","●","▓","▓","□","□","□","□","□","□","□","□","□","□","□","□","□","■","■","■",
               "■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■",
               "■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■",
              };        //地图
string jz[8];               //用来加载的变量
int xxxx,i,j,lev1=0,lev2=0; //一堆没用的变量=.=
int n1=1000,m1=10,l1=1;     //玩家1相关信息
int n2=1000,m2=10,l2=1;     //玩家2相关信息
int t,t1,t2,t3,t4;          //计算时间的变量
double t5,t6;               //计算时间的变量
int x=18,y=1;               //玩家1坐标
int p=2,q=17;               //玩家2坐标
int p2=2,q2=7;              //玩家2辅助坐标
char ch,ch1,ch2;            //输入字符，玩家1保留字符，玩家2保留字符
int gbdw1();                //光标定位1函数
int gbdw2();                //光标定位2函数
int gbdw3();                //光标定位3函数
int gbdw4();                //光标定位4函数
int hpzy();                 //获取资源函数
int jzz();                  //加载中函数
int p1kz();                 //玩家1控制函数
int p2kz();                 //玩家2控制函数
int zcd();                  //主菜单函数
void draw();                //画图函数
void hidden();              //隐藏光标函数
void zanting();             //暂停函数
void renji();               //人机模式
void renji_suiji();         //人机模式（防bug）
void renji_gress();         //吃草
void zanting() {
system("cls");
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
cout<<"■■■■■■■■■■■■■■■■■■■"<<endl;
return;
}
int gbdw1() {
COORD pos = {0, 22};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int gbdw2() {
COORD pos = {40, 22};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int gbdw3() {
COORD pos = {0, 23};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int gbdw4() {
COORD pos = {40, 23};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void draw() {
if(n1>=1000) n1=1000;
if(n2>=1000) n2=1000;
if(n1<=0)    n1=0;
if(n2<=0)    n2=0;
if(m1>=500)  m1=500;
if(m2>=500)  m2=500;
if(m1<=0)    m1=0;
if(m2<=0)    m2=0;
if(l1>=20)   l1=20;
if(l1>=20)   l1=20;
COORD pos = {0, 0};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
cout<<"Already start "<<((int)time(NULL)-t)/60<<" minute for "<<((int)time(NULL)-t)%60<<" seconds"<<endl;
for(i=1; i<=19; i++) {
    for(j=0; j<=18; j++) {
        if(a[i][j]=="■") {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
            cout<<a[i][j];
        }
        if(a[i][j]=="∷") {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_BLUE);
            cout<<a[i][j];
        }
        if(a[i][j]=="▓") {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
            cout<<a[i][j];
        }
        if(a[i][j]=="□") {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
            cout<<a[i][j];
        }
        if(a[i][j]=="●"||a[i][j]=="▲") {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
            cout<<a[i][j];
        }
    }
    cout<<endl;
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
printf("●player 1：                            ▲player 2：\n");
printf("Lv：%2d  HP：%4d  mana：%3d             Lv：%2d  HP：%4d  mana：%3d\n",l1,n1,m1,l2,n2,m2);
gbdw1();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
printf("HP:  ");
for(j=1; j<=n1/10/8; j++)
    printf("█");
xxxx=n1/10%8;
cout<<jz[xxxx];
printf("%d",n1);
printf("          ");
gbdw2();
printf("HP:  ");
for(j=1; j<=n2/10/8; j++)
    printf("█");
xxxx=n2/10%8;
cout<<jz[xxxx];
printf("%d",n2);
printf("          \n");
gbdw3();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_GREEN);
printf("moon:");
for(j=1; j<=m1/5/8; j++)
    printf("█");
xxxx=m1/5%8;
cout<<jz[xxxx];
printf("%d",m1);
printf("          ");
gbdw4();
printf("moon:");
for(j=1; j<=m2/5/8; j++)
    printf("█");
xxxx=m2/5%8;
cout<<jz[xxxx];
printf("%d",m2);
printf("          \n");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
return;
}
int zcd() {
while(1) {
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
    system("cls");
    printf("Welcome to square in the world!\n");
    printf("-------------------------------\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
    printf("S.[Start the game]\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN);
    printf("T.[The program diagram]\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
    printf("H.[Help]\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
    printf("Q.[Quit the game]\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
    printf("-------------------------------\n");
    ch=getch();
    if(ch=='s'||ch=='S') {
        system("cls");
        for(i=1; i<=136; i++) {
            xxxx=i%8;
            COORD pos = {0, 0};
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
            printf("Being parsed~    Loading...\n");
            printf("----------------------------------\n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
            for(j=1; j<=i/8; j++)
                printf("█");
            cout<<jz[xxxx]<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
            printf("----------------------------------\n");
        }
        printf("Initialize the...");
        Sleep(1000);
        break;
    }
    if(ch=='t'||ch=='T') {
        COORD pos = {0, 0};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
        printf("┏━━━━━━━━━━━━━━━━┓\n");
        printf("┃[square big showdown 4.11]      ┃\n");
        printf("┃[Human-machine version]         ┃\n");
        printf("┃┃                              ┃\n");
        printf("┃┣[Start the game]              ┃\n");
        printf("┃┃                              ┃\n");
        printf("┃┣[The program tree diagram]    ┃\n");
        printf("┃┃┃                            ┃\n");
        printf("┃┃┗[The current]               ┃\n");
        printf("┃┃                              ┃\n");
        printf("┃┣[Help]                        ┃\n");
        printf("┃┃┃                            ┃\n");
        printf("┃┃┣[Look at the map]           ┃\n");
        printf("┃┃┃                            ┃\n");
        printf("┃┃┣[Operation to help]         ┃\n");
        printf("┃┃┃                            ┃\n");
        printf("┃┃┗[The developer]             ┃\n");
        printf("┃┃                              ┃\n");
        printf("┃┗[Quit the game]               ┃\n");
        printf("┗━━━━━━━━━━━━━━━━┛\n");
        ch=getch();
    }
    if(ch=='h'||ch=='H') {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
        printf("Do you need any help?\n");
        printf("---------------------\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
        printf("1.[Look at the map]\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED | FOREGROUND_GREEN);
        printf("2.[Operation to help]\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
        printf("3.[The developer]\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
        printf("---------------------\n");
        ch=getch();
        if(ch=='1') {
            draw();
            printf("●player 1;\n");
            printf("▲Player 2;\n");
            printf("■Is a wall, do not walk;\n");
            printf("□Is a way, you can walk;\n");
            printf("∷The grass;\n");
            printf("▓Is the birth place of both parties.\n");
            printf("Two lines are at the bottom of the both sides of the case;\n");
            printf("            Press any key to return;\n");
            ch=getch();
            continue;
        }
        if(ch=='2') {
            system("cls");
            printf("player 1:\n");
            printf("   w.up      s.down     a.left    d.right\n");
            printf("   v.attack  b.Respond to health  n.vampire\n");
            printf("   f.flash   g.To attract\n");
            printf("-----------------------------------------------\n");
            printf("player 2:\n");
            printf("  ↑.up     ↓.down    ←.left   →.right\n");
            printf("   1.attack  2.Respond to health  3.crit\n");
            printf("   4.flash   5.Back to home\n");
            printf("-----------------------------------------------\n");
            printf("Click on the x for details!\n");
            ch=getch();
            if(ch=='x'||ch=='X') {
                system("cls");
                printf("player 1:---------------------------------\n");
                printf("---control---          P1HP moon P2HP moon\n");
                printf("   w.up                ----   +1 ---- ----\n");
                printf("   s.down              ----   +1 ---- ----\n");
                printf("   a.left              ----   +1 ---- ----\n");
                printf("   d.right             ----   +1 ---- ----\n");
                printf("   \n");
                printf("   v.attack            ----   +2  -20 ----\n");
                printf("   b.Respond to health +200  -50 ---- ----\n");
                printf("   n.vampire           +150 -100 -150  -20\n");
                printf("   f.flash             ----  -20 ---- ----\n");
                printf("   g.To attract        ----  -70 -100 ----\n");
                printf("player 2:---------------------------------\n");
                printf("---control---          P1HP moon P2HP moon\n");
                printf("  ↑.up                ---- ---- ----   +1\n");
                printf("  ↓.down              ---- ---- ----   +1\n");
                printf("  ←.left              ---- ---- ----   +1\n");
                printf("  →.right             ---- ---- ----   +1\n");
                printf("   \n");
                printf("   1.attack             -20 ---- ----   +2\n");
                printf("   2.Respond to health ---- ---- +200  -50\n");
                printf("   3.crit              -200 ---- ---- -100\n");
                printf("   4.flash             ---- ---- ----  -20\n");
                printf("   5.Back to home      ---- ---- ----  -70\n");
                printf("------------------------------------------");
                ch=getch();
            }
            continue;
        }
        if(ch=='3') {
            system("cls");
            printf("The development team:\n");
            printf("  Alliance primary school\n");
            printf("Development date:\n");
            printf("  16/11/17 18:35\n");
            printf("Belonging to:\n");
            printf("  China's fujian province\n");
            ch=getch();
            continue;
        }
    }
    if(ch=='q'||ch=='Q') {
        if(1) {
            system("cls");
            printf("Really want to quit?\n");
            printf("--------------------\n");
            printf("Y.[Yes]    N.[No]\n");
            printf("--------------------\n");
            while(ch!='y'&&ch!='Y'&&ch!='N'&&ch!='n')
                ch=getch();
        }
        if(ch=='Y'||ch=='y') {
            system("cls");
            for(i=1; i<=136; i++) {
                xxxx=i%8;
                COORD pos = {0, 0};
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
                printf("Deleting records~    \n");
                printf("----------------------------------\n");
                for(j=1; j<=i/8; j++)
                    printf("█");
                cout<<jz[xxxx]<<endl;
                printf("----------------------------------\n");
            }
            printf("Delete the success.");
            Sleep(1000);
            exit(0);
        }
        if(ch=='N'||ch=='n')
            continue;
    }
}
return 0;
}
void hidden() {
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO cci;
GetConsoleCursorInfo(hOut,&cci);
cci.bVisible=0;
SetConsoleCursorInfo(hOut,&cci);
return;
}
int hqzy() {
MessageBox(NULL,"The game need to get access to local resources \n agree?    (I am bored!)","Access to resources",MB_ICONEXCLAMATION|MB_OK);
return 0;
}
int p1kz() {
if(ch=='w'||ch=='s'||ch=='a'||ch=='d'
        ||ch=='W'||ch=='S'||ch=='A'||ch=='D')
    ch1=ch;
if(ch=='a'||ch=='A') {
    if(x==2&&y==15||x==2&&y==16||x==2&&y==17
            ||x==3&&y==15||x==3&&y==16||x==3&&y==17
            ||x==4&&y==16||x==4&&y==17
            ||x==16&&y==1||x==16&&y==2
            ||x==17&&y==1||x==17&&y==2||x==17&&y==3
            ||x==18&&y==1||x==18&&y==2||x==18&&y==3) {
        if(a[x][y-1]!="■"&&a[x][y-1]!="▲") {
            a[x][y]="▓";
            y--;
            a[x][y]="●";
            m1++;
            draw();
        }
    } else {
        if(a[x][y-1]!="■"&&a[x][y-1]!="▲") {
            a[x][y]="□";
            if(a[x][y-1]=="∷") {
                srand((unsigned)time(NULL));
                switch(rand()%2) {
                    case 0: {
                        n1+=50;
                    }
                    case 1: {
                        m1+=20;
                    }
                }
            }
            y--;
            a[x][y]="●";
            m1++;
            draw();
        }
    }
}
if(ch=='d'||ch=='D') {
    if(x==2&&y==15||x==2&&y==16||x==2&&y==17
            ||x==3&&y==15||x==3&&y==16||x==3&&y==17
            ||x==4&&y==16||x==4&&y==17
            ||x==16&&y==1||x==16&&y==2
            ||x==17&&y==1||x==17&&y==2||x==17&&y==3
            ||x==18&&y==1||x==18&&y==2||x==18&&y==3) {
        if(a[x][y+1]!="■"&&a[x][y+1]!="▲") {
            a[x][y]="▓";
            y++;
            a[x][y]="●";
            m1++;
            draw();
        }
    } else {
        if(a[x][y+1]!="■"&&a[x][y+1]!="▲") {
            a[x][y]="□";
            if(a[x][y+1]=="∷") {
                srand((unsigned)time(NULL));
                switch(rand()%2) {
                    case 0: {
                        n1+=50;
                    }
                    case 1: {
                        m1+=20;
                    }
                }
            }
            y++;
            a[x][y]="●";
            m1++;
            draw();
        }
    }
}
if(ch=='w'||ch=='W') {
    if(x==2&&y==15||x==2&&y==16||x==2&&y==17
            ||x==3&&y==15||x==3&&y==16||x==3&&y==17
            ||x==4&&y==16||x==4&&y==17
            ||x==16&&y==1||x==16&&y==2
            ||x==17&&y==1||x==17&&y==2||x==17&&y==3
            ||x==18&&y==1||x==18&&y==2||x==18&&y==3) {
        if(a[x-1][y]!="■"&&a[x-1][y]!="▲") {
            a[x][y]="▓";
            x--;
            a[x][y]="●";
            m1++;
            draw();
        }
    } else {
        if(a[x-1][y]!="■"&&a[x-1][y]!="▲") {
            a[x][y]="□";
            if(a[x-1][y]=="∷") {
                srand((unsigned)time(NULL));
                switch(rand()%2) {
                    case 0: {
                        n1+=50;
                    }
                    case 1: {
                        m1+=20;
                    }
                }
            }
            x--;
            a[x][y]="●";
            m1++;
            draw();
        }
    }
}
if(ch=='s'||ch=='S') {
    if(x==2&&y==15||x==2&&y==16||x==2&&y==17
            ||x==3&&y==15||x==3&&y==16||x==3&&y==17
            ||x==4&&y==16||x==4&&y==17
            ||x==16&&y==1||x==16&&y==2
            ||x==17&&y==1||x==17&&y==2||x==17&&y==3
            ||x==18&&y==1||x==18&&y==2||x==18&&y==3) {
        if(a[x+1][y]!="■"&&a[x+1][y]!="▲") {
            a[x][y]="▓";
            x++;
            a[x][y]="●";
            m1++;
            draw();
        }
    } else {
        if(a[x+1][y]!="■"&&a[x+1][y]!="▲") {
            a[x][y]="□";
            if(a[x+1][y]=="∷") {
                srand((unsigned)time(NULL));
                switch(rand()%2) {
                    case 0: {
                        n1+=50;
                    }
                    case 1: {
                        m1+=20;
                    }
                }
            }
            x++;
            a[x][y]="●";
            m1++;
            draw();
        }
    }
}
if(ch=='v'||ch=='V') {
    if(a[x][y-2]=="▲"
            ||a[x][y+2]=="▲"
            ||a[x-2][y]=="▲"
            ||a[x+2][y]=="▲"
            ||a[x-1][y-1]=="▲"
            ||a[x+1][y-1]=="▲"
            ||a[x-1][y+1]=="▲"
            ||a[x+1][y+1]=="▲"
            ||a[x][y-1]=="▲"
            ||a[x][y+1]=="▲"
            ||a[x-1][y]=="▲"
            ||a[x+1][y]=="▲") {
        n2-=20;
        m1+=2;
        n2-=(l1-1)*2;
        if(lev1==l1) {
            lev1=0;
            l1++;
        }
        lev1++;
        draw();
    }
}
if(ch=='b'||ch=='B') {
    if(m1>=50) {
        n1+=200;
        m1-=50;
        draw();
    }
}
if(ch=='n'||ch=='N') {
    if(m1>=100) {
        n2-=150;
        n1+=150;
        m1-=100;
        n2-=(l1-1)*10;
        n1+=(l1-1)*10;
        m1+=20;
        m2-=20;
        if(lev1==l1) {
            lev1=0;
            l1++;
        }
        lev1++;
        draw();
    }
}
if(ch=='f'||ch=='F') {
    if(m1>=20) {
        if(ch1=='w'||ch1=='W') {
            if(x==2&&y==15||x==2&&y==16||x==2&&y==17
                    ||x==3&&y==15||x==3&&y==16||x==3&&y==17
                    ||x==4&&y==16||x==4&&y==17
                    ||x==16&&y==1||x==16&&y==2
                    ||x==17&&y==1||x==17&&y==2||x==17&&y==3
                    ||x==18&&y==1||x==18&&y==2||x==18&&y==3) {
                if(a[x-2][y]=="▓"||a[x-2][y]=="□") {
                    a[x][y]="▓";
                    x-=2;
                    a[x][y]="●";
                    m1-=20;
                    draw();
                }
            } else {
                if(a[x-2][y]=="▓"||a[x-2][y]=="□"||a[x-2][y]=="∷") {
                    a[x][y]="□";
                    if(a[x-2][y]=="∷") {
                        srand((unsigned)time(NULL));
                        switch(rand()%2) {
                            case 0: {
                                n1+=50;
                                m1+=30;
                            }
                            case 1: {
                                m1+=30;
                            }
                        }
                    }
                    x-=2;
                    a[x][y]="●";
                    m1-=20;
                    draw();
                }
            }
        }
        if(ch1=='s'||ch1=='S') {
            if(x==2&&y==15||x==2&&y==16||x==2&&y==17
                    ||x==3&&y==15||x==3&&y==16||x==3&&y==17
                    ||x==4&&y==16||x==4&&y==17
                    ||x==16&&y==1||x==16&&y==2
                    ||x==17&&y==1||x==17&&y==2||x==17&&y==3
                    ||x==18&&y==1||x==18&&y==2||x==18&&y==3) {
                if(a[x+2][y]=="▓"||a[x+2][y]=="□") {
                    a[x][y]="▓";
                    x+=2;
                    a[x][y]="●";
                    m1-=20;
                    draw();
                }
            } else {
                if(a[x+2][y]=="▓"||a[x+2][y]=="□"||a[x+2][y]=="∷") {
                    a[x][y]="□";
                    if(a[x+2][y]=="∷") {
                        srand((unsigned)time(NULL));
                        switch(rand()%2) {
                            case 0: {
                                n1+=50;
                                m1+=30;
                            }
                            case 1: {
                                m1+=30;
                            }
                        }
                    }
                    x+=2;
                    a[x][y]="●";
                    m1-=20;
                    draw();
                }
            }
        }
        if(ch1=='a'||ch1=='A') {
            if(x==2&&y==15||x==2&&y==16||x==2&&y==17
                    ||x==3&&y==15||x==3&&y==16||x==3&&y==17
                    ||x==4&&y==16||x==4&&y==17
                    ||x==16&&y==1||x==16&&y==2
                    ||x==17&&y==1||x==17&&y==2||x==17&&y==3
                    ||x==18&&y==1||x==18&&y==2||x==18&&y==3) {
                if(a[x][y-2]=="▓"||a[x][y-2]=="□") {
                    a[x][y]="▓";
                    y-=2;
                    a[x][y]="●";
                    m1-=20;
                    draw();
                }
            } else {
                if(a[x][y-2]=="▓"||a[x][y-2]=="□"||a[x][y-2]=="∷") {
                    a[x][y]="□";
                    if(a[x][y-2]=="∷") {
                        srand((unsigned)time(NULL));
                        switch(rand()%2) {
                            case 0: {
                                n1+=50;
                                m1+=30;
                            }
                            case 1: {
                                m1+=30;
                            }
                        }
                    }
                    y-=2;
                    a[x][y]="●";
                    m1-=20;
                    draw();
                }
            }
        }
        if(ch1=='d'||ch1=='D') {
            if(x==2&&y==15||x==2&&y==16||x==2&&y==17
                    ||x==3&&y==15||x==3&&y==16||x==3&&y==17
                    ||x==4&&y==16||x==4&&y==17
                    ||x==16&&y==1||x==16&&y==2
                    ||x==17&&y==1||x==17&&y==2||x==17&&y==3
                    ||x==18&&y==1||x==18&&y==2||x==18&&y==3) {
                if(a[x][y+2]=="▓"||a[x][y+2]=="□") {
                    a[x][y]="▓";
                    y+=2;
                    a[x][y]="●";
                    m1-=20;
                    draw();
                }
            } else {
                if(a[x][y+2]=="▓"||a[x][y+2]=="□"||a[x][y+2]=="∷") {
                    a[x][y]="□";
                    if(a[x][y+2]=="∷") {
                        srand((unsigned)time(NULL));
                        switch(rand()%2) {
                            case 0: {
                                n1+=50;
                                m1+=30;
                            }
                            case 1: {
                                m1+=30;
                            }
                        }
                    }
                    y+=2;
                    a[x][y]="●";
                    m1-=20;
                    draw();
                }
            }
        }
    }
}
if(ch=='g'||ch=='G') {
    if(m1>=70) {
        if(p==2&&q==15||p==2&&q==16||p==2&&q==17
                ||p==3&&q==15||p==3&&q==16||p==3&&q==17
                ||p==4&&q==16||p==4&&q==17
                ||p==16&&q==1||p==16&&q==2
                ||p==17&&q==1||p==17&&q==2||p==17&&q==3
                ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
            if(a[x+1][y]!="■") {
                a[p][q]="▓";
                p=x+1;
                q=y;
                a[p][q]="▲";
                m1-=70;
                n2-=100;
                return 0;
            }
            if(a[x-1][y]!="■") {
                a[p][q]="▓";
                p=x-1;
                q=y;
                a[p][q]="▲";
                m1-=70;
                n2-=100;
                return 0;
            }
            if(a[x][y+1]!="■") {
                a[p][q]="▓";
                p=x;
                q=y+1;
                a[p][q]="▲";
                m1-=70;
                n2-=100;
                return 0;
            }
            if(a[x][y-1]!="■") {
                a[p][q]="▓";
                p=x;
                q=y-1;
                a[p][q]="▲";
                m1-=70;
                n2-=100;
                return 0;
            }
        } else {
             if(a[x+1][y]!="■") {
                a[p][q]="□";
                p=x+1;
                q=y;
                a[p][q]="▲";
                m1-=70;
                n2-=100;
                return 0;
            }
            if(a[x-1][y]!="■") {
                a[p][q]="□";
                p=x-1;
                q=y;
                a[p][q]="▲";
                m1-=70;
                n2-=100;
                return 0;
            }
            if(a[x][y+1]!="■") {
                a[p][q]="□";
                p=x;
                q=y+1;
                a[p][q]="▲";
                m1-=70;
                n2-=100;
                return 0;
            }
            if(a[x][y-1]!="■") {
                a[p][q]="□";
                p=x;
                q=y-1;
                a[p][q]="▲";
                m1-=70;
                n2-=100;
                return 0;
            }
        }
    }
}
return 0;
}
int p2kz() {
if(ch==72||ch==80||ch==75||ch==77)
    ch2=ch;
if(ch==72) {
    if(p==2&&q==15||p==2&&q==16||p==2&&q==17
            ||p==3&&q==15||p==3&&q==16||p==3&&q==17
            ||p==4&&q==16||p==4&&q==17
            ||p==16&&q==1||p==16&&q==2
            ||p==17&&q==1||p==17&&q==2||p==17&&q==3
            ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
        if(a[p-1][q]!="■"&&a[p-1][q]!="●") {
            a[p][q]="▓";
            p--;
            a[p][q]="▲";
            m2++;
            draw();
        }
    } else {
        if(a[p-1][q]!="■"&&a[p-1][q]!="●") {
            a[p][q]="□";
            if(a[p-1][q]=="∷") {
                srand((unsigned)time(NULL));
                switch(rand()%2) {
                    case 0: {
                        n2+=50;
                    }
                    case 1: {
                        m2+=20;
                    }
                }
            }
            p--;
            a[p][q]="▲";
            m2++;
            draw();
        }
    }
}
if(ch==75) {
    if(p==2&&q==15||p==2&&q==16||p==2&&q==17
            ||p==3&&q==15||p==3&&q==16||p==3&&q==17
            ||p==4&&q==16||p==4&&q==17
            ||p==16&&q==1||p==16&&q==2
            ||p==17&&q==1||p==17&&q==2||p==17&&q==3
            ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
        if(a[p][q-1]!="■"&&a[p][q-1]!="●") {
            a[p][q]="▓";
            q--;
            a[p][q]="▲";
            m2++;
            draw();
        }
    } else {
        if(a[p][q-1]!="■"&&a[p][q-1]!="●") {
            a[p][q]="□";
            if(a[p][q-1]=="∷") {
                srand((unsigned)time(NULL));
                switch(rand()%2) {
                    case 0: {
                        n2+=50;
                    }
                    case 1: {
                        m2+=20;
                    }
                }
            }
            q--;
            a[p][q]="▲";
            m2++;
            draw();
        }
    }
}
if(ch==80) {
    if(p==2&&q==15||p==2&&q==16||p==2&&q==17
            ||p==3&&q==15||p==3&&q==16||p==3&&q==17
            ||p==4&&q==16||p==4&&q==17
            ||p==16&&q==1||p==16&&q==2
            ||p==17&&q==1||p==17&&q==2||p==17&&q==3
            ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
        if(a[p+1][q]!="■"&&a[p+1][q]!="●") {
            a[p][q]="▓";
            p++;
            a[p][q]="▲";
            m2++;
            draw();
        }
    } else {
        if(a[p+1][q]!="■"&&a[p+1][q]!="●") {
            a[p][q]="□";
            if(a[p+1][q]=="∷") {
                srand((unsigned)time(NULL));
                switch(rand()%2) {
                    case 0: {
                        n2+=50;
                    }
                    case 1: {
                        m2+=20;
                    }
                }
            }
            p++;
            a[p][q]="▲";
            m2++;
            draw();
        }
    }
}
if(ch==77) {
    if(p==2&&q==15||p==2&&q==16||p==2&&q==17
            ||p==3&&q==15||p==3&&q==16||p==3&&q==17
            ||p==4&&q==16||p==4&&q==17
            ||p==16&&q==1||p==16&&q==2
            ||p==17&&q==1||p==17&&q==2||p==17&&q==3
            ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
        if(a[p][q+1]!="■"&&a[p][q+1]!="●") {
            a[p][q]="▓";
            q++;
            a[p][q]="▲";
            m2++;
            draw();
        }
    } else {
        if(a[p][q+1]!="■"&&a[p][q+1]!="●") {
            a[p][q]="□";
            if(a[p][q+1]=="∷") {
                srand((unsigned)time(NULL));
                switch(rand()%2) {
                    case 0: {
                        n2+=50;
                    }
                    case 1: {
                        m2+=20;
                    }
                }
            }
            q++;
            a[p][q]="▲";
            m2++;
            draw();
        }
    }
}
if(ch=='1') {
    if(a[p][q-1]=="●"
            ||a[p][q+1]=="●"
            ||a[p-1][q]=="●"
            ||a[p+1][q]=="●") {
        n1-=20;
        m2+=2;
        n1-=(l2-1)*2;
        if(lev2==l2) {
            lev2=0;
            l2++;
        }
        lev2++;
        draw();
    }
}
if(ch=='2') {
    if(m2>=50) {
        n2+=200;
        m2-=50;
        draw();
    }
}
if(ch=='3') {
    if(m2>=100) {
        n1-=200;
        m2-=100;
        n1-=(l2-1)*20;
        if(lev2==l2) {
            lev2=0;
            l2++;
        }
        lev2++;
        draw();
    }
}
if(ch=='4') {
    if(m2>=20) {
        if(ch2==72) {
            if(p==2&&q==15||p==2&&q==16||p==2&&q==17
                    ||p==3&&q==15||p==3&&q==16||p==3&&q==17
                    ||p==4&&q==16||p==4&&q==17
                    ||p==16&&q==1||p==16&&q==2
                    ||p==17&&q==1||p==17&&q==2||p==17&&q==3
                    ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
                if(a[p-2][q]=="▓"||a[p-2][q]=="□") {
                    a[p][q]="▓";
                    p-=2;
                    a[p][q]="▲";
                    m1++;
                     m2-=20;
                    draw();
                }
            } else {
                if(a[p-2][q]=="▓"||a[p-2][q]=="□"||a[p-2][q]=="∷") {
                    a[p][q]="□";
                    if(a[p-2][q]=="∷") {
                        srand((unsigned)time(NULL));
                        switch(rand()%2) {
                            case 0: {
                                n2+=50;
                                m2+=30;
                            }
                            case 1: {
                                m2+=30;
                            }
                        }
                    }
                    p-=2;
                    a[p][q]="▲";
                    m1++;
                     m2-=20;
                    draw();
                }
            }
        }
        if(ch2==80) {
            if(p==2&&q==15||p==2&&q==16||p==2&&q==17
                    ||p==3&&q==15||p==3&&q==16||p==3&&q==17
                    ||p==4&&q==16||p==4&&q==17
                    ||p==16&&q==1||p==16&&q==2
                    ||p==17&&q==1||p==17&&q==2||p==17&&q==3
                    ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
                if(a[p+2][q]=="▓"||a[p+2][q]=="□") {
                    a[p][q]="▓";
                    p+=2;
                    a[p][q]="▲";
                    m1++;
                     m2-=20;
                    draw();
                }
            } else {
                if(a[p+2][q]=="▓"||a[p+2][q]=="□"||a[p+2][q]=="∷") {
                    a[p][q]="□";
                    if(a[p+2][q]=="∷") {
                        srand((unsigned)time(NULL));
                        switch(rand()%2) {
                            case 0: {
                                n2+=50;
                                m2+=30;
                            }
                            case 1: {
                                m2+=30;
                            }
                        }
                    }
                    p+=2;
                    a[p][q]="▲";
                    m1++;
                     m2-=20;
                    draw();
                }
            }
        }
        if(ch2==75) {
            if(p==2&&q==15||p==2&&q==16||p==2&&q==17
                    ||p==3&&q==15||p==3&&q==16||p==3&&q==17
                    ||p==4&&q==16||p==4&&q==17
                    ||p==16&&q==1||p==16&&q==2
                    ||p==17&&q==1||p==17&&q==2||p==17&&q==3
                    ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
                if(a[p][q-2]=="▓"||a[p][q-2]=="□") {
                    a[p][q]="▓";
                    q-=2;
                    a[p][q]="▲";
                    m1++;
                     m2-=20;
                    draw();
                }
            } else {
                if(a[p][q-2]=="▓"||a[p][q-2]=="□"||a[p][q-2]=="∷") {
                    a[p][q]="□";
                    if(a[p][q-2]=="∷") {
                        srand((unsigned)time(NULL));
                        switch(rand()%2) {
                            case 0: {
                                n2+=50;
                                m2+=30;
                            }
                            case 1: {
                                m2+=30;
                            }
                        }
                    }
                    q-=2;
                    a[p][q]="▲";
                    m1++;
                     m2-=20;
                    draw();
                }
            }
        }
        if(ch2==77) {
            if(p==2&&q==15||p==2&&q==16||p==2&&q==17
                    ||p==3&&q==15||p==3&&q==16||p==3&&q==17
                    ||p==4&&q==16||p==4&&q==17
                    ||p==16&&q==1||p==16&&q==2
                    ||p==17&&q==1||p==17&&q==2||p==17&&q==3
                    ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
                if(a[p][q+2]=="▓"||a[p][q+2]=="□") {
                    a[p][q]="▓";
                    q+=2;
                    a[p][q]="▲";
                    m1++;
                     m2-=20;
                    draw();
                }
            } else {
                if(a[p][q+2]=="▓"||a[p][q+2]=="□"||a[p][q+2]=="∷") {
                    a[p][q]="□";
                    if(a[p][q+2]=="∷") {
                        srand((unsigned)time(NULL));
                        switch(rand()%2) {
                            case 0: {
                                n2+=50;
                                m2+=30;
                            }
                            case 1: {
                                m2+=30;
                            }
                        }
                    }
                    q+=2;
                    a[p][q]="▲";
                    m1++;
                     m2-=20;
                    draw();
                }
            }
        }
    }
}
if(ch=='5') {
    if(m2>=70) {
        if(p==2&&q==15||p==2&&q==16||p==2&&q==17
                ||p==3&&q==15||p==3&&q==16||p==3&&q==17
                ||p==4&&q==16||p==4&&q==17
                ||p==16&&q==1||p==16&&q==2
                ||p==17&&q==1||p==17&&q==2||p==17&&q==3
                ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
            a[p][q]="▓";
            p=2;
            q=17;
            a[p][q]="▲";
            m2-=70;
            draw();
        } else {
            a[p][q]="□";
            p=2;
            q=17;
            a[p][q]="▲";
            m2-=70;
            draw();
        }
    }
}
return 0;
}
void renji() {
if(n2<=200) {
    if(!(p==2&&q==15||p==2&&q==16||p==2&&q==17
            ||p==3&&q==15||p==3&&q==16||p==3&&q==17
            ||p==4&&q==16||p==4&&q==17)) {
        if(m2>=70) {
            ch='5';
            p2kz();
            return;
        }
    } else {
        return;
    }
}
if(a[p][q-1]=="●"
        ||a[p][q+1]=="●"
        ||a[p-1][q]=="●"
        ||a[p+1][q]=="●") {
    ch='1';
    p2kz();
    return;
}
if(n2<=900) {
    if(m2>=50) {
        ch='2';
        p2kz();
        return;
    }
}
if(n2>=600) {
    if(m2>=100) {
        ch='3';
        p2kz();
        return;
    }
}
renji_gress();
if(x<p) {
    if(a[p-1][q]=="■") {
        if(m2>=20) {
            ch2=UP;
            ch='4';
        }
    } else {
        ch=UP;
    }
    p2kz();
    if(p!=p2||q!=q2) {
        p2=p;
        q2=q;
        return;
    } else {
        renji_suiji();
        return;
    }
}
if(x>p) {
    if(a[p+1][q]=="■") {
        if(m2>=20) {
            ch2=DOWN;
            ch='4';
        }
    } else {
        ch=DOWN;
    }
    p2kz();
    if(p!=p2||q!=q2) {
        p2=p;
        q2=q;
        return;
    } else {
        renji_suiji();
        return;
    }
}
if(y<q) {
    if(a[p][q-1]=="■") {
        if(m2>=20) {
            ch2=LEFT;
            ch='4';
        }
    } else {
        ch=LEFT;
    }
    p2kz();
    if(p!=p2||q!=q2) {
        p2=p;
        q2=q;
        return;
    } else {
        renji_suiji();
        return;
    }
}
if(y>q) {
    if(a[p][q+1]=="■") {
        if(m2>=20) {
            ch2=RIGHT;
            ch='4';
        }
    } else {
        ch=RIGHT;
    }
    p2kz();
    if(p!=p2||q!=q2) {
        p2=p;
        q2=q;
        return;
    } else {
        renji_suiji();
        return;
    }
}
return;
}
void renji_suiji() {
srand((unsigned)time(NULL));
switch(rand()%4) {
    case 0: {
        ch=UP;
        p2kz();
        p2kz();
        break;
    }
    case 1: {
        ch=DOWN;
        p2kz();
        p2kz();
        break;
    }
    case 2: {
        ch=LEFT;
        p2kz();
        p2kz();
        break;
    }
    case 3: {
        ch=RIGHT;
        p2kz();
        p2kz();
        break;
    }
}
}
void renji_gress() {
if(a[p-2][q]=="∷") {
    if(a[p-1][q]=="■") {
        if(m2>=30) {
            ch2=UP;
            ch='4';
            p2kz();
            return;
        }
    }
}
if(a[p+2][q]=="∷") {
    if(a[p+1][q]=="■") {
        if(m2>=30) {
            ch2=DOWN;
            ch='4';
            p2kz();
            return;
        }
    }
}
if(a[p][q-2]=="∷") {
    if(a[p][q-1]=="■") {
        if(m2>=30) {
            ch2=LEFT;
            ch='4';
            p2kz();
            return;
        }
    }
}
if(a[p][q+2]=="∷") {
    if(a[p][q+1]=="■") {
        if(m2>=30) {
            ch2=RIGHT;
            ch='4';
            p2kz();
            return;
        }
    }
}
if(a[p-1][q]=="∷") {
    ch=UP;
    p2kz();
    return;
}
if(a[p+1][q]=="∷") {
    ch=DOWN;
    p2kz();
    return;
}
if(a[p][q-1]=="∷") {
    ch=LEFT;
    p2kz();
    return;
}
if(a[p][q+1]=="∷") {
    ch=RIGHT;
    p2kz();
    return;
}
}
int main() {
if(1) {
    hidden();
    jz[1]="▏";
    jz[2]="▎";
    jz[3]="▍";
    jz[4]="▌";
    jz[5]="▋";
    jz[6]="▊";
    jz[7]="▉";
    jz[0]="";
}
hqzy();
for(i=1; i<=136; i++) {
    xxxx=i%8;
    COORD pos = {0, 0};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
    printf("Are entering a square in the world~    Loading...\n");
    printf("-------------------------------------------------\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
    for(j=1; j<=i/8; j++)
        printf("█");
    cout<<jz[xxxx]<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_GREEN);
    printf("----------------------------------\n");
}
////////////////////////////////////////////////////////////////////////////////////
printf("Initialize the...");
Sleep(1000);
while(1) {
    n1=1000;
    m1=10;
    n2=1000;
    m2=10;
    l1=1;
    l2=1;
    lev1=0;
    lev2=0;
    zcd();
    if(x==2&&y==15||x==2&&y==16||x==2&&y==17
            ||x==3&&y==15||x==3&&y==16||x==3&&y==17
            ||x==4&&y==16||x==4&&y==17
            ||x==16&&y==1||x==16&&y==2
            ||x==17&&y==1||x==17&&y==2||x==17&&y==3
            ||x==18&&y==1||x==18&&y==2||x==18&&y==3) {
        a[x][y]="▓";
    } else {
        a[x][y]="□";
    }
    if(p==2&&q==15||p==2&&q==16||p==2&&q==17
            ||p==3&&q==15||p==3&&q==16||p==3&&q==17
            ||p==4&&q==16||p==4&&q==17
            ||p==16&&q==1||p==16&&q==2
            ||p==17&&q==1||p==17&&q==2||p==17&&q==3
            ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
        a[p][q]="▓";
    } else {
        a[p][q]="□";
    }
    x=18;
    y=1;
    p=2;
    q=17;
    a[4][6]=a[4][10]=a[4][11]=a[4][12]=a[5][10]=a[5][11]=a[6][10]=a[7][3]=a[7][15]=a[8][14]=a[8][15]=a[9][13]=a[9][14]=a[9][15]=a[13][3]=a[12][3]=a[12][4]=a[11][3]=a[11][4]=a[11][5]=a[14][8]=a[15][7]=a[15][8]=a[16][6]=a[16][7]=a[16][8]=a[16][12]=a[13][15]="∷";
    a[x][y]="●";
    a[p][q]="▲";
    t=time(NULL);             //开始时间
    t1=(int)time(NULL);       //当前时间
    t2=(int)time(NULL)-t;     //扣血时间
    t3=(int)time(NULL)-t;     //当前时间-开始时间：1 or 0
    t5=(double)time(NULL);    //
    draw();
    while(n1>0&&n2>0) {
        t1=(int)time(NULL);
        t3=(int)time(NULL)-t;
        t6=(double)time(NULL)-t5;
        if((time(NULL)-t)/60==10) {
            draw();
            printf("            Game over");
            while(1) {
                ch=getch();
                if(ch=='=') {
                    return 0;
                }
            }
        }
        if(t2!=(int)time(NULL)-t) {
            draw();
            t2=(int)time(NULL)-t;
            if(x==2&&y==15||x==2&&y==16||x==2&&y==17
                    ||x==3&&y==15||x==3&&y==16||x==3&&y==17
                    ||x==4&&y==16||x==4&&y==17) {
                n1-=50;
            }
            if(x==16&&y==1||x==16&&y==2
                    ||x==17&&y==1||x==17&&y==2||x==17&&y==3
                    ||x==18&&y==1||x==18&&y==2||x==18&&y==3) {
                n1+=50;
            }
            if(p==2&&q==15||p==2&&q==16||p==2&&q==17
                    ||p==3&&q==15||p==3&&q==16||p==3&&q==17
                    ||p==4&&q==16||p==4&&q==17) {
                n2+=50;
            }
            if(p==16&&q==1||p==16&&q==2
                    ||p==17&&q==1||p==17&&q==2||p==17&&q==3
                    ||p==18&&q==1||p==18&&q==2||p==18&&q==3) {
                n2-=50;
            }
        }
        if(t3%60==0) {
            srand((unsigned)time(NULL));
            switch(rand()%28) {
                case 0:
                    if(a[4][6]=="□")a[4][6]="∷";
                case 1:
                    if(a[4][10]=="□")a[4][10]="∷";
                case 2:
                    if(a[4][11]=="□")a[4][11]="∷";
                case 3:
                    if(a[4][12]=="□")a[4][12]="∷";
                case 4:
                    if(a[5][10]=="□")a[5][10]="∷";
                case 5:
                    if(a[5][11]=="□")a[5][11]="∷";
                case 6:
                    if(a[6][10]=="□")a[6][10]="∷";
                case 7:
                    if(a[7][3]=="□")a[7][3]="∷";
                case 8:
                    if(a[7][15]=="□")a[7][15]="∷";
                case 9:
                    if(a[8][14]=="□")a[8][14]="∷";
                case 10:
                    if(a[8][15]=="□")a[8][15]="∷";
                case 11:
                    if(a[9][13]=="□")a[9][13]="∷";
                case 12:
                    if(a[9][14]=="□")a[9][14]="∷";
                case 13:
                    if(a[9][15]=="□")a[9][15]="∷";
                case 14:
                    if(a[13][3]=="□")a[13][3]="∷";
                case 15:
                    if(a[12][3]=="□")a[12][3]="∷";
                case 16:
                    if(a[12][4]=="□")a[12][4]="∷";
                case 17:
                    if(a[11][3]=="□")a[11][3]="∷";
                case 18:
                    if(a[11][4]=="□")a[11][4]="∷";
                case 19:
                    if(a[11][5]=="□")a[11][5]="∷";
                case 20:
                    if(a[14][8]=="□")a[14][8]="∷";
                case 21:
                    if(a[15][7]=="□")a[15][7]="∷";
                case 22:
                    if(a[15][8]=="□")a[15][8]="∷";
                case 23:
                    if(a[16][6]=="□")a[16][6]="∷";
                case 24:
                    if(a[16][7]=="□")a[16][7]="∷";
                case 25:
                    if(a[16][8]=="□")a[16][8]="∷";
                case 26:
                    if(a[16][12]=="□")a[16][12]="∷";
                case 27:
                    if(a[13][15]=="□")a[13][15]="∷";
            }
            draw();
        }
        if(t6>=0.125) {//速度调节
            renji();
            t5+=0.125;
        }
        if(kbhit()) {
            ch=getch();
            p1kz();
            ////////////////////////////////////////////////////////////////////////////////////
            if(ch=='p') {
                zanting();
                t4=t1;
                do {
                    ch=getch();
                } while(ch!='p');
                t=t+(int)time(NULL)-t4;
                system("cls");
                draw();
                continue;
            }
            if(ch=='=') {
                exit(0);
            }
            if(ch=='q') {
                m1++;
                draw();
            }
            if(ch=='6') {
                m2++;
                draw();
            }
        }
    }
    ////////////////////////////////////////////////////////////////////////////////////
    draw();
    if(n2==0) {
        printf("        ●Player 1 -");
        while(1) {
            ch=getch();
            if(ch=='=') {
                break;
            }
        }
    } else {
        printf("        ▲Player 2 -");
        while(1) {
            ch=getch();
            if(ch=='=') {
                break;
            }
        }
    }
}
return 0;
}
