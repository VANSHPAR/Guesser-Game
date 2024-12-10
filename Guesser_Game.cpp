#include <iostream> //Game for n players
#include <vector>
using namespace std;
int n;
vector<int> v;
class Guesser{
   int guessedno;

   public:
   int takenum(){
    int x;
    cout<<"Give the number for guesser"<<endl;
    cin>>x;
    guessedno=x;
    return guessedno;
   }
};

class Player{
    int playernum;

    public:
    int takeplayerip(int num){
       int x;
       cout<<"Give the number for player "<<num<<endl;
       cin>>x;
       playernum=x;
        return playernum;  
    }
};

class Umpire{
    public:
    int g;
    void Getnumguess(){
       Guesser g1;
       g=g1.takenum();
       cout<<"Number guessed by Guesser: "<<g<<endl;
    }
    void Getnumplayer(){
      Player p;
        for(int i=1;i<=n;i++){
         v[i]=p.takeplayerip(i);
        }
    }
    void Printresult(){
     int c=0;
     for(int i=1;i<=n;i++){
      if(g==v[i]){
         c++;
         cout<<"Player "<<i<<" won the Game"<<endl;
      }
     }
     if(c==0) cout<<"All players lost the Game "<<endl;
    }
};
int main(){
  cout<<"------Let's start the Game------"<<endl;
  cout<<"Enter the number of players: "<<endl;
  cin>>n;
  if(n<=0){
   cout<<"Please enter the valid number of players "<<endl;
   cout<<"------end the Game------";
   exit(0);
  }
  v.resize(n+1);
  Umpire u;
  u.Getnumguess();
  u.Getnumplayer();
  u.Printresult();
  cout<<"------end the Game------";
}