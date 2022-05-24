#include<stdio.h> 
int register(int i ,j ) ; 
    
int main  ()
{  
    int i , j ,choice,done=0; 
     int a[6][6]={
                  { 1 , 0, 1 ,0 ,1 ,0 }, 
                  { 0 ,1 ,0 ,1 ,0 ,1 },
                  { 1 ,0 ,1 ,0 ,1 ,0 },
                  { 0 ,1, 0 ,1, 0, 1 },
                  { 1 ,0, 1 ,0 ,1, 0 },
                  };
   while(!done)
   {
     printf("enter the row and column which u wish to be seated\n"); 
scanf("%d%d",&i,&j); 


  if (i,j <=6 && a[i][j]==1)
  {  

  register(i,j);
    main(); 
 
}
  else if(a[i][j]==2) 
  {
  printf("our selected seat is already filled\n"); 
   main(); 
  } 
   else if ( a[i][j]==0)
   {
     printf("due to covid condition space need to be maintained select other seat\n"); 
     main();
   }
   else if(i,j>6)
   {
     printf ( "we have limited seates select within 6 rows and 6 colums \n"); 
     main(); 
   }
printf("ÿou wish to go back?1/0\n");
scanf("%d",&choice);
if(choice=1)
  done=1;
else
  done=0;
   }
}

    int register(int i, j ) 
    {
    
  printf("your seating is confirmed\n"); 
 return   a[i][j]=2;
    }
