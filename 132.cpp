#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 11
#define M 11
int main()
{  
	char language;
	printf("Which language will you use?/����Ҫʹ��ʲô���ԣ�\n");
	printf("Input E to choose English or input C to Chinese./����Eѡ��Ӣ�����Cѡ������\n");
	scanf("%c",&language); 
	if(language=='E')
	printf("Please input the quantity of questions that you want.\n");
	else 
	printf("����������Ҫ����Ŀ������\n");

	int shu,i=0,j;

	int daan,zhengque;

	int a,b,c,d,count=0,e,f,g,h,k,l,sum,fenzi,fenmu;

    double pan; 

    int zuo=0,gb,gy; 

    int gongbei(int a,int b,int c,int d);

	   int gongyue(int e,int f);

    scanf("%d",&shu);

    srand(time(0));

    	for(;;)

    	{  

		   for(;;){ 

	     	if(i==shu){zuo++;

	     		break;

	     	}

		 	 a=rand()%N;

	     	 b=rand()%N;

	     	 c=rand()%N;

	     	 d=rand()%N;

		 	 e=rand()%N;

		 	 f=rand()%N;

		 	 g=rand()%N;

		 	 h=rand()%N;

		 	 if(a==0||b==0||c==0||d==0||e==0||f==0||h==0||g==0) {continue;}
			 if(e>a||f>b||g>c||h>d) continue;
		 	 printf("%d/%d+%d/%d+%d/%d+%d/%d=",e,a,f,b,g,c,h,d);

		 	 

		 	 gb=gongbei(a,b,c,d);

		 	 sum=gb/a*e+gb/b*f+gb/c*g+gb/d*h;

		  	 gy=gongyue(sum,gb);

		 	 sum=sum/gy;

		 	 gb=gb/gy;

		 	 if(sum<0&&gb<0) {

		 	 sum=-sum;

		 	 gb=-gb;

		                     }

		      if(sum>0&&gb<0){

		      	sum=-sum;

		      	gb=-gb;

		                      }               

		 	 

		 	 double ce;

		 	 ce=(double)sum/(double)gb;

		 	 zhengque=ce;

		 	 if(zhengque==ce){

		 	 scanf("%d",&daan);

		 	 if(daan==ce) {

		 	 count++;

		 	        

		 	             }
 if(language=='E')
		        printf("The right answer is: %d\n",ce);
		 	    else
		        printf("��ȷ���ǣ�%d\n",ce);

						  }

		 	 else if(zhengque!=ce)  {

		 	 	scanf("%d/%d",&fenzi,&fenmu);

		 	 	if(fenzi==sum&&fenmu==gb){

		 	 		count++;

		 	 		

		 	 	}
if(language=='E')
		 	 	 printf("The right answer is: %d/%d\n",sum,gb);
				 else
		 	 	 printf("��ȷ���ǣ�%d/%d\n",sum,gb);

		 	 }          

		 	 i++;

		 	 break;

		 	               

	     	}

		   

    	  for(;;)  {

    	  	if(i==shu) {

    	  	zuo++;break;}

    	  

    	    a=rand()%M;

    	   b=rand()%M;

    	   c=rand()%M;

    	   d=rand()%M;

    	   e=rand()%M;

    	   f=rand()%M;

	       if(c==d) continue;

		pan=((double)a+(double)b)/((double)c-(double)d)*((double)e-(double)f);

		     

			 zhengque=pan;

		     if(pan==zhengque){

		     	printf("(%d+%d)/(%d-%d)*(%d-%d)=",a,b,c,d,e,f);

    	    scanf("%d",&daan);

    	    i++;
	   if(language=='E')
	       printf("The right answer is: %d\n",zhengque);
		   else
		   printf("��ȷ���ǣ�%d\n",zhengque);

    	    if(daan==zhengque) count++;

    	    break;

    	}

    }

    for(;;){ 

	     	if(i==shu){zuo++;

	     		break;

	     	}

		 	 a=rand()%N;

	     	 b=rand()%N;

	     	 c=rand()%N;

	     	 d=rand()%N;

		 	 e=rand()%N;

		 	 f=rand()%N;

		 	 g=rand()%N;

		 	 h=rand()%N;

		 	 if(a==0||b==0||c==0||d==0||e==0||f==0||h==0||g==0) {continue;}
if(e>a||f>b||g>c||h>d) continue;
		 	 printf("%d/%d+%d/%d-%d/%d-%d/%d=",e,a,f,b,g,c,h,d);

		 	 

		 	 gb=gongbei(a,b,c,d);

		 	 sum=gb/a*e+gb/b*f-gb/c*g-gb/d*h;

		  	 gy=gongyue(sum,gb);

		 	 sum=sum/gy;

		 	 gb=gb/gy;

		 	 if(sum<0&&gb<0) {

		 	 sum=-sum;

		 	 gb=-gb;

		                     }

		      if(sum>0&&gb<0){

		      	sum=-sum;

		      	gb=-gb;

		                      }   

		 	 double ce;

		 	 ce=(double)sum/(double)gb;

		 	 zhengque=ce;

		 	 if(zhengque==ce){

		 	 scanf("%d",&daan);

		 	 if(daan==ce) {

		 	 count++;

		 	        

		 	             }
 if(language=='E')
		 	  printf("The right answer is: %d\n",ce);
		      else
		 	  printf("��ȷ���ǣ�%d\n",ce);
		

						  }

		 	 else if(zhengque!=ce)  {

		 	 	scanf("%d/%d",&fenzi,&fenmu);

		 	 	if(fenzi==sum&&fenmu==gb){

		 	 		count++;

		 	 		

		 	 	}
 if(language=='E')
		 	 	 printf("The right answer is: %d/%d\n",sum,gb);
			     else
		 	     printf("��ȷ���ǣ�%d/%d\n",sum,gb);

		 	 }          

		 	 i++;

		 	     break;          

	     	}

       for(;;)  {

       		if(i==shu) {

    	  	zuo++;break;}

    	  

    	    a=rand()%M;

    	   b=rand()%M;

    	   c=rand()%M;

    	   d=rand()%M;

    	   e=rand()%M;

    	   f=rand()%M;

		if(c==d) continue;

		pan=((double)a+(double)b)/((double)c-(double)d)*((double)e+(double)f);

		     zhengque=pan;

		     if(pan==zhengque){

		     printf("(%d+%d)/(%d-%d)*(%d+%d)=",a,b,c,d,e,f);

    	    scanf("%d",&daan);

    	    i++;
 if(language=='E')
		   printf("The right answer is: %d\n",zhengque);
		   else
    	   printf("��ȷ���ǣ�%d\n",zhengque);

    	    if(daan==zhengque) count++;

    	    break;

    	}

    }   

	 for(;;){ 

	     	if(i==shu){zuo++;

	     		break;

	     	}

		 	 a=rand()%N;

	     	 b=rand()%N;

	     	 c=rand()%N;

	     	 d=rand()%N;

		 	 e=rand()%N;

		 	 f=rand()%N;

		 	 g=rand()%N;

		 	 h=rand()%N;

		 	 if(a==0||b==0||c==0||d==0||e==0||f==0||h==0||g==0) {continue;}
if(e>a||f>b||g>c||h>d) continue;
		 	 printf("%d/%d-%d/%d-%d/%d-%d/%d=",e,a,f,b,g,c,h,d);

		 	 

		 	 gb=gongbei(a,b,c,d);

		 	 sum=gb/a*e-gb/b*f-gb/c*g-gb/d*h;

		  	 gy=gongyue(sum,gb);

		 	 sum=sum/gy;

		 	 gb=gb/gy;

		 	 if(sum<0&&gb<0) {

		 	 sum=-sum;

		 	 gb=-gb;

		                     }

		      if(sum>0&&gb<0){

		      	sum=-sum;

		      	gb=-gb;

		                      }   

		 	 double ce;

		 	 ce=(double)sum/(double)gb;

		 	 zhengque=ce;

		 	 if(zhengque==ce){

		 	 scanf("%d",&daan);

		 	 if(daan==ce) {

		 	 count++;

		 	        

		 	             }
	 if(language=='E')
		 	 printf("The right answer is: %d\n",ce);
			 else
		 	 printf("��ȷ���ǣ�%d\n",ce);
		 	            

						  }

		 	 else if(zhengque!=ce)  {

		 	 	scanf("%d/%d",&fenzi,&fenmu);

		 	 	if(fenzi==sum&&fenmu==gb){

		 	 		count++;

		 	 		

		 	 	}
 if(language=='E')
		 	 	 printf("The right answer is: %d/%d\n",sum,gb);
			     else
		         printf("��ȷ���ǣ�%d/%d\n",sum,gb);
		 	 	

		 	 }          

		 	 i++;

		 	    break;           

	     	}

       for(;;)  {

    	  	if(i==shu) {

    	  	zuo++;break;}

    	    a=rand()%M;

    	   b=rand()%M;

    	   c=rand()%M;

    	   d=rand()%M;

    	   e=rand()%M;

    	   f=rand()%M;

		if(c==d) continue;

		pan=((double)a+(double)b)/((double)c-(double)d)*(double)e*(double)f;

		     zhengque=pan;

		     if(pan==zhengque){

		     printf("(%d+%d)/(%d-%d)*%d*%d=",a,b,c,d,e,f);

    	    scanf("%d",&daan);

    	    i++;
 if(language=='E')
		 	 	 printf("The right answer is: %d\n",zhengque);
			     else
    	         printf("��ȷ���ǣ�%d\n",zhengque);
    	

    	    if(daan==zhengque) count++;

    	    break;

    	}

    }

    for(;;){ 

	     	if(i==shu){zuo++;

	     		break;

	     	}

		 	 a=rand()%N;

	     	 b=rand()%N;

	     	 c=rand()%N;

	     	 d=rand()%N;

		 	 e=rand()%N;

		 	 f=rand()%N;

		 	 g=rand()%N;

		 	 h=rand()%N;

		 	 k=rand()%N;

		 	 l=rand()%N;

		 	 if(a==0||b==0||c==0||d==0||e==0||f==0||h==0||g==0||k==0||l==0) {continue;}
if(k>l||e>a||f>b||g>c||h>d) continue;
		 	 printf("%d/%d*%d/%d+%d/%d+%d/%d-%d/%d=",k,l,e,a,f,b,g,c,h,d);

		 	 e=k*e;

		 	 a=a*l;

		 	 gb=gongbei(a,b,c,d);

		 	 sum=gb/a*e+gb/b*f+gb/c*g-gb/d*h;

		  	 gy=gongyue(sum,gb);

		 	 sum=sum/gy;

		 	 gb=gb/gy;

		 	 if(sum<0&&gb<0) {

		 	 sum=-sum;

		 	 gb=-gb;

		                     }

		      if(sum>0&&gb<0){

		      	sum=-sum;

		      	gb=-gb;

		                      }               

		 	 

		 	 double ce;

		 	 ce=(double)sum/(double)gb;

		 	 zhengque=ce;

		 	 if(zhengque==ce){

		 	 scanf("%d",&daan);

		 	 if(daan==ce) {

		 	 count++;

		 	        

		 	             }
           	 if(language=='E')
		 	 	 printf("The right answer is: %d\n",ce);
			     else
		         printf("��ȷ���ǣ�%d\n",ce);
		 	    

						  }

		 	 else if(zhengque!=ce)  {

		 	 	scanf("%d/%d",&fenzi,&fenmu);

		 	 	if(fenzi==sum&&fenmu==gb){

		 	 		count++;

		 	 		

		 	 	}
	 if(language=='E')
		 	 	 printf("The right answer is: %d/%d\n",sum,gb);
			     else
		 	 			 	 	printf("��ȷ���ǣ�%d/%d\n",sum,gb);
		 	

		 	 }          

		 	 i++;

		 	 break;

		 	               

	     	}

       for(;;)  {

    	  	if(i==shu) {

    	  	zuo++;break;}

    	    a=rand()%M;

    	   b=rand()%M;

    	   c=rand()%M;

    	   d=rand()%M;

    	   e=rand()%M;

    	   f=rand()%M;

		if(c==d||e==f) continue;

		pan=((double)a+(double)b)/((double)c-(double)d)/((double)e-(double)f);

		     zhengque=pan;

		     if(pan==zhengque){

		     printf("(%d+%d)/(%d-%d)/(%d-%d)=",a,b,c,d,e,f);

    	    scanf("%d",&daan);

    	    i++;
if(language=='E')
		 	 	 printf("The right answer is: %d/%d\n",zhengque);
			     else
    	    		 	 	printf("��ȷ���ǣ�%d/%d\n",zhengque);

    	    if(daan==zhengque) count++;

    	    break;

    	}

    }

    for(;;){ 

	     	if(i==shu){zuo++;

	     		break;

	     	}

		 	 a=rand()%N;

	     	 b=rand()%N;

	     	 c=rand()%N;

	     	 d=rand()%N;

		 	 e=rand()%N;

		 	 f=rand()%N;

		 	 g=rand()%N;

		 	 h=rand()%N;

		 	 k=rand()%N;

		 	 l=rand()%N;

		 	 if(a==0||b==0||c==0||d==0||e==0||f==0||h==0||g==0||k==0||l==0) {continue;}
if(k>l||e>a||f>b||g>c||h>d) continue;
		 	 printf("%d/%d/%d/%d+%d/%d+%d/%d-%d/%d=",k,l,e,a,f,b,g,c,h,d);

		 	 int temp=e;

		 	 e=k*a;

		 	 a=l*temp;

		 	 gb=gongbei(a,b,c,d);

		 	 sum=gb/a*e+gb/b*f+gb/c*g-gb/d*h;

		  	 gy=gongyue(sum,gb);

		 	 sum=sum/gy;

		 	 gb=gb/gy;

		 	 if(sum<0&&gb<0) {

		 	 sum=-sum;

		 	 gb=-gb;

		                     }

		      if(sum>0&&gb<0){

		      	sum=-sum;

		      	gb=-gb;

		                      }               

		 	 

		 	 double ce;

		 	 ce=(double)sum/(double)gb;

		 	 zhengque=ce;

		 	 if(zhengque==ce){

		 	 scanf("%d",&daan);

		 	 if(daan==ce) {

		 	 count++;

		 	        

		 	             }
 if(language=='E')
		 	 	 printf("The right answer is: %d\n",ce);
			     else
		 	              printf("��ȷ���ǣ�%d\n",ce);

						  }

		 	 else if(zhengque!=ce)  {

		 	 	scanf("%d/%d",&fenzi,&fenmu);

		 	 	if(fenzi==sum&&fenmu==gb){

		 	 		count++;

		 	 		

		 	 	}
 if(language=='E')
		 	 	 printf("The right answer is: %d/%d\n",sum,gb);
			     else
		 	 			 	 	printf("��ȷ���ǣ�%d/%d\n",sum,gb);
		 	

		 	 }          

		 	 i++;

		 	 break;

		 	               

	     	}

         for(;;)  {

    	  	if(i==shu) {

    	  	zuo++;break;}

    	    a=rand()%M;

    	   b=rand()%M;

    	   c=rand()%M;

    	   d=rand()%M;

    	   e=rand()%M;

    	   f=rand()%M;

		

		pan=(double)a*(double)b*(double)c*(double)d*(double)e*(double)f;

		     zhengque=pan;

		     if(pan==zhengque){

		     printf("%d*%d*%d*%d*%d*%d=",a,b,c,d,e,f);

    	    scanf("%d",&daan);

    	    i++;
 if(language=='E')
		 	 	 printf("The right answer is: %d\n",zhengque);
			     else
    	     printf("��ȷ���ǣ�%d\n",zhengque);
    	    

    	    if(daan==zhengque) count++;

    	    break;

    	}

    }

    	   for(;;)  {

    	  	if(i==shu) {

    	  	zuo++;break;}

    	    a=rand()%M;

    	   b=rand()%M;

    	   c=rand()%M;

    	   d=rand()%M;

    	   e=rand()%M;

    	   f=rand()%M;

		

		pan=((double)a+(double)b)*((double)c-(double)d)*((double)e-(double)f);

		     zhengque=pan;

		     if(pan==zhengque){

		     printf("(%d+%d)*(%d-%d)*(%d-%d)=",a,b,c,d,e,f);

    	    scanf("%d",&daan);

    	    i++;
 if(language=='E')
		 	 	 printf("The right answer is: %d\n",zhengque);
			     else
    	     printf("��ȷ���ǣ�%d\n",zhengque);
    	    

    	    if(daan==zhengque) count++;

    	    break;

    	}

         }

         

        if(zuo!=0) break;

    	    

    	    

    	    

    	}
	if(language=='E')
		printf("the sum of right answer:%d\nThe sum of wrong answer:%d\n",count,shu-count);
		else
    	printf("���Ե���Ŀ����%d\n�������Ŀ����%d\n",count,shu-count);
    return 0;

} 

int gongbei(int a,int b,int c,int d)

{int max=a,sum=0,i,j;

if(b>max) max=b;

  if(c>max) max=c;

    if(d>max) max=d;

       for(i=2;;i++)

       {

       	sum=max%b+max%c+max%a+max%d;

       	if(sum==0) break;

       	else {

       	sum=0;

       	max=max*i;

       }

       }

	return(max);

}

int gongyue(int e,int f)

  {int r;

  	 if(e>=f)

  r=e%f;

 else

 {r=e;

 e=f;

 f=r;

 r=e%f;}

 while(r!=0)

 {e=f;f=r;r=e%f;}

 return (f);

  }  
