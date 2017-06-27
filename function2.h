#define K 1024
  2 
  3 struct data{
  4         char key[30];
  5         char value[30];
  6 
  7 int delFlag;
  8 };
  9 
 10 struct data* daten;
 11 
 12 int put(char* key, char* value, char* res);
 13 int get(char* key, char* res);
 14 int del(char* key, char* res);
 15 
