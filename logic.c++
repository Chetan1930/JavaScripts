
// This is the code in C++

// #include<bits/stdc++.h>
// using namespace std;

// // all moves to win

// // 1. stone > scissors
// // 2. paper > stone
// // 3. scissors > paper

// int checkwhowins(string &S1, string &S2){

//     if(S1=="Stone" && S2=="Paper"){
//         return 2;
//     }
//     else if(S1=="Stone" && S2=="Scissors"){
//         return 1;
//     }
//     else if(S1=="Paper" && S2=="Scissors" ){
//             return 2;
//     }
//     else if( S1=="Paper" && S2=="Stone"){
//         return 1;
//     }
//     else if(S1=="Scissors" && S2=="Stone"){
//         return 2;
//     }
//     else if(S1=="Scissors" && S2=="Paper"){
//         return 1;
//     }

//     else return 0;
//     }

// string gethchoice(){
//     string st;
//     cout<<"Enter you choice now: ";
//     cin>>st;

//     return st;

// }

// string getpchoice(){
//     int x=rand();
//     int temp=x%3;
//     if(temp==0){
//         cout<<"So choice of Pc is : Stone"<<endl;
//         return "Stone";

//     }
//     else if(temp==1){
//         cout<<"So choice of Pc is :Paper"<<endl;
//         return "Paper";
//     }
//     else{
//         cout<<"So choice of Pc is : Scissors"<<endl;
//         return "Scissors";
//     }

// }

// int main(){

//     int human_score=0;
//     int pc_score=0;

//     while(human_score<5 && pc_score<5){
//         string hum=gethchoice();
//         string pc=getpchoice();
//         int temp=checkwhowins(hum,pc);
//         if(temp==1){
//             human_score++;
//         }
//         else if(temp==2){
//             pc_score++;
//         }
//         cout<<"The Present Score is : "<<human_score<<"  "<<pc_score<<endl;
//     }

//     if(pc_score>human_score){
//         cout<<"Computer Wins"<<endl;
//     }
//     else cout<<"Congrats! you win the Game!!"<<endl;

//     return 0;
// }

// this is the code in Java Script

// All moves to win:
// 1. Stone > Scissors
// 2. Paper > Stone
// 3. Scissors > Paper

function checkWhoWins(choice1, choice2)
{
    if (choice1 == = "Stone" &&choice2 == = "Paper")
    {
        return 2;
    }
    else if (choice1 == = "Stone" &&choice2 == = "Scissors")
    {
        return 1;
    }
    else if (choice1 == = "Paper" &&choice2 == = "Scissors")
    {
        return 2;
    }
    else if (choice1 == = "Paper" &&choice2 == = "Stone")
    {
        return 1;
    }
    else if (choice1 == = "Scissors" &&choice2 == = "Stone")
    {
        return 2;
    }
    else if (choice1 == = "Scissors" &&choice2 == = "Paper")
    {
        return 1;
    }
    else
    {
        return 0; // It's a draw
    }
}

function getHumanChoice()
{
    let choice = prompt("Enter your choice (Stone, Paper, or Scissors):");
    return choice;
}

function getPcChoice()
{
    const choices = [ "Stone", "Paper", "Scissors" ];
    let randomIndex = Math.floor(Math.random() * 3);
    let pcChoice = choices[randomIndex];
    console.log(`So choice of PC is : $ { pcChoice }`);
    return pcChoice;
}

function main()
{
    let humanScore = 0;
    let pcScore = 0;

    while (humanScore < 5 && pcScore < 5)
    {
        let human = getHumanChoice();
        let pc = getPcChoice();
        let result = checkWhoWins(human, pc);

        if (result == = 1)
        {
            humanScore++;
        }
        else if (result == = 2)
        {
            pcScore++;
        }

        console.log(`The Present Score is : Human ${humanScore} - PC $ { pcScore }`);
    }

    if (pcScore > humanScore)
    {
        console.log("Computer Wins");
    }
    else
    {
        console.log("Congrats! You win the Game!!");
    }
}

// Run the game
main();
