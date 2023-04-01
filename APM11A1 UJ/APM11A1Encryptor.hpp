#pragma once
#include "Page.hpp"

class APM11A1Encryptor
{
    public:
        /* This method must encrypt the received character by 
        using the key class member and the Caesar Cipher encryption technique. */
        char encryptACharacter(char character);
        /*
        * This method will encrypt the content of the 
         received page parameter by making use of the encryptACharacter() method.
        */
        Page encryptPage(Page page);
        /*
        * This method will set the value of the key data member. (You may NOT change the name of the input parameter)
        */
        void setKey(int key);

     protected:
         /* This member will store the key that will be used during the encryption process. */
         int Key;
};

