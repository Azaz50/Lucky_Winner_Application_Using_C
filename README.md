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
  
  output:
(base) azaz@azaz:~/Desktop/C_project/Lucky_Winner$ gcc lucky_winner.c
(base) azaz@azaz:~/Desktop/C_project/Lucky_Winner$ ls
a.out  file.txt  lucky_winner.c
(base) azaz@azaz:~/Desktop/C_project/Lucky_Winner$ ./a.out
Total people in the list=10
People in the list are
1. azaz mohammad
2. Tanweer kamal
3. wahid raza
4. irfan bhai
5. safwan bhai
6. Aasif ali
7. shohel akhtar�
8. Arshad ali
9. muktar sir
10. azmat ali

But Todays Lucky Winner is
6. Aasif ali

(base) azaz@azaz:~/Desktop/C_project/Lucky_Winner$ gcc lucky_winner.c
(base) azaz@azaz:~/Desktop/C_project/Lucky_Winner$ ./a.out
Total people in the list=10
People in the list are
1. azaz mohammad
2. Tanweer kamal
3. wahid raza
4. irfan bhai
5. safwan bhai
6. Aasif ali
7. shohel akhtar�
8. Arshad ali
9. muktar sir
10. azmat ali

But Todays Lucky Winner is
3. wahid raza

(base) azaz@azaz:~/Desktop/C_project/Lucky_Winner$ ./a.out
Total people in the list=10
People in the list are
1. azaz mohammad
2. Tanweer kamal
3. wahid raza
4. irfan bhai
5. safwan bhai
6. Aasif ali
7. shohel akhtar�
8. Arshad ali
9. muktar sir
10. azmat ali

But Todays Lucky Winner is
10. azmat ali

