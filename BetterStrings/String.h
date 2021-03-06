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
        void (*setString)(String toSet, char *toChange) = setString;
        void (*setSize)(String toCheck) = setSize;
        char *(*getString)(String toGet) = getString;
        int (*getSize)(String toGet) = getSize;
    };

    String initialize(String string);
    
    String initializeString(String string, char* toSet);

    void setString(String toSet, char* toChange);
    
    void setSize(String toCheck);
    
    char *getString(String toGet);
    
    int getSize(String toGet);
    /**
     * Adds two strings together
     * @param one, the first string to be added and the destination of the new string
     * @param two,  the second string to be added
     * @return A new string stored in parameter one
     */
    String addStrings(String one, String two);
    
    /**
     * Given two character arrays, creates a new string
     * @param one, the first character array
     * @param two, the second character array
     * @return a String struct containing the two arrays combined
     */
    String addArrays(char *one, char *two);
    
    int toInteger(String toConvert);
    
    double toDouble(String toConvert);
    
    char charAt(String string, int index);
    
    /**
     * Returns the substring within a string (inclusive)
     * @param string, the string that the substring will come from
     * @param start, the index where the substring starts (inclusive)
     * @param end, the index where the substring ends (inclusive)
     * @return String, a substring from the entered string
     */
    String subString(String string, int start, int end);
    
#ifdef __cplusplus
}
#endif

#endif /* STRING_H */

