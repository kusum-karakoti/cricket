 struct Player {
 char name[50];
 int runs;
 int wickets;
 int matches;
 };
 void addPlayer() {
 struct Player p;
 printf("Enter Name: ");
 gets(p.name);
 printf("Enter Runs: ");
 scanf("%d", &p.runs;);
 printf("Enter Wickets: ");
 scanf("%d", &p.wickets;);
 printf("Enter Matches: ");
 scanf("%d", &p.matches;);
 saveToFile(p);
 }