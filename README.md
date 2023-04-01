# Caesar-Cipher

## Background

Program that will read a file, encrypt the content of the file, and then create a new file that contains the encrypted content.
The program will make use of the following classes:
Page – This class will be used to represent the content of the file that was read.
PageManager – This class will be used to read page content from and to a file.
APM11A1Encryptor – This class will be used to encrypt the content of a file using the Caesar-Cipher method.
AdvancedAPM11A1Encryptor – This class will be used to encrypt the content of a file using the Exclusive-OR method.

# Back-End for Page.cpp

## Private Members 

| Data Type       | Name             | Description                                                    |
-------------------------------------------------------------------------------------------------------     
| string          | cSentences[]     | This member will store the sentences on the page. You may assume that a record will never have more than 34 sentences.
--------------------------------------------------------------------------------------------------------
| int             | cSentenceCounter | This member will store the number of sentences on the page.     |
--------------------------------------------------------------------------------------------------------

## Public Methods 

Return Type        |       Method Signature            |      Description
--------------------------------------------------------------------------------------------------------------------------------------------------------
                   |       Page ()                     |      A default constructor that will initialise cSentenceCounter to zero.
------------------------------------------------------------------------------------------------------------------------------------------------------                   
void               |       addSentence(string sentence)|     This method will place add a sentence to the Page. You must make use of the cSentences[] array.
-----------------------------------------------------------------------------------------------------------------------------------------------------
string             |       getSentenceAt(int index)    |     This method will retrieve a sentence.
------------------------------------------------------------------------------------------------------------------------------------------------------
int                |       getNumberOfSentences()      |     This method will return the number of sentences there are on the Page.
--------------------------------------------------------------------------------------------------------------------------------------------------------

