#include<stdio.h>
int main(){
	int h1, m1, s1, h2, m2, s2, time1, time2, time;
	
	scanf("%d %d %d %d %d %d",&h1, &m1, &s1, &h2, &m2, &s2);
	
	time1 = s1 + (m1*60) + (h1*3600);
	
	time2 = s2 + (m2*60) + (h2*3600);

	if(time2>time1){
		time=time2-time1;	
	}else{
		time=time1-time2;
	}
	
	
	if(h1<24 && m1 <60 && s1<60 && h2<24 && m2<60 && s2<60){
			printf("han transcurrido %02d:%02d:%02d", (time/3600),(time%3600/60),(time%60));
	}
	return 0;
}