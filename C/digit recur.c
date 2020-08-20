#include<stdio.h>
#include<math.h>
int count=0;
int main()
{
	int x,y;
	int i,j,k,l,m,a,b,c,d,e;
	int num,check;
	printf("enter two number:");
	scanf("%d  %d",&x,&y);
	check=3*(x+y);
	for(i=0;i<2;i++){
		if(i==0){
			a=x;
		}else{
			a=y;
		}
		for(j=0;j<2;j++){
			if(j==0){
			    b=x;
		    }else{
			    b=y;
		    }
			for(k=0;k<2;k++){
				if(k==0){
			    c=x;
		        }else{
			    c=y;
		        }
				for(l=0;l<2;l++){
					if(l==0){
			        d=x;
		            }else{
			        d=y;
		            }
					for(m=0;m<2;m++){
						if(m==0){
			            e=x;
		                }else{
			            e=y;
		                }
						num=a+b+c+d+e;
						if(num<=check){
							printf("%d%d%d%d%d       ",a,b,c,d,e);
							count++;
						}
						if(count%10==0){
							printf("\n");
						}
					}
				}
			}
		}
	}
	printf("\n #number: %d",count);
	return 0;
}
