/*2151133 孙韩雅 信07*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ret, x;
	while (1) {
		printf("请输入x的值[0-100] : ");
		ret = scanf("%d", &x); //读入x的方式必须是scanf且格式符为%d，不准用非scanf
		if (ret==0) {
			fflush(stdin);
			while (getchar() != '\n')
				continue;
		}
		else if (ret == 1 && (x >= 0 && x <= 100))
			break;
		else
			continue;
	}
	printf("x=%d\n", x);

	return 0;
}