#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define Row 3
#define Col 3
//����
void InitBoard(char board[Row][Col], int row, int col);
void DisplayBoard(char board[Row][Col], int row, int col);
void PlayerMove(char board[Row][Col], int row, int col);
void ComputerMove(char board[Row][Col], int row, int col);

//��������������Ϸ״̬
//���Ӯ---"*"   ����Ӯ-----"#"   ƽ��-----"O"    ˭��ûӮ������Ϸ-----"C"
char Iswin(char board[Row][Col], int row, int col);