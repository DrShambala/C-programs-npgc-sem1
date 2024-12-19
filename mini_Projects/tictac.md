# Tic Tac Toe game
## in progress
```
#include <stdio.h>
void game(int x, int y);
void input();
char arr[3][3]={{' ',' ' ,' '},{' ',' ' ,' '},{' ',' ' ,' '}};

int main(){

    input();
    return 0;
}
void game(int x, int y){
    
    if(arr[x][y] == ' '){
        arr[x][y] = 'X';
    }
    else{
        printf("Space is filled\n ");
    }
    
    printf(" %c | %c | %c \n", arr[0][0], arr[0][1], arr[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", arr[1][0], arr[1][1], arr[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", arr[2][0], arr[2][1], arr[2][2]);
    input();
}
void input(){
    int x, y;
    printf("Enter row of the game ");
    scanf("%d", &x);
    printf("Enter coloumn of the game ");
    scanf("%d", &y);
    if (x<3&&y<3&&x>=0&&y>=0)
    {
    game(x, y);
    }else{
        printf("Enter valid input");
    }
}
```
