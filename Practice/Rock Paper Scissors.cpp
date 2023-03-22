# include <iostream>
# include <string>
using namespace std;
string rps (const string& p1, const string& p2);

int main(){
    string p1, p2, result;
    cout << "First player: ";
    cin >> p1;
    cout << "Second player: ";
    cin >> p2;
    cout << rps(p1, p2) << endl;
}

string rps(const string& p1, const string& p2)
{
    if ((p1 == "paper" && p2 == "rock") || (p1 == "scissors" && p2 == "paper") || (p1 == "rock" && p2 == "scissors"))
        return "Player 1 won!";
    else if (p1 == p2)
        return "Draw!";
    else return "Player 2 won!";
}
