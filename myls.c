#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<dirent.h>
#include<limits.h>

int main(int argc, char* argv[]){
char cwd[PATH_MAX];
DIR *in_dir;
getcwd(cwd, sizeof(cwd));
struct dirent *in_file;
if(argc==1){
	in_dir=opendir(cwd);
}
else{
	in_dir=opendir(argv[1]);
}
while(( in_file=readdir(in_dir))){
char str2[]="..";
char str1[]=".";
	if (strcmp(in_file->d_name, str2) && strcmp(in_file->d_name, str1)){
		if(in_file->d_name[0]!=46){
		     printf("%s\n" , in_file->d_name);
		}
	}
}
closedir(in_dir);
}


