#include <iostream>    
#include <algorithm>     
#include <string>     
#include <sstream>      

using namespace std;

int main() {
  string line, word;
  
  while (getline(cin, line)) {
 
    transform(line.begin(), line.end(), line.begin(), ::tolower);
    
    stringstream split(line);
    
    split >> word;
    char comp = word[0], last = '0';
    int streak = 0, total = 0;
    
  
    while (split >> word) {
      if (word[0] == comp && word[0] != last) {
        total++;
        last = word[0];
        
      } else if (word[0] != comp) {
        comp = word[0];
        last = '5';
      }
    }
    
    cout << total << endl;
  }
}
