/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 18:59
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        // Do something with the line
        int l = line.size();
        int t = l/2;
        
        for(int i = 0; i < t; i++) {
            if(line[(i+t+1)] == '0')
               cout << line[i];
            else
                printf("%c", line[i]-32);
        }
        cout << '\n';
    }
    
    return 0;
}