                                             
                                             //Guessing the Number
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    cout<<"\t\tWelcome to the Game!"<<endl;
    cout<<"\t\t| GUESS THE NUMBER |"<<endl;
    cout<<"\tYou have to just guess the number between 1 to 100.."<<endl<<endl<<"\t\tGood Luck!"<<endl;

        srand(time(0));
        int random_num=rand()%100+1;
        int playerchoice;
        int count=0;
        
        while(true){
            cout<<"\n\t\tGuess the Number : ";
        cin>>playerchoice;
        if(playerchoice==random_num){
            cout<<"\t\tCongratulations!"<<endl<<"\t\tYou won the game"<<endl;
            if(count==0){
                cout<<"\t\tLucky! Guessed in one single turn"<<endl;
            }
            else {
                cout<<"\n\t\tGuesses took:"<<count<<endl;
            }
            cout<<"\n\t\t*Thanks for Playing*"<<endl;
            break;
        }
        else{
            cout<<"\t\tNope!"<<endl;
            if(playerchoice>random_num){
                cout<<"\t\tGuess is High!"<<endl;
                
            }
                else {
                    cout<<"\t\tGuess is low!"<<endl;
                    
                }
                count++;
            }
            
        }
        return 0;
}
