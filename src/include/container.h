#ifndef _CONTAINER_H
#define _CONTAINER_H

typedef struct namespaces{
	int mnt ;
	int pid ;
	int net ;
	int ipc ;
	int uts ;
	int usr ;
	int cgroup ;
} namespace_info;

typedef struct isolproc_info{
	int 		argc;
	char** 		argv;

	char		root[7];
	char 		hostname[15];
	
	int 		pipefd[2];

	int 		pid;
	namespace_info  nspace;
} isolproc_info;

#endif