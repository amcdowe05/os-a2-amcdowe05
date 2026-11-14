#ifndef PINFO_H
#define PINFO_H

struct pinfo {
   int pid;
   int state;
   int level;
   int runticks;
   int nsched;
   int ctime;
   char name[16];
};

#endif
