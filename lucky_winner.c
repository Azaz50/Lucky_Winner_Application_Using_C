#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
 {
    FILE *file;
    int a[100],i=0,k=0,j=0,count=0,lucky;
    char c,str[100][50];
    srand (time(NULL));
    file=fopen("file.txt","r");

    while(1)
    {
     if(file==NULL){
      printf("File Not Found\n");
      exit(0);
     }
     else{
      c=fgetc(file);
      fflush(stdin);
      if(c!='\n'){
       str[k][j]=c;
       j++;
      }
      if(c=='\n'){
       k++;
       j=0;
      }
      if(c==EOF){
       break;
      }
      //printf("%c",c);
     }
    }
    fclose(file);
    printf("Total people in the list=%d\n",k);

  lucky= rand() % (k);
  /*
  k-represents total number of people in the list.
  and rand()%10 means to generate random numbers from 0-9
  rand()%10+1 means 1-10
  so rand() % k is if there are 10 people in the list then k=10
  so generating random numbers from 0-9 where 0 represents name present at 1st in list and 9 the last
  So while entering names the name at last should has only one new line ending (i.e one enter and no more new lines)
  otherwise this program wont work properly
  */
    printf("People in the list are\n");
     for(i=0;i<k;i++){
     printf("%s\n",str[i]);
    }
    for(i=0;i<k;i++){
     if(lucky==i){
      printf("\nBut Todays Lucky Winner is\n");
         printf("%s\n",str[i]);
     }
    }

    return 0;
 }
