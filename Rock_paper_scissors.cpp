#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

class gm{
  private:
      int cchoice,pchoice,pscr,cscr,i = 0;
  public:
      void game(){
          srand(time(NULL));
          while(i < 5){
              cout<<"\nPress 1 for Rock, 2 for Paper and 3 for Scissors ."<<endl;
              cin>>pchoice;
              cchoice = rand() % 3 + 1;
              if(pchoice == 1){
                  if(cchoice == 1){
                      cout<<"\nDraw "<<cchoice;
                      i++;
                  }
                  if(cchoice == 2){
                      cout<<"\nComputer Wins !!! "<<cchoice;
                      ++cscr;
                      i++;
                  }
                  if(cchoice == 3){
                      cout<<"\nYou Win !!! "<<cchoice;
                      ++pscr;
                      i++;
                  }
              }
              else if(pchoice == 2){
                  if(cchoice == 1){
                      cout<<"\nYou Win !!! "<<cchoice;
                      ++pscr;
                      i++;
                  }
                  if(cchoice == 2){
                      cout<<"\nDraw !!! "<<cchoice;
                      i++;
                  }
                  if(cchoice == 3){
                      cout<<"\nComputer Wins !!! "<<cchoice;
                      ++cscr;
                      i++;
                  }
              }
              else if(pchoice == 3){
                  if(cchoice == 1){
                      cout<<"\nComputer Wins !!! "<<cchoice;
                      ++cscr;
                      i++;
                  }
                  if(cchoice == 2){
                      cout<<"\nYou Win !!! "<<cchoice;
                      ++pscr;
                      i++;
                  }
                  if(cchoice == 3){
                      cout<<"\nDraw !!! "<<cchoice;
                      i++;
                  }
              }
              else{
                  cout<<"\nINVALID INPUT !!!";
              }
          }
      }

      void score(){
          if((pscr == cscr)){
              cout<<"\nDraw match !!!\n";
          }
          if(cscr > pscr){
              cout<<"\nComputer Wins !!! - score <"<<cscr<<">\n";
          }
          if(pscr > cscr){
              cout<<"\nYou Win !!! - score <"<<pscr<<">\n";
          }
      }
};

int main(){
    cout<<"\tRoCk - pAPeR - ScIsSoRs gAmE"<<endl;
    gm g;
    g.game();
    cout<<"\n";
    g.score();
    return 0;
}
