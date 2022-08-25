#include <stdio.h>

int main() {
	
	int isian0[8] = {100, 150, 200, 250, 300, 350, 400, 450};
	int derajat0[8] = {83, 80, 76, 73, 69, 64, 58, 45};
	
	int isian1[13] = {200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800};
	int derajat1[13] = {82, 80, 78, 77, 74, 72, 70, 68, 65, 62, 59, 55, 45};
	
	int isian2[22] = { 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 
	                1050, 1100, 1150, 1200, 1250, 1300, 1350 };
	int derajat2[22] = {83, 82, 81, 80, 79, 77, 76, 75, 74, 73, 71, 70, 68, 67, 65, 64, 62, 60, 58, 55, 52, 45};
					               
	int isian3[21] = { 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 
	                2000, 2100, 2200, 2300, 2400, 2500, 2600 };
	int derajat3[21] = {83, 82, 81, 79, 78, 77, 76, 75, 73, 72, 71, 69, 68, 66, 64, 63, 61, 58, 56, 53, 46};
					                
	int isian4[19] = { 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 
	                3200, 3300, 3400, 3500, 3600, 3700 };
	int derajat4[19] = {74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 62, 61, 60, 58, 56, 54, 51, 46};
					                
	int isian5[24] = { 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 
	                3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700 };
	int derajat5[24] = {74, 73, 72, 72, 71, 70, 69, 68, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 57, 56, 54, 54, 49, 46};
	                
	int isian6[22] = { 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 
	                4800, 4900, 5000, 5100, 5200, 5300, 5400, 5500, 5600 };
	int derajat6[22] = {69, 69, 68, 67, 67, 66, 65, 64, 63, 63, 62, 61, 60, 59, 58, 57, 55, 54, 52, 50, 47, 45};
	                
	int isian7[25] = { 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000, 
	                5100, 5200, 5300, 5400, 5500, 5600, 5700, 5800, 5900, 6000, 6100, 6200, 6300 };
	int derajat7[25] = {69, 69, 68, 68, 67, 66, 66, 65, 64, 64, 63, 62, 61, 60, 60, 59, 58, 57, 55, 54, 53, 51, 49, 47, 45};
	                
	int isian8[21] = { 4500, 4600, 4700, 4800, 4900, 5000, 5100, 5200, 5300, 5400, 5500, 5600, 5700, 
	                5800, 5900, 6000, 6100, 6200, 6300, 6400, 6500 };
	int derajat8[21] = {68, 67, 66, 66, 65, 64, 64, 63, 62, 61, 61, 60, 59, 58, 57, 56, 55, 53, 52, 50, 45};

	int a, b, i,is_found,search_value;
	char c = 'y';
	while(c == 'y'){
	printf("Masukkan Isian: ");
	scanf("%d", &a);

	if(a == 0){     
	printf("Masukkan Jarak: ");
    scanf("%d",&search_value);
    for(i=0;i<isian0[i];i++){
        if(isian0[i]==search_value){
            is_found=i;
        }
    }
    int arrLen = sizeof isian0 / sizeof isian0[0];
    int isElementPresent = 0;
     
    for (int i = 0; i < arrLen; i++) {
        if (isian0[i] == search_value) {
            isElementPresent = 1;
            break;
        }
    }
    if(isElementPresent){
        printf("Sudut elevasi adalah: %d",derajat0[is_found]);
    }else{
        printf("Jarak tidak tercapai");
    }}
	 
	else if(a == 1){
    printf("Masukkan Jarak: ");
    scanf("%d",&search_value);
    for(i=0;i<isian1[i];i++){
        if(isian1[i]==search_value){
            is_found=i;
        }
    }
    int arrLen = sizeof isian1 / sizeof isian1[0];
    int isElementPresent = 0;
     
    for (int i = 0; i < arrLen; i++) {
        if (isian1[i] == search_value) {
            isElementPresent = 1;
            break;
        }
    }
    if(isElementPresent){
        printf("Sudut elevasi adalah: %d",derajat1[is_found]);
    }else{
        printf("Jarak tidak tercapai");
    }}
	
	else if(a == 2){
	printf("Masukkan Jarak: ");
    scanf("%d",&search_value);
    for(i=0;i<isian2[i];i++){
        if(isian2[i]==search_value){
            is_found=i;
        }
    }
    int arrLen = sizeof isian2 / sizeof isian2[0];
    int isElementPresent = 0;
     
    for (int i = 0; i < arrLen; i++) {
        if (isian2[i] == search_value) {
            isElementPresent = 1;
            break;
        }
    }
    if(isElementPresent){
        printf("Sudut elevasi adalah: %d",derajat2[is_found]);
    }else{
        printf("Jarak tidak tercapai");
    }}
	
	else if(a == 3){
	printf("Masukkan Jarak: ");
    scanf("%d",&search_value);
    for(i=0;i<isian3[i];i++){
        if(isian3[i]==search_value){
            is_found=i;
        }
    }
    int arrLen = sizeof isian3 / sizeof isian3[0];
    int isElementPresent = 0;
     
    for (int i = 0; i < arrLen; i++) {
        if (isian3[i] == search_value) {
            isElementPresent = 1;
            break;
        }
    }
    if(isElementPresent){
        printf("Sudut elevasi adalah: %d",derajat3[is_found]);
    }else{
        printf("Jarak tidak tercapai");
    }}
	
	else if(a == 4){
	printf("Masukkan Jarak: ");
    scanf("%d",&search_value);
    for(i=0;i<isian4[i];i++){
        if(isian4[i]==search_value){
            is_found=i;
        }
    }
    int arrLen = sizeof isian4 / sizeof isian4[0];
    int isElementPresent = 0;
     
    for (int i = 0; i < arrLen; i++) {
        if (isian4[i] == search_value) {
            isElementPresent = 1;
            break;
        }
    }
    if(isElementPresent){
        printf("Sudut elevasi adalah: %d",derajat4[is_found]);
    }else{
        printf("Jarak tidak tercapai");
    }}
	
	else if(a == 5){
	printf("Masukkan Jarak: ");
    scanf("%d",&search_value);
    for(i=0;i<isian5[i];i++){
        if(isian5[i]==search_value){
            is_found=i;
        }
    }
    int arrLen = sizeof isian5 / sizeof isian5[0];
    int isElementPresent = 0;
     
    for (int i = 0; i < arrLen; i++) {
        if (isian5[i] == search_value) {
            isElementPresent = 1;
            break;
        }
    }
    if(isElementPresent){
        printf("Sudut elevasi adalah: %d",derajat5[is_found]);
    }else{
        printf("Jarak tidak tercapai");
    }}
	
	else if(a == 6){
	printf("Masukkan Jarak: ");
    scanf("%d",&search_value);
    for(i=0;i<isian6[i];i++){
        if(isian6[i]==search_value){
            is_found=i;
        }
    }
    int arrLen = sizeof isian6 / sizeof isian6[0];
    int isElementPresent = 0;
     
    for (int i = 0; i < arrLen; i++) {
        if (isian6[i] == search_value) {
            isElementPresent = 1;
            break;
        }
    }
    if(isElementPresent){
        printf("Sudut elevasi adalah: %d",derajat6[is_found]);
    }else{
        printf("Jarak tidak tercapai");
    }}
	
	else if(a == 7){
	printf("Masukkan Jarak: ");
    scanf("%d",&search_value);
    for(i=0;i<isian7[i];i++){
        if(isian7[i]==search_value){
            is_found=i;
        }
    }
    int arrLen = sizeof isian7 / sizeof isian7[0];
    int isElementPresent = 0;
     
    for (int i = 0; i < arrLen; i++) {
        if (isian7[i] == search_value) {
            isElementPresent = 1;
            break;
        }
    }
    if(isElementPresent){
        printf("Sudut elevasi adalah: %d",derajat7[is_found]);
    }else{
        printf("Jarak tidak tercapai");
    }}
	
	else if(a == 8){
	printf("Masukkan Jarak: ");
    scanf("%d",&search_value);
    for(i=0;i<isian8[i];i++){
        if(isian8[i]==search_value){
            is_found=i;
        }
    }
    int arrLen = sizeof isian8 / sizeof isian8[0];
    int isElementPresent = 0;
     
    for (int i = 0; i < arrLen; i++) {
        if (isian8[i] == search_value) {
            isElementPresent = 1;
            break;
        }
    }
    if(isElementPresent){
        printf("Sudut elevasi adalah: %d",derajat8[is_found]);
    }else{
        printf("Jarak tidak tercapai");
    }}
	
	else{
		printf("Tidak ada isian %d", a);
	}
	
		
	printf("\nmembidik lagi?(y/n) ");
	scanf(" %c", &c);
        if (c == 'n') {
            break;
        }
    	else if (c!='y' && c!='n'){
    		printf("%c tidak terdaftar, harap input 'y' atau 'n'", c);
    		while(c!='y' && c!='n'){
    		printf("\nmembidik lagi?(y/n) ");
			scanf(" %c", &c);
		        if (c == 'n') {
		            break;
		        }
		    	else if (c!='y' && c!='n'){
		    		printf("%c tidak terdaftar, harap input 'y' atau 'n'", c);
				}
			}
		}
		
}
	return 0;
}