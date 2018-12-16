/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <String.h>
#include <stdio.h>
#include <string.h>

/*
int main(){
    String string;
    string = initializeString(string);
    string.initialize(string);
}*/

 String initialize(String string){
     string.data = malloc(0);
     string.size = 0;
 }
    
    String initializeString(String string, char* toSet){
    string.data = malloc(sizeof(*toSet));
    string.size = sizeof(*toSet);
}

void setString(String toSet, char *toChange){
    toSet.data = realloc(sizeof(*toChange));
    strncpy(toSet.data, toChange);
}

char *getString(String toGet){
    if(toGet.size == 0){
        return NULL;
    } else {
        return toGet.data;   
    }
}
    
int getSize(String toGet){
    return toGet.size;
}

