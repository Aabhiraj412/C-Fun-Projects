#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

bool gameOver;
const int width = 20, height = 20;
int x,y,fruitX,fruitY,cutX,cutY,score;
int tailX[100], tailY[100],ntail;
enum eDir{STOP = 0,LEFT,RIGHT,UP,DOWN};
eDir dir,pdir;

void setup(){
    gameOver = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    cutX = rand() % width;
    cutY = rand() % height;
    score = 0;
}

void draw(){
    system("cls");
    cout << "\033[0;33m";
    cout << "     SCORE: " << score << "     "<<endl;
    cout << "\033[0;32m";
    for(int i = 0;i < width+2;i++){
        cout << "#";
        // cout << "\033[0;37m";
    }
    cout << endl;

    for(int i = 0;i < height;i++){
        for(int j = 0;j < width;j++){
            if(j == 0){
                cout << "\033[0;32m";
                cout << "#";
                // cout << "\033[0;37m";
            }
            if(i == y && j == x){
                cout << "\033[0;35m";
                cout << "O";
                // cout << "\033[0;37m";
            }
            else if(i == fruitY && j == fruitX){
                cout << "\033[0;34m";
                cout << "0";
                // cout << "\033[0;37m";
            }
            else if(i == cutY && j == cutX){
                cout << "\033[0;31m";
                cout << "x";
                // cout << "\033[0;37m";
            }
            else{
                bool tail = false;
                cout << "\033[0;33m";
                for(int k = 0; k<ntail; k++){
                    if(tailX[k] == j && tailY[k] == i){
                        
                        cout <<"o";
                        // cout << "\033[0;37m";
                        tail = true;
                    }
                }
                if(!tail){
                    cout << " ";
                }
            }
            if(j == width-1){
                cout << "\033[0;32m";
                cout << "#";
                // cout << "\033[0;37m";
            }
        }
        cout << endl;
    }

    cout << "\033[0;32m";
    for(int i = 0;i < width+2;i++){
        
        cout << "#";
        // cout << "\033[0;37m";
    }
    cout << endl;

}

void input(){
    pdir = dir;
    if (_kbhit()){
        switch (_getch()){
            case 'w':
                dir = UP;
                break;
            case 'a':
                dir = LEFT;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'x':
                gameOver = true;
                break;
            case 'W':
                dir = UP;
                break;
            case 'A':
                dir = LEFT;
                break;
            case 'S':
                dir = DOWN;
                break;
            case 'D':
                dir = RIGHT;
                break;
            case 'X':
                gameOver = true;
                break;
        }
    }
}

void process(){
    
    int preX = tailX[0];
    int preY = tailY[0];
    int preX2, preY2;
    tailX[0] = x;
    tailY[0] = y;

    for(int i = 1;i < ntail;i++){
        preX2 = tailX[i];
        preY2 = tailY[i];
        tailX[i] = preX;
        tailY[i] = preY;
        preX = preX2;
        preY = preY2;
    }

    if(pdir == LEFT && dir == RIGHT){
        dir = pdir;
        goto skip;
    }

    if(pdir == RIGHT && dir == LEFT){
        dir = pdir;
        goto skip;
    }

    if(pdir == DOWN && dir == UP){
        dir = pdir;
        goto skip;
    }

    if(pdir == UP && dir == DOWN){
        dir = pdir;
        goto skip;
    }

    switch (dir)
    {
    case LEFT:
        x--;
        break;
    
    case RIGHT:
        x++;
        break;
    
    case UP:
        y--;
        break;
    
    case DOWN:
        y++;
        break;
    
    default:
        break;
    }
    
    for(int i = 0; i < ntail; i++){
        if(tailX[i] == x && tailY[i] == y){
            gameOver = true;
        }
    }

    skip:
    // if(x >= width || x < 0){
    //     gameOver = true;
    // }
    // if(y >= height || y < 0){
    //     gameOver = true;
    // }
    if(x >= width){
        x = 0;
    }
    if(y >= height){
        y = 0; 
    }
    if(x < 0){
        x = width - 1;
    }
    if(y < 0){
        y = height - 1;
    }
    if(x == fruitX && y == fruitY){
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        ntail++;
    }
    
    if(x == cutX && y == cutY){
        cutX = rand() % width;
        cutY = rand() % height;
        ntail/=2;
    }

}

int main(){
    restart:
    setup();
    while(!gameOver){
        draw();
        input();
        process();
        // Sleep(10);
    }
    cout << "\033[0;31m";
    cout << "GAME OVER" << endl;
    cout << "\033[0;37m";
    // sleep(5);
    cout << "Press 'A' to Play Again or any other key to exit: " << endl;
    char ch;
    // cin >> ch;
    fflush(stdin);
    ch = getch();
    if(ch == 'a' || ch == 'A'){
        gameOver = false;
        ntail = 0;
        goto restart;

    }
    else{
        return 0;
    }
}