#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 260;
	int *p = &n;
	
	printf("n = %d\n", n);
	char *pp = (char*)p;
	
	//n : 00000100-00000001-00000000-00000000 (260)
	//		p (con trỏ p được xài ở đây)
	//		pp (con trỏ pp được xài ở đây)
	//*pp được xài kiểu char chứ không phải int vì thế 1 byte
	*pp = 0;
	
	// vì xài char nên
	//n : 00000000-00000001-00000000-00000000 (256)
	//		pp (con trỏ pp chỉ thay đổi một phần)
	printf("n = %d\n", n);
	
	getchar();
	return 0;
}