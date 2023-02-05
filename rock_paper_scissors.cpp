#include <iostream>
#include <ctime>

int main() {
  char answer;
  do{
  std::cout << "********************\nRock, Paper or Scissors:\n";
  std::string choice;
  std::cin>>choice;
  std::cout<<"Player:"<<choice<<'\n';

  srand(time(0));
  int randNum=rand()%3+1;
  switch (randNum){
    case 1:std::cout<<"Computer:Rock"<<'\n';
    if(choice=="Rock"){
      std::cout<<"Tie!\n";
    }
    else if(choice=="Paper"){
      std::cout<<"You win!\n";
    }
    else{
      std::cout<<"You lose!\n";
    }
    break;
    
    case 2:std::cout<<"Computer:Paper"<<'\n';
    if(choice=="Rock"){
      std::cout<<"You lose!\n";
    }
    else if(choice=="Paper"){
      std::cout<<"Tie!\n";
    }
    else{
      std::cout<<"You win!\n";
    }
    break;
    
    case 3:std::cout<<"Computer:Sissors"<<'\n';
    if(choice=="Rock"){
      std::cout<<"You win!\n";
    }
    else if(choice=="Paper"){
      std::cout<<"You lose!\n";
    }
    else{
      std::cout<<"Tie!\n";
    }
    break;
  }
  std::cout<<"********************\nPlay again? Y/N:";
  std::cin>>answer;
  if(answer=='N'){std::cout<<"See you next time!:)\n";}
    }while(answer!='N');
}
