#include <iostream>
#include <stdio.h>
#include "curses.h"
bool gameover;
int width = 23;
int height = 23;
int x, y, fx,fy,score;

enum whereGoing{
    stop=0,
    left,
    right,
    up,
    down,
};

whereGoing face;

void Setup()
{
    srand(time(NULL));
    gameover = false;
    x = width/2;
    y = height/2;
    fx = rand() % width;
    fy = rand() % height;
    score = 0;
}

void Map()
{
    
    system("clear");
    for(int i=0; i<width+2; i++){
        std::cout<<"*";
    }
    std::cout<<"\n";
    
    for(int i=0; i< height; i++){
        for(int j=0; j< width; j ++){
            if(j==0){
                std::cout<<"*";
            }
            if (j==x && i==y){
                std::cout<<"@";
            }
            else if(j==fx && i==fy ){
                std::cout<<"$";
            }
            else{
                std::cout<<" ";
            }
            if(j==width-1){
                std::cout<<"*";
            }
        }
        std::cout<<"\n";
    }

    for(int i=0; i<width+2; i++){
        std::cout<<"*";
    }
    std::cout<<"\n";
}

void WhereToGO()
{
        initscr();
        int c;
        while((c=getch())!=15){
        switch(c){
            case 72:  //Up arrow
                face=up;
                              
                break;
            case 80:  //Down arrow
                face=down;
                               
                break;
            case 75:  //Left arrow
                face=left; 
                              
                break;
            case 77:  //Right arrow
                face=right; 
                               
                break;
        }
       }
        endwin();
    
}

void Logic()
{
    switch(face){
        case up:
            y--;
            break;
        case down:
            y++;
            break;
        case left:
            x--;
            break;
        case right:
            x++;
            break;
    }
}

int main()
{
    Setup();
    while(!gameover){
        Map();
        WhereToGO();
        Logic();
    }
    return 0;
}
