#include <stdio.h>

int main() {
	int a,b;
	printf("nhap so thu nhat");
	scanf("%d",&a);
	printf("nhap so thu hai");
	scanf("%d",&b);
	
	if (a<b) {
	printf("so nho hon la: %d\n",a);
}else if (b<a) {
	printf("so nho hon la: %d\n",b);
}else {
	printf("hai so bang nhau. \n");	
}
	return 0;

}
