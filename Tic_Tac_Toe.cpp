#include<iostream>
using namespace std;
char board[3][3]={'1','2','3','4','5','6','7','8','9'};
void show_board();
void get_x_player_choice();
void get_o_player_choice();
void player_vs_player();
void check_winner();
int main(){
	show_board();
	get_x_player_choice();
	get_o_player_choice();
	return 0;
}
void show_board(){
	for(int i=0 ; i<3 ; i++){
		cout<<" | ";
		for(int j=0 ; j<3 ; j++){
			cout<<board[i][j]<<" | ";
		}
		if(i<2){
		cout<<endl;
		cout<<"_______________";
		cout<<endl<<endl;
	}
	}
	cout<<endl;
}
void get_x_player_choice(){
	int choice;
	while(true){
		cout<<"Enter Your Choice (1-9) : ";
		cin>>choice;
		choice--;
		if(choice<0 && choice>8){
			cout<<"Please Enter Choice (1-9).";
		}
		else if(choice==0){
			if(board[0][0]!='X' || board[0][0]!='O'){
			board[0][0]='X';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==1){
			if(board[0][1]!='X' && board[0][1]!='O'){
			board[0][1]='X';
			break;
		}
		else{
			cout<<"Please select empty place.";	
		}
		}
		else if(choice==2){
			if(board[0][2]!='X' && board[0][2]!='O'){
			board[0][2]='X';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==3){
			if(board[1][0]!='X' && board[1][0]!='O'){
			board[1][0]='X';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==4){
			if(board[1][1]!='X' && board[1][1]!='O'){
			board[1][1]='X';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==5){
			if(board[1][2]!='X' && board[1][2]!='O'){
			board[1][2]='X';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==6){
			if(board[2][0]!='X' && board[2][0]!='O'){
			board[2][0]='X';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==7){
			if(board[2][1]!='X' && board[2][1]!='O'){
			board[2][1]='X';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==8){
			if(board[2][2]!='X' && board[2][2]!='O'){
			board[2][2]='X';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
	}
	show_board();
}
void get_o_player_choice(){
	int choice;
	while(true){
		cout<<"Enter Your Choice (1-9) : ";
		cin>>choice;
		choice--;
		if(choice<0 && choice>8){
			cout<<"Please Enter Choice (1-9).";
		}
		else if(choice==0){
			if(board[0][0]!='X' && board[0][0]!='O'){
			board[0][0]='O';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==1){
			if(board[0][1]!='X' && board[0][1]!='O'){
			board[0][1]='O';
			break;
		}
		else{
			cout<<"Please select empty place.";	
		}
		}
		else if(choice==2){
			if(board[0][2]!='X' && board[0][2]!='O'){
			board[0][2]='O';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==3){
			if(board[1][0]!='X' && board[1][0]!='O'){
			board[1][0]='O';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==4){
			if(board[1][1]!='X' && board[1][1]!='O'){
			board[1][1]='O';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==5){
			if(board[1][2]!='X' && board[1][2]!='O'){
			board[1][2]='O';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==6){
			if(board[2][0]!='X' && board[2][0]!='O'){
			board[2][0]='O';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==7){
			if(board[2][1]!='X' && board[2][1]!='O'){
			board[2][1]='O';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
		else if(choice==8){
			if(board[2][2]!='X' && board[2][2]!='O'){
			board[2][2]='O';
			break;
		}
		else{
			cout<<"Please select empty place.";
		}
		}
	}
	show_board();
}
