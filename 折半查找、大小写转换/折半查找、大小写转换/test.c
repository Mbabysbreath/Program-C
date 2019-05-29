#define _CRT_SECURE_NO_WARNINGS   1
//2. 折半查找

int binary_search(int arr[], int k, int left, int right){
	while (left <= right){
	int	mid = (left + right) / 2;
		if (k < arr[mid]){
			right = mid - 1;
		}
		else if (k > arr[mid]){
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
int main(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int input = 0;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret;
	printf("请输入要找的数字：");
	scanf("%d", &input);
	ret = binary_search(arr, input, left, right);
	if (-1 == ret){
		printf("没有找到该数字！\n");
	}
	else{
		printf("找到了，下标是%d", ret);
	}
	system("pause");
	return 0;
}

//3.模拟三次输密码

//int main(){
//	char password[10] = { 0 };
//	int count = 0;
//	while (count <= 3){
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (strcmp(password, "12345") == 0){
//			printf("登录成功");
//			break;
//		}
//		else{
//			printf("请重输：");
//			count++;
//		}
//	}
//	if (count > 3)
//		printf("三次输错，走开\n");
//	system("pause");
//	return 0;
//}

//4.大小写转换程序

//int main(){
//	char  letter=0 ;
//	int i = 0;
//	printf("请输入一串字符：\n");//空格键也算字符
//	for (i = 0; i < 20; i++){
//		scanf("%c", &letter);
//		if (letter >= 'a' && letter <= 'z'){
//			letter =letter-32;
//			printf("%c", letter);
//		}
//		else if (letter >= 'A' && letter <= 'Z'){
//			letter = letter + 32;
//			printf("%c", letter);
//		}
//	}
// 	
//	
//	system("pause");
//	return 0;
//}
