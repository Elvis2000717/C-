#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;//1-9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col - EASY_COUNT)
	{
		printf("请输入排查雷的坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//不是雷
			{
				//计算x、y坐标周围几个雷
				int count = get_mine_count(mine, x, y);

				//存在问题
				//if (count == 0)
				//{
				//	SearchMine(mine, show, x, y);
				//}
				//else
				//{
				//	show[x][y] = count + '0';
				//	DisplayBoard(show, row, col);
				//}

				if (count == 0)
				{
					SearchMine(mine, show, x, y);
					DisplayBoard(show, row, col);
				}
				else
				{
					show[x][y] = count + '0';
					DisplayBoard(show, row, col);
					//win++;
				}
				//show[x][y] = count + '0';
				//DisplayBoard(show, row, col);
				//win++;
			}
		}
		else
		{
			printf("请输入合法的坐标，请重新输入!\n");
		}
		win = win_count(show, ROW, COL);
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜你排雷成功！\n");
		DisplayBoard(mine, row, col);
	}
}

int win_count(char show[ROWS][COLS],char row,char col)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			//if (show[i][j] == ' ' || show[i][j] >= 1 || show[i][j] <= 8)
			if (show[i][j] != '*')
			{
				count++;
			}
		}
	}
	return count;
}

//展开功能
void SearchMine(char mine[ROWS][COLS], char show[ROWS][COLS], int i, int j)
{
	if (i < 1 || i > ROW || j < 1 || j > COL)
	{
		return;
	}

	show[i][j] = ' ';
	
	int posArr[8][2] = { { i - 1, j - 1 }, { i - 1, j }, { i - 1, j + 1 }, { i, j - 1 }, { i, j + 1 }, { i + 1, j - 1 }, { i + 1, j }, { i + 1, j + 1 } };

	for (int k = 0; k < 8; k++)
	{
		int row = posArr[k][0];
		int col = posArr[k][1];

		//已经探索过的
		if (show[row][col] >= '1' && show[row][col] <= '8' || show[row][col] == ' ')
		{
			continue;
		}
		//1.如果此方向周围一圈有雷，则显示雷的数量，不再往下搜索
		//2.如果此方向一圈没有雷，则递归继续往周边搜索
		int mineNum = 0;
		mineNum = get_mine_count(mine, row, col);
		if (mineNum > 0)
		{
			//show[i - 1][j - 1] = mineNum + '0';
			//DisplayBoard(show, row, col);
			show[row][col] = mineNum + '0';
		}
		else
		{
			SearchMine(mine, show, row, col);
		}
	}
}
