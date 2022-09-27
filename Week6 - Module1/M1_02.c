//ID 65070503410
//Name : Charunthon Limseelo
//Cumulative frequency

#include <stdio.h>
int main() {
int len;
	scanf("%d",&len);
	float sum[len];
	float x,y,z;
	float grade[5]={0,0,0,0,0};
	float per;
	for(int i=0;i<len;i++){
		scanf("%f %f %f",&x,&y,&z);
		sum[i]=x+y+z;
 	}
 	for(int i=0;i<len;i++){
		if(sum[i]>=80){
			grade[0]++;
		}
		if(sum[i]>=70){
			grade[1]++;
		}
		if(sum[i]>=60){
			grade[2]++;
		}
		if(sum[i]>=50){
			grade[3]++;
		}
		grade[4]++;
 	}
 	for(int i=0;i<5;i++){
 		per=((float)grade[i]/len)*100;
 		printf("%.0f %.2f\n",grade[i],per);
	 }
}
