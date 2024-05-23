#include<iostream>
using namespace std;

int main()
{ int trans, Horror, Action, Genaud; //variables for movie genre
int iAt, cAt, aAt, iSt, cSt, aSt, totiAt=0, totcAt=0, totaAt=0, totiSt=0, totcSt=0, totaSt=0; //variables for Horror movies
int sCt, aCt, tCt, sAt, avAt, tAt, sSt, avSt, tSt, totsCt=0, totact=0, tottct=0, totsAt=0, totavAt=0, tottAt=0, totsSt=0, totavSt=0, tottSt=0; // variables forAction
int cCt, fCt, hCt, ccAt, fAt, hAt, ccSt, fSt, hSt, totcCt=0, totfCt=0, tothCt=0, totccAt=0, totfAt=0, tothAt=0, totccSt=0, totfSt=0, tothSt=0; // varaiables for Genaud
int pay, totbill=0, change=0,totbillI=0, totbillC=0, totbillA=0, totbillS=0, totbillAv=0, totbillMk=0,totbillCc=0, totbillFn=0, totbillH=0; //various variables
string age="";//variables for age
 
 cout<<"****************************************************************\n";
 cout<<"*     TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES              *\n";
 cout<<"*                   Quezon City                               *\n";
 cout<<"*       ITE001 - Computer Programming 1                       *\n";
 cout<<"*         1st Semester S.Y. 2020-2021                         *\n";
 cout<<"*                 Final Project                               *\n";
 cout<<"*  Title: A Computerized T.I.P Movie Ticketing Software/System*\n";
 cout<<"*  Memebers: Casapao,    Abegail  - BSIT                      *\n";
 cout<<"*            Espada,     Jonel    - BSIT                      *\n";
 cout<<"*            Pangilinan, Allen    - BSIT                      *\n";
 cout<<"*            Tablon,     Joshua   - BSIT                      *\n";
 cout<<"*            Villarente, Edzel    - BSIT                      *\n";
 cout<<"*Instructor: Mr.Benjamin Gandeza                              *\n";
 cout<<"***************************************************************\n";
 
do{
	cout<<"\n A Computerized T.I.P Movie Ticketing Software/System";
	cout<<"\n        1. Horror (SPG) ";
	cout<<"\n        2. Action (PG)";
	cout<<"\n        3. General Audiences (G)";
 	cout<<"\n    Choose Movie Genre[1-3]:";
	cin>>trans;
	switch(trans) {   
		case 1: { 
			do{
				cout<<"\n         Horror (SPG)";
				//Horror Movies selection
				cout<<"\n      1. Insidious   ";	
				cout<<"\n      2. Conjuring   ";
				cout<<"\n      3. Annabelle   ";
				cout<<"\n     Choose Movie[1-3]:";
				cin>>Horror;
				switch(Horror)
				{	case 1: 
						cout<<"       Enter age category: ";
						cin>>age;	                  
						if (age=="Adult"||age=="adult"){//
							cout<<"       How many Insidious Ticket?";
							cin>>iAt;
							totiAt= totiAt + (iAt * 200); 
							cout<<"Updated Insidious ticket Bill = "<<totiAt <<"\n"; break;
						}else if (age=="Senior"||age=="senior"){
							cout<<"       How many Insidious Ticket?";
							cin>>iSt;
							totiSt= totiSt + (iSt * 150);
							cout<<"updated Insidious s tciket bill = "<<totiSt <<"\n"; break;
						}
					case 2:
						cout<<"       Enter age category: ";
						cin>>age;
						if (age=="Adult"||age=="adult"){
							cout<<"       How many Conjuring Ticket?";
							cin>>cAt; 
							totcAt= totcAt + (cAt * 200); 
							cout<<"Updated Conjuring ticket Bill = "<<totcAt<<"\n"; break;
						}else if (age=="Senior"||age=="senior"){
							cout<<"       How many Conjuring Ticket?";
							cin>>cSt;
							totcSt= totcSt + (cSt * 150);
							cout<<"updated Conjuring tciket bill = "<<totcSt <<"\n"; break;
						}
					case 3: 
						cout<<"       Enter age category: ";
						cin>>age;
						if (age=="Adult"||age=="adult"){
							cout<<"        How many Annabelle Ticket?";
							cin>>aAt;
							totaAt= totaAt + (aAt * 200);
							cout<<"Updated Annabelle ticket Bill = "<<totaAt<<"\n"; break;
						}else if (age=="Senior"||age=="senior"){
							cout<<"       How many Annabelle Ticket?";
							cin>>aSt;
							totaSt= totaSt + (aSt * 150);
							cout<<"updated Annabelle tciket bill = "<<totaSt <<"\n"; break;
						}
				}break; //end of switch Horror
			}while (Horror<=2); //end of dowhile Horror
			
			cout<<"\nThank you please come again!\n\n";
			break;
		} //end of switch case1

		case 2:{ 
			do{
				cout<<"\n         Action";
				//Action Movies selection
				cout<<"\n      1. Spiderman   ";	
				cout<<"\n      2. Avengers   ";
				cout<<"\n      3. Mortal Kombat   ";
				cout<<"\n     Choose Movie[1-3]:";
				cin>>Action;
				switch(Action){ 
					case 1: 
						cout<<"       Enter age category: ";
						cin>>age;
						if (age=="Children"||age=="children"){
							cout<<"        How many Spiderman Ticket?";
							cin>>sCt;
							totsCt= totsCt + (sCt * 200);
							cout<<"Updated Spiderman ticket Bill = "<<totsCt<<"\n"; break;
						}else if (age=="Adult"||age=="adult"){
							cout<<"       How many Spiderman Ticket?";
							cin>>sAt;
							totsAt= totsAt + (sAt * 250);
							cout<<"Updated Spiderman tciket bill = "<<totsAt <<"\n"; break;
						}else if (age=="Senior"||age=="senior"){
							cout<<"        How many Spiderman Ticket?";
							cin>>sSt;
							totsSt= totsSt + (sSt * 150);
							cout<<"Updated Spiderman ticket bill = "<<totsSt<<"\n"; break;
						}
					case 2: cout<<"       Enter age category: ";
						cin>>age;
						if (age=="Children"||age=="children"){
							cout<<"        How many Avengers Ticket?";
							cin>>aCt;
							totact= totact + (aCt * 200);
							cout<<"Updated Avengers ticket Bill = "<<totact<<"\n"; break;
						}else if (age=="Adult"||age=="adult"){
							cout<<"       How many Avengers Ticket?";
							cin>>avAt;
							totaAt= totavAt + (avAt * 250);
							cout<<"Updated Avengers tciket bill = "<<totavAt <<"\n"; break;
						}else if (age=="Senior"||age=="senior"){
							cout<<"        How many Avengers Ticket?";
							cin>>avSt;
							totaSt= totavSt + (avSt * 150);
							cout<<"Updated Avengers ticket bill = "<<totavSt<<"\n"; break;
						}
					case 3:
						cout<<"       Enter age category: ";
						cin>>age;
						if (age=="Children"||age=="children"){
							cout<<"        How many Mortal Kombat Ticket?";
							cin>>tCt;
							tottct= tottct + (tCt * 200);
							cout<<"Updated Mortal Kombat ticket Bill = "<<tottct<<"\n"; break;
						}else if (age=="Adult"||age=="adult"){
							cout<<"       How many Mortal Kombat Ticket?";
							cin>>tAt;
							tottAt= tottAt + (tAt * 250);
							cout<<"Updated Mortal Kombat tciket bill = "<<tottAt <<"\n"; break;
						}else if (age=="Senior"||age=="senior"){
							cout<<"        How many Mortal Kombat Ticket?";
							cin>>tSt;
							tottSt= tottSt + (tSt * 150);
							cout<<"Updated Mortal Kombat ticket bill = "<<tottSt<<"\n"; break;
						}
				}break; //end of switch Action
			}while (Action<=2); //end of dowhile Action

			cout<<"\nThank you please come again!\n\n";
			break;
		} 
		case 3:{ 
			do{
				cout<<"\n         General Audience";
				//General Audience Movies selection
				cout<<"\n      1. Coco   ";	
				cout<<"\n      2. Fimdimg Nemo   ";
				cout<<"\n      3. Home   ";
				cout<<"\n     Choose Movie[1-3]:";
				cin>>Genaud;
				switch(Genaud){ 
					case 1: 
						cout<<"       Enter age category: ";
						cin>>age;
						if (age=="Children"||age=="children"){
							cout<<"        How many Coco Ticket?";
							cin>>cCt;
							totcCt= totcCt + (cCt * 200);
							cout<<"Updated Coco ticket Bill = "<<totcCt<<"\n"; break;
						}else if (age=="Adult"||age=="adult"){
							cout<<"       How many Coco Ticket?";
							cin>>ccAt;
							totccAt= totccAt + (ccAt * 250);
							cout<<"Updated Coco tciket bill = "<<totccAt <<"\n"; break;
						}else if (age=="Senior"||age=="senior")
							{cout<<"        How many Coco Ticket?";
							cin>>ccSt;
							totccSt= totccSt + (ccSt * 150);
							cout<<"Updated Coco ticket bill = "<<totccSt<<"\n"; break;
						}
					case 2: 
						cout<<"       Enter age category: ";
						cin>>age;
						if (age=="Children"||age=="children"){
							cout<<"        How many Finding Nemo Ticket?";
							cin>>fCt;
							totfCt= totfCt + (fCt * 200);
							cout<<"Updated Finding Nemo ticket Bill = "<<totfCt<<"\n"; break;
						}else if (age=="Adult"||age=="adult"){
							cout<<"       How many Finding Nemo Ticket?";
							cin>>fAt;
							totfAt= totfAt + (fAt * 250);
							cout<<"Updated Finding Nemo tciket bill = "<<totfAt <<"\n"; break;
						}else if (age=="Senior"||age=="senior"){
							cout<<"        How many Finding Nemo Ticket?";
							cin>>fSt;
							totfSt= totfSt + (fSt * 150);
							cout<<"Updated Finding Nemo ticket bill = "<<totfSt<<"\n"; break;
						}
					case 3:  
						cout<<"       Enter age category: ";
						cin>>age;
						if (age=="Children"||age=="children"){
							cout<<"        How many Home Ticket?";
							cin>>hCt;
							tothCt= tothCt + (hCt * 200);
							cout<<"Updated Home ticket Bill = "<<tothCt<<"\n"; break;
						}else if (age=="Adult"||age=="adult"){
							cout<<"       How many Home Ticket?";
							cin>>hAt;
							tothAt= tothAt + (hAt * 250);
							cout<<"Updated Home tciket bill = "<<tothAt <<"\n"; break;
						}else if (age=="Senior"||age=="senior"){
							cout<<"        How many Home Ticket?";
							cin>>hSt;
							tothSt= tothSt + (hSt * 150);
							cout<<"Updated Home ticket bill = "<<tothSt<<"\n"; break;
						}
				}break;//end of switch Genaud
			}while (Genaud<=2);//end of dowhile Genaud
		}break;
	}break; //end of switch trans
}while (trans<=3);//end of dowhile Movie
  
system("cls||clear");    // clear screen
  
// Formula for Total Bill
totbill = totiAt + totcAt + totaAt+ totiSt + totcSt + totaSt + totsCt + totact +
tottct +  totsAt +  totavAt + tottAt + totsSt + totavSt + tottSt + totcCt + totfCt +
tothCt + totccAt + totfAt + tothAt + totccSt + totfSt + tothSt;

totbillI = totiAt + totiSt;
totbillC = totcAt + totcSt;
totbillA = totaAt + totaSt;
totbillS = totsCt + totsAt + totsSt;
totbillAv = totact + totavAt + totavSt;
totbillMk = tottct + tottAt + tottSt;
totbillCc = totcCt + totccAt + totccSt;
totbillFn = totfCt + totfAt + totfSt;
totbillH = tothCt + tothAt + tothSt;



//Summary 
cout<<"\n**********************************************\n";
cout<<"*          Summary of Purchases              *\n";
cout<<"*  Insidious                           = "<< totbillI <<"\n";
cout<<"*  Conjuring                           = "<< totbillC <<"   \n";
cout<<"*  Annabelle                           = "<< totbillA <<"   \n";
cout<<"*  Spiderman                           = "<< totbillS <<"   \n";
cout<<"*  Avengers                            = "<< totbillAv<<"   \n";
cout<<"*  Mortal Kombat                       = "<< totbillMk<<"   \n";
cout<<"*  Coco                                = "<< totbillCc<<"   \n";
cout<<"*  Finding Nemo                        = "<< totbillFn<<"   \n";
cout<<"*  Home                                = "<< totbillH <<"   \n";
cout<<"*                                            *\n";
cout<<"**********************************************\n";
cout<<"*  Total Movie Ticket Bill             = " << totbill <<"    \n";
cout<<"**********************************************\n";

cout<<"   Enter Payment                    = ";
cin>>pay;

//Formula for change Note: Change should not be NEGATIVE used if  condition
change = pay - totbill;
cout<<"   Your Change                      = "<<change;
cout<<"\n**********************************************\n";
 
 
 } // end of main

