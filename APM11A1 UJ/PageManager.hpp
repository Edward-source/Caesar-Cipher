#pragma once
#include "Page.hpp"

class PageManager
{ 
   public:
	   /* This method must read the content of the specified file into a Page object and return this Page.*/
	   Page loadPageFromFile(std::string fileName);
	   /* This method must write the content of a Page object into the specified file. */
	   void writePageToFile(std::string fileName, Page page);
};

