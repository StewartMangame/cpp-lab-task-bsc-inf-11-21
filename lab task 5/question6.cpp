#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>

using namespace std;
int countVowels(const string& text){
  int count = 0;
  for (char c : text)
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
      count++;
    }
    return count;
}
int numberOfWords(const string& word){
  istringstream iss(word);
  string file;
  int number = 0;
  while (iss >> file){
    number++;
  }
  return number;
}
string reverse(const string& textf){
  string reversedText;
  for (int i =textf.size()-1; i >=0; --i){
    reversedText += textf[i];
  }
  return reversedText;
}
string capitalizationOfSecondLetter(const string& textd){
  istringstream iss(textd);
  string ward, results;
  while (iss >> ward){
    if(ward.length() > 1){
      ward[1] = toupper(ward[1]);
    }
    results += ward + "  ";
  }
return results;
}
int main()
{
  string fileData;
  ofstream myfile("write.txt");
  if (myfile.is_open())
  {
    myfile << "This is the Advanced Computer Programming Module \n";
    myfile.close();
    }
    else {
      cout << "unable to create a file";
    }
      ifstream my1file("write.txt");
      if (my1file.is_open());{
     
      getline(my1file, fileData);
      cout << fileData<<'\n';
      }
      my1file.close();

      int vowels = countVowels(fileData);
      cout << "number of vowels in the text is :" << vowels << '\n';

      int wordcount = numberOfWords(fileData);
      cout << "Number of words in the write file are :" <<wordcount << '\n';

      string reservedTest =reverse(fileData);
      cout << "Reserved text: "<< reservedTest << '\n';

      string capitalizedText = capitalizationOfSecondLetter(fileData);
      cout << capitalizedText <<'\n';

      

        return 0;
    }