#include <iostream>
#include <cmath>
#include <random>


using namespace std;

string inf_monk(int letter_number);
int check_string(string word);

int main(int argc, char *argv[])
{
    //cout << check_string("hey");
    cout << check_string(argv[1]);
}


string inf_monk(int letter_number){
    string characters = "abcdefghijklmnopqrstuvwxyz ";
    string word_list = "";
    int t = 0;

    random_device rd;
    mt19937 gen( rd()); 
    uniform_int_distribution<> dis( 1, 27);

    for (int n=0; n<letter_number; ++n){
        int randL = dis(gen); 
        word_list += characters[randL];
    }   
    return word_list;
}

int check_string(string word){
    int count = 0;
    string phrase = inf_monk(word.length());
    while (phrase != word){
        for (int i=0; i<=word.length(); i++){
            if (phrase[i] == word[i]){
                phrase[i] = word[i];
                string keeper = phrase;
                phrase = keeper;
            } else {
                phrase = inf_monk(word.length());
            }
        cout << phrase << endl;
        count ++;
        }
    }
    return count;
}
