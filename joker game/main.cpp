#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <stdlib.h> 
using namespace std;


int main()
{
    int i;
    int j;
    int a;
    int c=0;
    int b;
    int guessnum[5];
    int jokerguess;
    int Luckynum[5];
    int joker = rand() % 20+ 1;
    int n= sizeof(guessnum)/sizeof(guessnum[0]);
    cout<<"The lottery!"<<endl;
    for ( i = 0; i < 5; i++)
    {
        Luckynum[i]=rand() % 45 + 1;
    }
    
    for(j=1; j<=37; j=j+9){
    for(i=j; i<=j+8; i++){
        cout<<i<<" ";
    }
    cout<<" "<<endl;
    }
    cout<<"Pick 5 number"<<endl;
    for(a=0; a<=4; a++){
        scanf("%d", &guessnum[a]);
    }
    cout<<"Pick a joker(between 1:20)"<<endl;
    scanf("%d", &jokerguess);
    sort(guessnum, guessnum + n);
    cout<<"lucky numbers are: "<<Luckynum[0]<<Luckynum[1]<<Luckynum[2]<<Luckynum[3]<<Luckynum[4]<<endl;
    for(b=0; b<5; b++){
        if(guessnum[b] == Luckynum[b]){
            c++;
        }
    }
    switch(c){
    case 5:
    if(jokerguess==joker ){
    cout<<"you won"<<endl;
    cout<<"WOW that's one in 3 BILLION CHANCHES!!!";
    }
    else{
        cout<<"you found 5 numbers but not the joker";
    }
    break;
    case 4:
        if(jokerguess==joker ){
        cout<<"you found 4 numbers and the joker"<<endl;
        }
        else{
        cout<<"you found 4 numbers but not the joker";
        }
    break;
    case 3:
        if(jokerguess==joker ){
        cout<<"you found 3 numbers and the joker"<<endl;
        }
        else{
        cout<<"you found 3 numbers but not the joker";
        }
    break;
    case 2:
        if(jokerguess==joker ){
        cout<<"you found 2 numbers and the joker"<<endl;
        }
        else{
        cout<<"you found 2 numbers but not the joker";
        }
    break;
    case 1:
        if(jokerguess==joker ){
        cout<<"you found 1 numbers and the joker"<<endl;
        }
        else{
        cout<<"you found 1 numbers but not the joker";
        }
    break;
    case 0:
        if(jokerguess==joker ){
        cout<<"you found 0 numbers but you found the joker"<<endl;
        }
        else{
        cout<<"you didnt find anything...Looser";
        }
    break;
    }
return 0;
}
