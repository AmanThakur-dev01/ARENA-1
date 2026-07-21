#include<iostream>
#include <string>
int main(){
    std:: string NAME;
    int AGE;
    int SCORE;
    std::string RANK ;
    std::string status;
    std:: string userchoice;
std::cout<<"WHATS YOUR NAME?"<<std::endl;
std::getline(std::cin,NAME);
std::cout<<"WHATS YOUR AGE?"<<std::endl;
std::cin>>AGE;
 if(AGE>=18){
    status="SENIOR MAGES ";
 }else {
    status="JUNIOR MAGES";
 }
    std::cout<<"do you want to enter arena or not (yes/no);"<<std::endl;
    std::cin>>userchoice;
if(userchoice=="yes"){
std::cout<<"GOOD!! PLEASE ENTER YOUR SCORE!!"<<std::endl;
std::cin>>SCORE;
if(SCORE>=10000){
   RANK="SSR";}
 else if(SCORE>=5000){
 RANK="SS";}
 else if(SCORE>=1000){
    RANK="S";}
 else if(SCORE>=800){
   RANK="A";}
 else if(SCORE<=500){
    RANK="B";}
 else if(SCORE>=200){
    RANK="C";}
 else if(SCORE>=100){
    RANK="D";}
 else if(SCORE>=10){
    RANK="YOU ARE USELESS!";
 }
}else{
   std::cout<<"no worries!!buddy for system add your score"<<std::endl;
  std::cin>>SCORE;}
while(SCORE<=200){
    std::cout<<"YOUR SCORE IS TOO LOW YOU NEED MORE SCORE TO ENTER IN ARENA!!"<<std::endl;
std::cin>>SCORE;   
 }
 std::cout<<"do you want to see your profile (yes/no:)"<<std::endl;
 std::cin>>userchoice;  
 if(userchoice=="yes"){
    std::cout<<"-----profile of the player------"<<std::endl;
    std::cout<<"PLAYER:"<<NAME<<std::endl;
    std::cout<<"AGE:"<<AGE<<std::endl;
    std::cout<<"YOUR STATUS:"<<status<<std::endl;
    std::cout<<"RANK :"<<RANK<<std::endl; 
 }
 else{
    std::cout<<"ok!!"<<std::endl;
 }
std::cin.ignore();
return 0;
}

