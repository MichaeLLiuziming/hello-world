#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define Row 3
#define Col 3
//声明
void InitBoard(char board[Row][Col], int row, int col);
void DisplayBoard(char board[Row][Col], int row, int col);
void PlayerMove(char board[Row][Col], int row, int col);
void ComputerMove(char board[Row][Col], int row, int col);

//告诉我们四种游戏状态
//玩家赢---"*"   电脑赢-----"#"   平局-----"O"    谁都没赢继续游戏-----"C"
char Iswin(char board[Row][Col], int row, int col);