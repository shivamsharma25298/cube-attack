//Program to implement the cube attack on toy example.
#include<stdio.h>
#include<conio.h>
int polynomial(int x0, int x1, int x2, int *);

void main()
{
int v0,v1,v2,a[10],t,c[20],num,y,i,value, l,j;
int k,i0,p = 0,y1,y2,o,y3,y4,i1,i2,x1,n,x2,x3,x0,flag,y5,y6,y7,y8,xa[10],ya[10],a1,b,c1,d,n1,e,f,m,z,r,y9,y10,y11;
//printf("enter the cube size\n");
//scanf("%d",&n);
printf("--------------------------Program to implement the cube attack on toy example.-----------------------------\n");
printf("\n");
printf("Please note that if you give the wrong values then it will give you wrong result so be sure about the input values \n");
printf("\n");
printf("enter the no. of indices(1,2)\n");
scanf("%d",&num);
printf("enter the indices(0,1,2)\n");
for(i = 0 ; i < num ; i++)
{
	scanf("%d",&a[i]);

}
printf("Indices:");
for(i = 0 ; i < num ; i++)
{
    printf("%d\n",a[i]);
}
printf("enter how many times you want to check the polynomial with the keys to check the constant value of polynomial \n");
scanf("%d",&value);
printf("value is %d\n",value);
for(int l = 0; l < value; l++ )
{
    printf("enter the value  of x0, x1, x2\n");
    scanf("%d %d %d",&x0,&x1,&x2);
    printf("the value of x0 = %d ,x1 = %d and x2 =%d\n",x0,x1,x2);
   c[l] =  polynomial(x0,x1,x2,a);

        }
        printf("the values of polynomial are \n");
     for(p = 0; p < value ; p ++)
     {
         printf("%d\n",c[p]);


  }


       flag = 0;
for (o = 0; o < value; o++) {
    if (c[0] != c[o]) {
        flag = 1;
        break;
    }
}
  if(flag == 0)
  {
      printf("poly is constant, please ensure that you have used all possible key combinations and try again if not. \n");

  }
  else{
    printf("poly is not constant so we can move further\n");

      printf("Now do the linearity test by giving the different x and y values \n");
      printf("how many times you want to perform the linearity test \n");

        scanf("%d",&t);
        printf("times is %d\n",t);
         for(z = 0; z < t ; z++)
         {
            printf("enter the three values of x\n");
            scanf("%d" "%d" "%d",&x0,&x1,&x2);
            printf("the values of x is %d %d %d\n",x0,x1,x2);
                        a1 = x0;
                        b = x1;
                        c1 = x2;
                       y5 =  polynomial(x0,x1,x2,a);
                        printf("enter the three values of y\n");
             scanf("%d" "%d" "%d", &x0,&x1,&x2);
             printf("the values of y is %d %d %d\n",x0,x1,x2);
                  k = 0;
                  d = x0;
                  e = x1;
                  f = x2;
                       y6 =  polynomial(x0,x1,x2,a);
               x0 = 0;
               x1 = 0;
               x2 = 0;
               printf("the PI of x(0,0,0) is :\n");
                       y7 =  polynomial(x0,x1,x2,a);
                          r = a1 ^ d;
        m = b ^ e;
        n1 = c1 ^ f;
                  k = 0;
                x0 = r;
                x1 = m;
                x2 = n1;
                            printf("the PI of x xor y is :\n");
                        y8 =  polynomial(x0,x1,x2,a);
 if((y5 ^ y6 ^ y7) == y8)
             {
                 printf("polynomial is linear\n");


               x0 = 1;
               x1 = 0;
               x2 = 0;
            printf("the PI of P(1 0 0) is :\n");

                                       y9 =  polynomial(x0,x1,x2,a);

               x0 = 0;
               x1 = 1;
               x2 = 0;
            printf("the PI of P(0 1 0) is :\n");

                                       y10 =  polynomial(x0,x1,x2,a);
               x0 = 0;
               x1 = 0;
               x2 = 1;
            printf("the PI of P(0 0 1) is :\n");

                                       y11 =  polynomial(x0,x1,x2,a);
 if(y7 == 1)
                      {      printf("coefficients of superpoly are\n ");
                               printf("1\n");

                        if(y9 != y7)
                        {
                            printf("x0\n");

                        }
                        if(y10 != y7){

                          printf("x1\n");
                        }
                       if(y11 != y7){
                        printf("x2\n");
                      }

                      }
                       else
                      {      printf("coefficients of superpoly are\n ");

                        if(y9 != y7)
                        {
                            printf("x0\n");
                        }
                        if(y10 != y7){

                          printf("x1\n");
                        }
                      if (y11 != y7){
                        printf("x2\n");
                      }
            }
           printf("Value from the online phase is :\n");
            x0 = 1;
            x1 = 0;
            x2 = 1;
              polynomial(x0,x1,x2,a);
              }
             else{
                printf("polynomial is not linear\n");
             }
}
  }

getch();
}

int polynomial(int x0, int x1, int x2, int *j)
{   int v0,p = 0,c1,y4,y3,y,y2,v1,v2,y1,c[20];

      if (*j ==0)
        {
        y1 = v1*0*x0 ^ v1*0*x1 ^ v2*x2*x0 ^ v1*x2 ^ 0*x0 ^ 0*v1 ^ x0*x2 ^ v1 ^ x2 ^ 1;
        y2 = v1*1*x0 ^ v1*1*x1 ^ v2*x2*x0 ^ v1*x2 ^ 1*x0 ^ 1*v1 ^ x0*x2 ^ v1 ^ x2 ^ 1;
          y = y1 ^ y2;
       j++;
       if(*j == 1){
        y1 = 0*0*x0 ^ 0*0*x1 ^ 0*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
        y2 = 1*1*x0 ^ 1*1*x1 ^ 0*x2*x0 ^ 1*x2 ^ 1*x0 ^ 1*1 ^ x0*x2 ^ 1 ^ x2 ^ 1;
        y3 = 1*0*x0 ^ 1*0*x1 ^ 0*x2*x0 ^ 1*x2 ^ 0*x0 ^ 0*1 ^ x0*x2 ^ 1 ^ x2 ^ 1;
        y4 = 0*1*x0 ^ 0*1*x1 ^ 0*x2*x0 ^ 0*x2 ^ 1*x0 ^ 1*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
          y = y1 ^ y2 ^ y3 ^ y4;
       printf(" PI is %d\n",y);


   }

   else if(*j == 2){
        y1 = 0*0*x0 ^ 0*0*x1 ^ 0*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
        y2 = 0*1*x0 ^ 0*1*x1 ^ 1*x2*x0 ^ 0*x2 ^ 1*x0 ^ 1*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
        y3 = 0*0*x0 ^ 0*0*x1 ^ 1*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
        y4 = 0*1*x0 ^ 0*1*x1 ^ 0*x2*x0 ^ 0*x2 ^ 1*x0 ^ 1*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
        y = y1 ^ y2 ^ y3 ^ y4;

   printf("PI is %d\n",y);

   }
    else{
              y1 = 0*0*x0 ^ 0*0*x1 ^ 0*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
              y2 = 1*0*x0 ^ 1*0*x1 ^ 0*x2*x0 ^ 0*x2 ^ 1*x0 ^ 1*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
                 y = y1 ^ y2;
        printf("PI is %d\n",y);


    }
        }
  else if(*j == 1)
        {
            y = v1*v0*x0 ^ v1*v0*x1 ^ v2*x2*x0 ^ v1*x2 ^ v0*x0 ^ v0*v1 ^ x0*x2 ^ v1 ^ x2 ^ 1;
            y1 = 0*v0*x0 ^ 0*v0*x1 ^ v2*x2*x0 ^ 0*x2 ^ v0*x0 ^ v0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
            y2 = 1*v0*x0 ^ 1*v0*x1 ^ v2*x2*x0 ^ 1*x2 ^ v0*x0 ^ v0*1 ^ x0*x2 ^ 1 ^ x2 ^ 1;

     y = y1 ^ y2;
       j++;
       if(*j == 0){
        y1 = 0*0*x0 ^ 0*0*x1 ^ v2*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
        y2 = 1*1*x0 ^ 1*1*x1 ^ v2*x2*x0 ^ 1*x2 ^ 1*x0 ^ 1*1 ^ x0*x2 ^ 1 ^ x2 ^ 1;
        y3 = 1*0*x0 ^ 1*0*x1 ^ v2*x2*x0 ^ 1*x2 ^ 0*x0 ^ 0*1 ^ x0*x2 ^ 1 ^ x2 ^ 1;
        y4 = 0*1*x0 ^ 0*1*x1 ^ v2*x2*x0 ^ 0*x2 ^ 1*x0 ^ 1*0 ^ x0*x2 ^ 1 ^ x2 ^ 1;

          y = y1 ^ y2 ^ y3 ^ y4;

       printf(" PI is %d\n",y);


   }
   else if(*j == 2){
            y1 = 0*0*x0 ^ 0*0*x1 ^ 0*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
            y2 = 1*0*x0 ^ 1*0*x1 ^ 1*x2*x0 ^ 1*x2 ^ 0*x0 ^ 0*1 ^ x0*x2 ^ 1 ^ x2 ^ 1;
            y3 = 0*0*x0 ^ 0*0*x1 ^ 1*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
            y4 = 1*0*x0 ^ 1*0*x1 ^ 1*x2*x0 ^ 1*x2 ^ 0*x0 ^ 0*1 ^ x0*x2 ^ 1 ^ x2 ^ 1;

         y = y1 ^ y2 ^ y3 ^ y4;

   printf("PI is %d\n",y);


   }
   else{
            y1 = 0*0*x0 ^ 0*0*x1 ^ 0*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
            y2 = 1*0*x0 ^ 1*0*x1 ^ 0*x2*x0 ^ 1*x2 ^ 0*x0 ^ 0*1 ^ x0*x2 ^ 1 ^ x2 ^ 1;

             y = y1 ^ y2;
          printf(" PI is %d\n",y);


   }

   }


else if(*j == 2){

            y = v1*v0*x0 ^ v1*v0*x1 ^ v2*x2*x0 ^ v1*x2 ^ v0*x0 ^ v0*v1 ^ x0*x2 ^ v1 ^ x2 ^ 1;
            y1 = v1*v0*x0 ^ v1*v0*x1 ^ 0*x2*x0 ^ v1*x2 ^ v0*x0 ^ v0*v1 ^ x0*x2 ^ v1 ^ x2 ^ 1;
            y2= v1*v0*x0 ^ v1*v0*x1 ^ 1*x2*x0 ^ v1*x2 ^ v0*x0 ^ v0*v1 ^ x0*x2 ^ v1 ^ x2 ^ 1;
             y = y1 ^ y2;

            j++;

             if (*j == 0){
             y1 = 0*0*x0 ^ 0*v0*x1 ^ 0*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
             y2= 0*1*x0 ^ 0*1*x1 ^ 1*x2*x0 ^ 0*x2 ^ 1*x0 ^ 1*v1 ^ x0*x2 ^ 0 ^ x2 ^ 1;
             y3 = 0*1*x0 ^ 0*1*x1 ^ 0*x2*x0 ^ 0*x2 ^ 1*x0 ^ 1*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
             y4= 0*0*x0 ^ 0*0*x1 ^ 1*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
               y = y1 ^ y2 ^ y3 ^ y4;
               printf("PI is %d\n",y);


             }

             else if(*j == 1){
                y1 = 0*0*x0 ^ 0*0*x1 ^ 0*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
                y2= 1*0*x0 ^ 1*0*x1 ^ 1*x2*x0 ^ 1*x2 ^ 0*x0 ^ 0*1 ^ x0*x2 ^ 1 ^ x2 ^ 1;
                y1 = 1*0*x0 ^ 1*0*x1 ^ 0*x2*x0 ^ 1*x2 ^ 0*x0 ^ 0*1 ^ x0*x2 ^ 1 ^ x2 ^ 1;
                y2= 0*0*x0 ^ 0*0*x1 ^ 1*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
               y = y1 ^ y2 ^ y3 ^ y4;
               printf("PI is %d\n",y);


             }
            else {
            y1 = 0*0*x0 ^ 0*0*x1 ^ 0*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;
            y2= 0*0*x0 ^ 0*0*x1 ^ 1*x2*x0 ^ 0*x2 ^ 0*x0 ^ 0*0 ^ x0*x2 ^ 0 ^ x2 ^ 1;

                    y =  y1 ^ y2;
                    printf("PI is %d\n",y);
}
}
 else{
        printf("enter the valid indices\n");
  }
return y;
}
