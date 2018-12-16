/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   String.h
 * Author: Brandon
 *
 * Created on December 15, 2018, 3:34 PM
 */

#ifndef STRING_H
#define STRING_H

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct String{
        char* data;
        int size;
        String (*initialize)(String string) = initializeString;
        String (*initialize2)(String string, char* toSet) = initializeString;
    };

    String initialize(String string);
    
    String initializeString(String string, char* toSet);

    void setString(String toSet, char* toChange);
    
    void setSize(String toCheck);
    
    char *getString(String toGet);
    
    int getSize(String toGet);
    
    
    
#ifdef __cplusplus
}
#endif

#endif /* STRING_H */

