#include <stdio.h>
  2 #include <stdlib.h>
  3 #include <netinet/in.h>
  4 #include <sys/types.h>
  5 #include <string.h>
  6 #include <strings.h>
  7 #include <sys/socket.h>
  8 #include "function2.h"
  9 
 10 int l = 0;
 11 int j;
 12 int i;
 13 int put(char* key, char* value, char* res){
 14         /*
 15         if(strlen(value)=NULL){
 16                 strcpy(res,"keinen Value eingegeben. Schluessel wurde nicht gespeichert");
 17                         return 0;
 18         }
 19 
 20         */
 21 
 22         for(int i=0; i<l; i++){
 23                 if(strcmp(key, daten[i].key)==0){
 24                         strcpy(res, daten[i].value);
 25                         strcpy(daten[i].value, value);
 26                         return 0;
 27                 }
 28         }
 29         for(int j=0; j<l; j++){
 30                 if(daten[j].delFlag == 1){
 31                         strcpy(daten[j].key, key);
 32                         strcpy(daten[j].value, value);
 33                         strcpy(res, "eingefuegt\n");
 34                         daten[j].delFlag = 0;
 35                         return 0;
 36                 }
 37         }
 38 
 39         if(i<K){
 40                 strcpy(daten[l].key, key);
 41                 strcpy(daten[l].value, value);
 42                 strcpy(res, "eingefuegt\n");
 43                 i++;
 44                 return 0;
 45         }
 46         return printf("Kein Platz mehr vorhanden");
 47 }

   int get(char* key, char* res){
 50         for(int i=0; i<K; i++){
 51                 if(strcmp(daten[i].key, key)== 0 && daten[i].delFlag != 1){
 52                         strcpy(res, daten[i].value);
 53                         return 0;
 54                 }
 55         }
 56         strcpy(res, "key ist nicht vorhanden\n");
 57         return printf("Key %s ist nicht vorhanden\n", key);
 58 }
 59 
 60 int del(char*key, char *res){
 61         for(int i=0; i<K; i++){
 62                 if(strcmp(daten[i].key, key)==0){
 63                         daten[i].delFlag = 1;
 64                         strcpy(res, daten[i].value);
 65                 }
 66         }
 67         strcpy(res,"key ist nicht vorhanden\n");
 68         return printf(" Key %s ist nicht vorhanden\n", key);
 69 }


































