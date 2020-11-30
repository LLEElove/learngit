/********************************************************************** 
猜数游戏
《C语言大学教程》习题
作者: 杜嘉
2017.01.23
版本：1.0

///////////////////////////////////////////////////////////////////////
//程序随机在1到1000之间来选择一个数字等待玩家来猜 。 
//要求玩家每次输入猜测的数字，程序根据玩家输入的数字给出不同的显示结果 
//
//程序算法如下：
//BEGIN
//	numberWaitingForGuessing = rand();
//	output instruction
//	guess
//		cnt = 0
//		low = 0
//		high = 1000
//		while(TURE){
//			input numberGuess
//			if( number belongs to 1 - 1000){
//			output information for error	
//		    }
//			else{
//				judge:
//				Ture : output CongratulationS! Game Over!
//				False: output Game Continue!
//					if low : output lower
//					if high: output higher
//	        }
//	}
//END
//////////////////////////////////////////////////////////////////////// 
**************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define INSTRUCTION "It is a game which you can guess a number between \
1 and 1000, if you are right, it will end with your winning, if you are \
false, you can guess the number continue. Now, you can start your game!\n\n"

#define LOW "\tThe number is LOWER, you can continue\n"
#define TURE "\t\tYour are right!\n\t\t   Good! \n"
#define HIGHER "\tThe number is HIGHER, you can contine\n"

void Input(void){
	printf(INSTRUCTION);
	printf("Please input your anwser (1 - 1000, End With Enter): \n");
} 

void Game_guess(void){
	int cnt = 0, low = 0, high = 1000;
	int anwser = 0;
	int guess = 0;
	
	srand( time(0) );
//	anwser = rand() % 1000;
    anwser = 10;	
	do{
		cnt++;
    	scanf("%d", &guess);
		if(guess < low || guess > high){
			printf("Input Error!\nPlease input a number between 1 and 1000:\n");
		}else{
			if( guess < anwser ){
				printf(LOW);
				printf("Please input your anwser (1 - 1000, End With Enter): \n");
			}else if( guess > anwser ){
				printf(HIGHER);
				printf("Please input your anwser (1 - 1000, End With Enter): \n");
			}else {
				printf(TURE);
				printf("You get the anwser after %d time(s)\n", cnt);
			}
		}
	}while( guess != anwser );
}

int main(){
	Input();
	Game_guess();
	getchar();
	getchar();
	return 0;
} 