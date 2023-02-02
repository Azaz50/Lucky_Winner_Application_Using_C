# Lucky_Winner_Application_Using_C
compile : gcc lucky_winner.c 
excute  : ./a.out     
Lucky_Winner Application using C basically it's a file base application in which Number of customers are saved.
And randomly one of them are selected these are Winner of all of them.

main task in program we done:

 k-represents total number of people in the list.
  and rand()%10 means to generate random numbers from 0-9
  rand()%10+1 means 1-10
  so rand() % k is if there are 10 people in the list then k=10
  so generating random numbers from 0-9 where 0 represents name present at 1st in list and 9 the last
  So while entering names the name at last should has only one new line ending (i.e one enter and no more new lines)
  otherwise this program wont work properly
