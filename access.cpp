/*
996230418
ECS153 SECURITY
*/


#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <pwd.h>
#include <grp.h>
#include <sys/stat.h>
#include <string.h>

using namespace std;

string tripper = "-g";
string UID = "0";
struct passwd *name;
struct group *gname;
struct stat file;
bool isgroup = false;


int main (int argc, char *argv[])

{

int index = 1;


// check for correct number of inputs
if (argc < 3)
{
  cout<<"not enough args"<<endl;
  return 1; 
}

if (string(argv[index]).compare(string("-g")) ==0)
{

isgroup = true; 
cout<<"group trip" << endl;
index++;
}

// for individuals

if (!isgroup)
{

name = getpwnam(argv[index]);

if (name == NULL)
{
cout<< "null individual"<<endl;
}

cout<< name->pw_name<<" ";
cout<< name->pw_uid<<endl;

}


// for groups
if (isgroup)
{

gname = getgrnam(argv[index]); 

if (gname == NULL)
{
cout<<"null group name"<<endl;
}




if () // is a name
cout<< gname->gr_name<<" ";

if () // is a ID
cout<< gname->gr_gid<<endl;

}

//check if group UID



// check if directory or file

/*

if directory, then cout proper stuff below

if file, then cout proper stuff below

*/

//printing

// if modify and search print
// if read print
// if write print

cout<< argv[0] << endl;
cout<< argv[1] << endl;
cout<< argv[2] << endl;
}

bool isnumeric (const char *letters)

char *ptr;
ptr = letters;

while (*ptr = '\0')
{
if(isdigit(*ptr))
{
return false;
}
ptr++;
}
