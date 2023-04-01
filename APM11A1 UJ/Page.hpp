#pragma once
#include<string>

#define NUM_SENTENCES 35 //  You may assume that a record will never have more than 34 sentences.

class Page
{
  public:
	  /* A default constructor that will initialise cSentenceCounter to zero. */
	  Page(); 

	  /* This method will place add a sentence to the Page.You must make use of the cSentences[] array.*/
	  void addSentence(std::string sentence); 

	  /*This method will retrieve a sentence.*/
	  std::string getSentenceAt(int index);

	  /* This method will return the number of sentences there are on the Page. */
	  int getNumberOfSentences();

  public:
	  /*
	  * This member will store the sentences on the page. 
	  * You may assume that a record will never have more than 34 sentences.
	  */
	  std::string cSentences[NUM_SENTENCES];
	  /* This member will store the number of sentences on the page. */
	  int cSentenceCounter = 0;
	  

};

