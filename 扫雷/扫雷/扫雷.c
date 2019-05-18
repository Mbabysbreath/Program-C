#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10
//1.扫雷：两个二维数组；
//a.show_map 每个位置是否被翻开
//*表示未翻开，‘1’（字符）表示周围8个格子中有几个地雷
//b.mine_map 每个位置是否是地雷
//‘0’不是地雷，‘1’是地雷
//2.初始化
//a.show_map 初始化为*
//b.mine_map 先初始化成全为'0'，然后随机生成10个位置作为地雷
//3.打印地图（show_map)
//4.让用户输入一组坐标、检查坐标合法性
//5.判断如果是地雷，就Game over
//6.判断是否胜利
//7.不是地雷，更新数字，周围8个格子中有几个地雷
//0连续翻开
int Menu(){
	printf("*****************************\n");
	printf("*********1.play*************\n");
	printf("*********0.Game Over********\n");
	printf("*****************************\n");
	printf("请输入你的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Init(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL]){
	int row;
	int col;
	//1.初始化show_map
	for (row = 0; row < MAX_ROW; ++row){
		for (col = 0; col < MAX_COL; ++col){
			show_map[row][col] = '*';//shift +alt+r 重命名，安装VA,C++软件方向资料有
		}
	}
	//2.初始化mine_map;
	for (row = 0; row < MAX_ROW; ++row){
		for (col = 0; col < MAX_COL; ++col){
			mine_map[row][col] = '0';
		}
	}
	//3.随机埋雷10个
	int mine_count = MINE_COUNT;
	while (mine_count > 0){
		row = rand() % MAX_ROW;//32767
		col = rand() % MAX_COL;
		if (mine_map[row][col] == '1'){
			continue;
		}
		mine_map[row][col] = '1';
		--mine_count;
	}
}
void PrintMap(char map[MAX_ROW][MAX_COL]){
	//1.先打印第一行（坐标）
	printf("  |");
	for (int col = 0; col < MAX_COL; ++col){
		printf("%d ", col);
	}
	printf("\n");
	//2.打印一行分隔符
	for (int col = 0; col < MAX_COL; ++col){
		printf("---");
	}
	printf("\n");
	//3.按照每行分别打印
	int row;
	int col;
	for (row = 0; row < MAX_ROW; ++row){
		printf(" %d|", row);
		for (col = 0; col < MAX_COL; ++col) {
			printf(" %c", map[row][col]);
		}
		printf("\n");
	}
}

void UpdateShowMap(char show_map[MAX_ROW][MAX_COL],
	char mine_map[MAX_ROW][MAX_COL], int row, int col){
	//判断当前位置（row,col)周围8个格子有几个雷
	int count = 0;
	int count_blank = 0;
	if (row - 1 >= 0 && col - 1 >= 0
		&& mine_map[row - 1][col - 1] == '1'){
		++count;
	}
	if (row - 1 >= 0
		&& mine_map[row - 1][col] == '1'){
		++count;
	}
	if (row - 1 >= 0 && col + 1 <MAX_COL
		&& mine_map[row - 1][col + 1] == '1'){
		++count;
	}
	if (col - 1 >= 0
		&& mine_map[row][col - 1] == '1'){
		++count;
	}
	if (col + 1 <MAX_COL
		&& mine_map[row][col + 1] == '1'){
		++count;
	}
	if (row + 1 <MAX_ROW && col - 1 >= 0
		&& mine_map[row + 1][col - 1] == '1'){
		++count;
	}
	if (row + 1 <MAX_ROW
		&& mine_map[row + 1][col] == '1'){
		++count;
	}
	if (row + 1 <MAX_ROW && col + 1 <MAX_COL
		&& mine_map[row + 1][col + 1] == '1'){
		++count;
	}
	//count里的值是周围雷的个数
	show_map[row][col] = count + '0';

	////判断连续无雷
	//while (mine_map[row][col] == '0'){
	//	if (row - 1 >= 0 && col - 1 >= 0
	//	&& mine_map[row - 1][col - 1] == '0'){
	//		show_map[row][col] = '0';
	//}
	//	if (row - 1 >= 0 
	//		&& mine_map[row - 1][col - 1] == '0'){
	//		show_map[row][col] = '0';
	//	}
	//	if (row - 1 >= 0 && col + 1 < MAX_COL
	//		&& mine_map[row - 1][col + 1] == '1'){
	//		show_map[row][col] = '0';
	//	}
	//	if (col - 1 >= 0
	//		&& mine_map[row][col - 1] == '1'){
	//		show_map[row][col] = '0';
	//	}
	//	if (col + 1 < MAX_COL
	//		&& mine_map[row][col + 1] == '1'){
	//		show_map[row][col] = '0';
	//	}
	//	if (row + 1 < MAX_ROW && col - 1 >= 0
	//		&& mine_map[row + 1][col - 1] == '1'){
	//		show_map[row][col] = '0';
	//	}
	//	if (row + 1 < MAX_ROW
	//		&& mine_map[row + 1][col] == '1'){
	//		show_map[row][col] = '0';
	//	}
	//	if (row + 1 < MAX_ROW && col + 1 < MAX_COL
	//		&& mine_map[row + 1][col + 1] == '1'){
	//		show_map[row][col] = '0';
	//	}
	//	break;
	//}



}
void Game(){//shift+F8 快速进行格式化
	//1.创建两个二维数组
	char show_map[MAX_ROW][MAX_COL];
	char mine_map[MAX_ROW][MAX_COL];
	//2.初始化
	Init(show_map, mine_map);
	//3.打印地图
	int blank_count = 0;
	while (1){
		system("cls");
		PrintMap(show_map);
		//4.让用户输入一组坐标,并检查
		printf("请输入一组坐标（row col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW
			|| col < 0 || col >= MAX_COL){
			printf("输入有误，请重输\n");
			continue;
		}
		if (show_map[row][col] != '*'){
			printf("位置已翻开，请重输\n");
			continue;
		}//5.判断踩雷
		if (mine_map[row][col] == '1'){
			//踩雷
			system("cls");
			PrintMap(mine_map);
			printf("Game over!\n");
			break;
		}
		++blank_count;
		//6.判断是否胜利
		if (blank_count == MAX_ROW*MAX_COL - MINE_COUNT){
			printf("扫雷成功！\n");
		}
		//7.更新地图
		UpdateShowMap(show_map, mine_map, row, col);

	}

}

int main(){

	srand((unsigned int)time(0));
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 0){
			printf("goodbye");
			break;
		}
		else {
			printf("输入有误，请重输");
		}
	}
	system("pause");
	return 0;
}
