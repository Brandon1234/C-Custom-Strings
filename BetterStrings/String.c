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

void setSize(String toCheck){
    if(toCheck != NULL){
        char *temp = toCheck.getString(toCheck);
        int newSize = sizeof(temp);
        
        toCheck.size = newSize;
        
    }
}

String addArrays(char *one, char *two){
    return NULL;
}
    
int toInteger(String toConvert){
    int toReturn;
    char *ptr;
    toReturn = strtol(toConvert.data, &ptr, 10);
    
    return toReturn;
}

double toDouble(String toConvert){
    int toReturn;
    char *ptr;
    toReturn = strtod(toConvert.data, &ptr);
    
    return toReturn;
}

char charAt(String string, int index){
    char toReturn;
    char *ptr = string.data;
    for(int i = 0; i < index; i ++){
        ptr++;
    }
    
    toReturn = *ptr;
    
    return toReturn;
}

String subString(String string, int start, int end){
    char *ptr = string.data;
    int i = 0;
    char subString[end-start];
    for(i = 0; i <= start; i ++){
        *ptr++;
    }
    
    for(int j = i; j <= end; j ++){
        subString[j - start] = *ptr;
    }
    
    String toReturn;
    toReturn.initialize2(subString);
    
    return toReturn;
    
}
