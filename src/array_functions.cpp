/*
 * functionstocomplete.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: keith
 */

//============================================================================
//	TODO add necessary includes here
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "constants.h"
#include "utilities.h"
#include "array_functions.h"
using namespace std;
using namespace constants;
//============================================================================

//============================================================================
//	stuff you will need
//============================================================================
//TODO define a structure to track words and number of times they occur

struct info_thing{
	string element="";
	int num=0;

};

//TODO add a global array of entry structs (global to this file)

struct info_thing arrayofinfothings[MAX_WORDS];

//TODO add variable to keep track of next available slot in array

int len_array=0;

//TODO define all functions in header file


//TODO look in utilities.h for useful functions, particularly strip_unwanted_chars!
//zero out array that tracks words and their occurrences
void clearArray(){
	for (int i=0;i<len_array;i++){
		arrayofinfothings[i].element="";
		arrayofinfothings[1].num=0;
		}
	}
//how many unique words are in array
int getArraySize(){

	return len_array;
}

//get data at a particular location
std::string getArrayWordAt(int i){
	return arrayofinfothings[i].element;
}
int getArrayWord_NumbOccur_At(int i){
	return arrayofinfothings[i].num;
}

/*loop through whole file, one line at a time
 * call processLine on each line
 * returns false: myfstream is not open
 *         true: otherwise*/
bool processFile(std::fstream &myfstream){

	return true;
}

/*take 1 line and extract all the tokens from it
feed each token to processToken for recording*/
void processLine(std::string &myString){
	stringstream ss(myString);
	string tempToken;
	while(getline(ss,tempToken, CHAR_TO_SEARCH_FOR)){
		processToken(tempToken);
	}
}

/*Keep track of how many times each token seen*/
void processToken(std::string &token){

}

/*if you are debugging the file must be in the project parent directory
  in this case Project2 with the .project and .cProject files*/
bool openFile(std::fstream& myfile, const std::string& myFileName,
	std::ios_base::openmode mode)
{
	myfile.open(myFileName.c_str(), mode);
	return myfile.is_open();
}

/*iff myfile is open then close it*/
void closeFile(std::fstream& myfile){
	if (myfile.is_open()){
		myfile.close();
	}
}

/* serializes all content in myEntryArray to file outputfilename
 * returns  FAIL_FILE_DID_NOT_OPEN if cannot open outputfilename
 * 			FAIL_NO_ARRAY_DATA if there are 0 entries in myEntryArray
 * 			SUCCESS if all data is written and outputfilename closes OK
 * */
int writeArraytoFile(const std::string &outputfilename){
	if(len_array==0){
		return FAIL_NO_ARRAY_DATA;}
	fstream Roach;
	Roach.open(outputfilename.c_str(),ios::out);
	if(!Roach.is_open()){
		return FAIL_FILE_DID_NOT_OPEN;}
	if(Roach.is_open()){
		for(int i=0; i<len_array;i++){
			Roach<<arrayofinfothings[i].element<<" "<<arrayofinfothings[i].num<<endl;
		}
		Roach.close;
		return SUCCESS;
	}
}

/*
 * Sort myEntryArray based on so enum value.
 * You must provide a solution that handles alphabetic sorting (A-Z)
 * The presence of the enum implies a switch statement based on its value
 */
void sortArray(constants::sortOrder so){
	switch(so){
	case 1: if(so==)
	}


}
