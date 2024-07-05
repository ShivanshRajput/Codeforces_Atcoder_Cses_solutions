/* 
 * Design a browser history that contains 
 *  1. constructor - browser(homepage);
 *  2. function - visit(url)
 *  3. function - back(steps)
 *  4. function - forward(steps) 
 *
*/

#include<iostream>
using namespace std;

class browser{
    public:
        string data;
        browser* next;
        browser* prev;
    public:
        browser(string s){
            this->data = s;
        }

};