/*WHCIH COMMAND IS USED TO ASSIGN ONLY READ PERMISSION TO ALL THREE CATEGORIES OF FILE NOTTE
-note we do know that if we have to provide permission to some file or directory then we uses chmod command
WHICH MEANS TO CHANGE MODE,
CHMOD HAS 9 POSITIONS _________ 
first 3 are user whcih is denoted by u ,
next 3 are group'
next 3 are others
why 3 in each? as first we can write it as 
rw means read write
rwx means read write execute
depeding on the space it is written it is
meant by whom it is being given 
- means take permission back
+ means give permission
example   ugo=r   means u g o all 3 get read
u+r means user can read g-w means group
cannot write
these numbers can be represented in octal
notation read=4 ,write=2 ,execute=1
wr=6,rwx=7,rx=5,xw=3
ugo=rwx=777
user group and others
the permissions are read write or execute

lseek is a system call is used to move read 
write head
by defauly it is on 0 index ,the rw head
to move it we use lseek
l(n,10,seek_cur)  n is file descriptor
seek cur is meant to seek current and move
by that number 
l(n,5,seek_set)  takes the rwhead on that 
certain index given ,here 5 