#include <stdio.h>
#include <unistd.h>
#define PAGER "${PAGER:-more}"
#define MAXLINE 1000
/*
 * a.out /etc/passwd
 */
int main(int agc,char **argv) {
	char line[MAXLINE];
	FILE *fpin,*fpout;
	if(agc!=2) {
		perror("arc is error\n");
	}
	fpin=fopen(argv[1],"r");
	fpout=popen(PAGER,"w");
	while(fgets(line,MAXLINE,fpin)!=NULL) {
		if(fputs(line,fpout)==EOF) {
			perror("fputs error");
		}
	}
	pclose(fpout);
	pclose(fpin);


}
