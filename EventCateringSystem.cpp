#include <iostream>
#include <string>
#include <cstdlib> // For system("pause")
using namespace std;
void setColor(const std::string& colorCode) { // coulour 
    std::cout << "\033[" << colorCode << "m";
}

// Function to reset text color to default
void resetColor() {
    std::cout << "\033[0m";
}


void system_pause();
void first_menu() {
    cout << "1. Satay (Appetizers) - RM20.00" << endl;
    cout << "2. Popiah (Appetizers) - RM30.00" << endl;
    cout << "3. Keropok Lekor (Appetizers) - RM30.00" << endl;
    cout << "4. Rendang (Mains) - RM70.00" << endl;
    cout << "5. Nasi Lemak (Mains) - RM80.00" << endl;
    cout << "6. Ayam Masak Merah (Mains) - RM90.00" << endl;
    cout << "7. Kuih Raya (Desserts) - RM50.00" << endl;
    cout << "8. Bubur Pulut Hitam (Desserts) - RM60.00" << endl;
    cout << "9. Dodol (Desserts) - RM70.00" << endl;
    cout << "->";
}

void second_menu() {
    cout << "1. Spring Rolls (Appetizers) - RM40.00" << endl;
    cout << "2. Dumplings (Appetizers) - RM40.00" << endl;
    cout << "3. Ngoh Hiang (Appetizers) - RM40.00" << endl;
    cout << "4. Cheese Burger (Desserts) - RM80.00" << endl;
    cout << "5. Ice Cream Sundae (Desserts) - RM50.00" << endl;
    cout << "6. Chocolate Fondue (Desserts) - RM50.00" << endl;
    cout << "7. Beef Wellington (Mains) - RM110.00" << endl;
    cout << "8. Lobster Thermidor (Mains) - RM100.00" << endl;
    cout << "9. Coq au Vin (Mains) - RM120.00" << endl;
    cout << "->";
}
void third_menu() {
    cout << "1. Cheese Ball (Appetizers)" << endl;
    cout << "2. Hot Spinach Dip (Appetizers)" << endl;
    cout << "3. Classic Deviled Eggs (Appetizers)" << endl;
    cout << "4. Noodles (Mains)" << endl;
    cout << "5. Chicken Chop (Mains)" << endl;
    cout << "6. Salad (Mains)" << endl;
    cout << "7. Ice Blended (Desserts)" << endl;
    cout << "8. Chocolate Sundae (Desserts)" << endl;
    cout << "9. Oreo Ice Cream (Desserts)" << endl;
    cout << "->";
}
void fouth_menu() {
    cout << "1. Bruschetta (Appetizers) - RM30.00" << endl;
    cout << "2. Stuffed Mushrooms (Appetizers) - RM30.00" << endl;
    cout << "3. Cheese Platter (Appetizers) - RM30.00" << endl;
    cout << "4. Grilled Steak (Mains) - RM30.00" << endl;
    cout << "5. Baked Salmon (Mains) - RM30.00" << endl;
    cout << "6. Vegetarian Lasagna (Mains) - RM30.00" << endl;
    cout << "7. Chocolate Fondue (Desserts) - RM30.00" << endl;
    cout << "8. Cheesecake (Desserts) - RM30.00" << endl;
    cout << "9. Fruit Tart (Desserts) - RM30.00" << endl;
    cout << "->";
}
void fifth_menu() {
    cout << "1. Shrimp Cocktail (Appetizers) - RM30.00" << endl;
    cout << "2. Caprese Skewers (Appetizers) - RM30.00" << endl;
    cout << "3. Mini Quiches (Appetizers) - RM30.00" << endl;
    cout << "4. Roast Chicken (Mains) - RM30.00" << endl;
    cout << "5. Beef Wellington (Mains) - RM30.00" << endl;
    cout << "6. Risotto (Mains) - RM30.00" << endl;
    cout << "7. Cake (Desserts) - RM30.00" << endl;
    cout << "8. Tiramisu (Desserts) - RM30.00" << endl;
    cout << "9. Macarons (Desserts) - RM30.00" << endl;
    cout << "->";
}

void drink_menu() {
    cout << "Your Drink:" << endl; 
    cout << "1. Ice Lemon Tea - RM30.00" << endl;
    cout << "2. Coca Cola - RM30.00" << endl;
    cout << "3. Beer - RM30.00" << endl;
    cout << "4. Soya - RM30.00" << endl;
    cout << "5. 100Plus - RM30.00" << endl;
    cout << "->"; 
}


struct orderDetail; //linked list 
struct personalDetail {
    string name;
    int OrderID ; 
    int day;
    int month;
    string phonenumber;
    int typeBC;  // buffet or course
    string special; // the special food
    int celebration;
    int pax;
    double revenue ; 
    int server ;
    personalDetail* next;
    orderDetail* link;
};

struct orderDetail {
	int tag ; 
    string food; // the food of the celebration
    string drink;
    orderDetail* next;
};


int main() { 

	int i = 0 ,  j =  0 ;  //initialized 

	personalDetail *prev2, *prev,*sortpersonal,* secondfirst=nullptr,*secondlast;
	orderDetail *current_order ,* preset ; 
    int choice, first_choice, third_choice, choice_holding, number,lengthNode=5;
    int month[12]={5,0,0,0,0,0,0,0,0,0,0,0};
    double monthRevenue[12]={580,0,0,0,0,0,0,0,0,0,0,0};
    int date[12][28]; 
    int celebrate[5]={1,1,1,1,1};
    int celebration[12][5];

        for (i=0;i<12;i++)
    {
    	for(j=0;j<5;j++)
    	celebration[i][j]=0;
	}
    for (i=0;i<12;i++)
    {
    	for(j=0;j<28;j++)
    	date[i][j]=0;
	}
  
    date [0][0] = 1 ; date [0][1] = 1 ;date [0][2] = 1 ;date [0][3] = 1 ;date [0][4] = 1 ;
        celebration[0][0]=1 ;  celebration[0][1]=1 ;  celebration[0][2]=1 ;  celebration[0][3]=1 ;  celebration[0][4]=1 ; 
	
    char accept;
	personalDetail* firstNode ,*search,*prevlast; 
	orderDetail *searchOrder; 
	orderDetail* ordertemplate = nullptr;
// preset data  1 
personalDetail* current_personal = new personalDetail ; 
 firstNode = current_personal ; 
current_personal->name = "Khoo";
current_personal->month = 1;
current_personal->day = 1;
current_personal->pax = 10;
current_personal->phonenumber = "01110588489";
current_personal->server = 5;
current_personal->typeBC = 2;
current_personal->revenue = 100.00;
current_personal->celebration = 1;
current_personal->OrderID = 101;
current_personal->special = "";

current_order = new orderDetail;
current_personal->link = current_order ;
current_order ->drink = "7UP";
current_order ->food = "Satay(Appertizers)";
current_order ->tag = 1;
current_order ->next = new orderDetail;
current_order = current_order ->next;
current_order ->drink = "7UP";
current_order ->food = "Satay(Appertizers)";
current_order ->tag = 2;
current_order->next = NULL; 

current_personal->next = new personalDetail;
current_personal = current_personal->next;
current_personal->name = "YEE";
current_personal->month = 1;
current_personal->day = 2;
current_personal->pax = 10;
current_personal->phonenumber = "01110581233";
current_personal->server = 5;
current_personal->typeBC = 2;
current_personal->revenue = 110.00;
current_personal->celebration = 2;
current_personal->OrderID = 201;
current_personal->special = "";

current_order = new orderDetail;
current_personal->link = current_order ;
current_order ->drink = "7UP";
current_order ->food = "Spring Rolls(Appertizers)";
current_order ->tag = 1;

current_order ->next = new orderDetail;
current_order = current_order ->next;
current_order ->drink = "7UP";
current_order ->food = "Spring Rolls(Appertizers)";
current_order ->tag = 2;
current_order->next = NULL;
current_personal->next = new personalDetail;
current_personal = current_personal->next;

current_personal->name = "TAN";
current_personal->month = 1;
current_personal->day = 3;
current_personal->pax = 10;
current_personal->phonenumber = "01112345222";
current_personal->server = 5;
current_personal->typeBC = 2;
current_personal->revenue = 120.00;
current_personal->celebration = 3;
current_personal->OrderID = 301;
current_personal->special = "";

current_order = new orderDetail;
current_personal->link = current_order ;
current_order ->drink = "7UP";
current_order ->food = "Cheese Ball(Appertizers)";
current_order ->tag = 1;

current_order ->next = new orderDetail;
current_order = current_order ->next;
current_order ->drink = "7UP";
current_order ->food = "Cheese Ball(Appertizers)";
current_order ->tag = 2;
current_order->next = NULL;
current_personal->next = new personalDetail;
current_personal = current_personal->next;

current_personal->name = "CHEE";
current_personal->month = 1;
current_personal->day = 4;
current_personal->pax = 10;
current_personal->phonenumber = "01234542329";
current_personal->server = 5;
current_personal->typeBC = 2;
current_personal->revenue = 130.00;
current_personal->celebration = 4;
current_personal->OrderID = 401;
current_personal->special = "";

current_order = new orderDetail;
current_personal->link = current_order ;
current_order ->drink = "7UP";
current_order ->food = "Bruschetta(Appertizers)";
current_order ->tag = 1;

current_order ->next = new orderDetail;
current_order = current_order ->next;
current_order ->drink = "7UP";
current_order ->food = "Bruschetta(Appertizers)";
current_order ->tag = 2;
current_order->next = NULL;
current_personal->next = new personalDetail;
current_personal = current_personal->next;

current_personal->name = "LING";
current_personal->month = 1;
current_personal->day = 5;
current_personal->pax = 10;
current_personal->phonenumber = "01234288489";
current_personal->server = 5;
current_personal->typeBC = 2;
current_personal->revenue = 140.00;
current_personal->celebration = 5;
current_personal->OrderID = 501;
current_personal->special = "";

current_order = new orderDetail;
current_personal->link = current_order ;
current_order ->drink = "7UP";
current_order ->food = "Shrimp Cocktail(Appertizers)";
current_order ->tag = 1;

current_order ->next = new orderDetail;
current_order = current_order ->next;
current_order ->drink = "7UP";
current_order ->food = "Shrimp Cocktail(Appertizers)";
current_order ->tag = 2;
current_order->next = NULL;            
prev = current_personal ; 

//// preset data 2 
personalDetail* templatee = new personalDetail;
secondfirst= templatee ;
templatee->name = "Khoo";
templatee->month = 1;
templatee->day = 1;
templatee->pax = 10;
templatee->phonenumber = "01110588489";
templatee->server = 5;
templatee->typeBC = 2;
templatee->revenue = 100.00;
templatee->celebration = 1;
templatee->OrderID = 101;
templatee->special = "";

ordertemplate = new orderDetail;
templatee->link = ordertemplate ;
ordertemplate ->drink = "7UP";
ordertemplate ->food = "Satay(Appertizers)";
ordertemplate ->tag = 1;
ordertemplate ->next = new orderDetail;
ordertemplate = ordertemplate ->next;
ordertemplate ->drink = "7UP";
ordertemplate ->food = "Satay(Appertizers)";
ordertemplate ->tag = 2;
ordertemplate->next = NULL; 

templatee->next = new personalDetail;
templatee = templatee->next;
templatee->name = "YEE";
templatee->month = 1;
templatee->day = 2;
templatee->pax = 10;
templatee->phonenumber = "01110581233";
templatee->server = 5;
templatee->typeBC = 2;
templatee->revenue = 110.00;
templatee->celebration = 2;
templatee->OrderID = 201;
templatee->special = "";

ordertemplate = new orderDetail;
templatee->link = ordertemplate ;
ordertemplate ->drink = "7UP";
ordertemplate ->food = "Spring Rolls(Appertizers)";
ordertemplate ->tag = 1;

ordertemplate ->next = new orderDetail;
ordertemplate = ordertemplate ->next;
ordertemplate ->drink = "7UP";
ordertemplate ->food = "Spring Rolls(Appertizers)";
ordertemplate ->tag = 2;
ordertemplate->next = NULL;
templatee->next = new personalDetail;
templatee = templatee->next;

templatee->name = "TAN";
templatee->month = 1;
templatee->day = 3;
templatee->pax = 10;
templatee->phonenumber = "01112345222";
templatee->server = 5;
templatee->typeBC = 2;
templatee->revenue = 120.00;
templatee->celebration = 3;
templatee->OrderID = 301;
templatee->special = "";

ordertemplate = new orderDetail;
templatee->link = ordertemplate ;
ordertemplate ->drink = "7UP";
ordertemplate ->food = "Cheese Ball(Appertizers)";
ordertemplate ->tag = 1;

ordertemplate ->next = new orderDetail;
ordertemplate = ordertemplate ->next;
ordertemplate ->drink = "7UP";
ordertemplate ->food = "Cheese Ball(Appertizers)";
ordertemplate ->tag = 2;
ordertemplate->next = NULL;
templatee->next = new personalDetail;
templatee = templatee->next;

templatee->name = "CHEE";
templatee->month = 1;
templatee->day = 4;
templatee->pax = 10;
templatee->phonenumber = "01234542329";
templatee->server = 5;
templatee->typeBC = 2;
templatee->revenue = 130.00;
templatee->celebration = 4;
templatee->OrderID = 401;
templatee->special = "";

ordertemplate = new orderDetail;
templatee->link = ordertemplate ;
ordertemplate ->drink = "7UP";
ordertemplate ->food = "Bruschetta(Appertizers)";
ordertemplate ->tag = 1;

ordertemplate ->next = new orderDetail;
ordertemplate = ordertemplate ->next;
ordertemplate ->drink = "7UP";
ordertemplate ->food = "Bruschetta(Appertizers)";
ordertemplate ->tag = 2;
ordertemplate->next = NULL;
templatee->next = new personalDetail;
templatee = templatee->next;

templatee->name = "LING";
templatee->month = 1;
templatee->day = 5;
templatee->pax = 10;
templatee->phonenumber = "01234288489";
templatee->server = 5;
templatee->typeBC = 2;
templatee->revenue = 140.00;
templatee->celebration = 5;
templatee->OrderID = 501;
templatee->special = "";

ordertemplate = new orderDetail;
templatee->link = ordertemplate ;
ordertemplate ->drink = "7UP";
ordertemplate ->food = "Shrimp Cocktail(Appertizers)";
ordertemplate ->tag = 1;

ordertemplate ->next = new orderDetail;
ordertemplate = ordertemplate ->next;
ordertemplate ->drink = "7UP";
ordertemplate ->food = "Shrimp Cocktail(Appertizers)";
ordertemplate ->tag = 2;
ordertemplate->next = NULL;  
prev2= templatee ; 
    menu:
    	 setColor("32"); //menu for starting 
    cout << "Welcome to Yummy Food Catering" << endl;
    cout << "1. Manage new event (eg. Delete, edit)" << endl;
    cout << "2. View Finalized Order" <<endl ; 
    cout << "3. Searching" << endl;
    cout << "4. Summary Report" << endl;
    cout << "5. Exit System" <<endl ; 
    cout << "->";
    cin >> choice;
    system_pause();
    if (choice == 1){
    	 setColor("36");
            lengthNode ++ ;  // calculate the length 
            // normal input 
			prevlast=current_personal;  
			current_personal->next = new personalDetail;
            cout << "Your Name\n->";
            cin.ignore();
             getline(cin,current_personal->name);
            cout << "Your name: " << current_personal->name << endl;
            system_pause();
do {
	    do {
        cout << "Which Month\n-> ";
        cin >> current_personal->month;
        cout << "Month: " << current_personal->month << endl;
        if (current_personal->month < 1 || current_personal->month > 12) {
            cout << "Invalid! Month should be between 1 and 12." << endl; // invalid data 
            system_pause();
        }
    } while (current_personal->month < 1 || current_personal->month > 12);
    system_pause();
    do {
        cout << "Which Date\n-> ";
        cin >> current_personal->day;
        cout << "Date: " << current_personal->day << endl;
        if (current_personal->day < 1 || current_personal->day > 28) {
            cout << "Invalid! Date should be between 1 and 28." << endl; //invalid 
            system_pause();
        }
    } while (current_personal->day < 1 || current_personal->day > 28);
system_pause();


    if (date[current_personal->month - 1][current_personal->day - 1] > 2) { // check valid 
    	cout << current_personal->month << current_personal->day << endl ; 
        cout << "This day is already full." << endl;
        system_pause();
    } else {
        date[current_personal->month - 1][current_personal->day - 1]++;
        break; // Exit the loop as the date is valid and available
    }
} while (true);
	// normal inpout 
            cout << "Your Phone Number\n->";
              cin.ignore();
             getline(cin, current_personal->phonenumber); 
            cout << "Phone Number: " << current_personal->phonenumber << endl;
            system_pause();
            
            // Create first orderDetail
            orderDetail* first_order = new orderDetail;
            current_personal->link = first_order;
            orderDetail* current_order = first_order;
            
            cout << "How many pax(RM10 per person)\n->";
            cin >> current_personal->pax;
             current_personal->revenue = current_personal->pax *10.00 ; 
            cout << "Pax: " << current_personal->pax << endl;
            system_pause();
			
			do
			{// menu for celebration 
			cout << "Celebration" << endl;
            cout << "1. Hari Raya Aidilfitri" << endl;
            cout << "2. Chinese New Year" << endl;
            cout << "3. Birthday Celebration" << endl;
            cout << "4. Annual Dinner" << endl;
            cout << "5. Wedding Dinner" << endl;
            cout << "->";
            cin >> current_personal->celebration;
            if(current_personal->celebration < 0 || current_personal->celebration >6)
            cout << "Invalid !!!" <<endl ; 
			}while(current_personal->celebration < 0 || current_personal->celebration >6 );
       		celebrate[current_personal->celebration-1]++; 
            system_pause();
			current_personal->OrderID = (current_personal->celebration * 100) + celebrate[current_personal->celebration - 1];
			do
			{ // menu for style 
			cout << "Please choose a serving type:" << endl;
            cout << "1. Buffet Style " << endl;
            cout << "2. Course Style " << endl;
            cout << "->";
            cin >> current_personal->typeBC;
				
            if (current_personal->typeBC == 1)
                cout << "Your serving type is: Buffet Style" << endl;
            else
                cout << "Your serving type is: Course Style" << endl;
				if (current_personal->typeBC!= 1 && current_personal->typeBC!=2)
				cout << "Invalid"<<endl; 
				    system_pause();
			}while (current_personal->typeBC!= 1 && current_personal->typeBC!=2);
        
          do {
  		  cout << "How many servers do you want?\n->" << endl;
   			 cin >> current_personal->server;
   			 if (current_personal->typeBC == 1) { //invalid 
     	   if (current_personal->server < 2) {
            cout << "Min 2 servers required for Buffet Style." << endl;
             system_pause();
            continue;
            
        }
       
    } else if (current_personal->typeBC == 2) {
        if (current_personal->server < 5) {
            cout << "Min 5 servers required for Course Style "<< endl; // invalid 
             system_pause();
            continue;
            
        }   
    }    
     system_pause();
    // If the number of servers is sufficient, break the loop
    break;

} while (true);
do
{
			cout << "Do you need a special dish? (1 - YES / 2 - NO)";    // menu for special dish , copy string 
            switch(current_personal->celebration) {
                case 1 : cout << "(Ketupat)" << endl;break;
                case 2 : cout << "(Yee Sang)" << endl;break;
                case 3 : cout << "(Birthday Cake)" << endl;break; 
                case 4 : cout << "(Spagetti)" << endl; break;
                case 5 : cout << "(Frence Fried)" << endl;break;
            }
            cout << "->"; 
            cin >> choice;
			system_pause(); 
            if(choice == 1) {
                switch(current_personal->celebration) {
                    case 1 : current_personal->special = "Ketupat"; current_personal->revenue+= 40.00 ;break; 
                    case 2 : current_personal->special = "Yee Sang"; current_personal->revenue+= 100.00 ; break;
                    case 3 : current_personal->special = "Birthday Cake"; current_personal->revenue+= 150.00 ;break;
                    case 4 : current_personal->special = "Spagetti"; current_personal->revenue+= 110.00 ;break;
                    case 5 : current_personal->special = "Frence Fried"; current_personal->revenue+= 30.00 ;break;
                }    
            }	
            
        }while(choice!= 1 && choice != 2 );
			do
			{ // enter the number of dishes to occur the linked list 
			cout << "Please enter the numbers of dishes that you need (at least 2, max 5)\n->";
            cin >> number;
            if(number<2 || number >5 )
            cout << "Invalid!";
            system_pause();
			}while (number<2 || number >5 );
			casenine : 
           orderDetail *last;
            for (int i = 0; i < number; i++) { // creating a dynamic linked list 
            	current_order->next = new orderDetail;
            	 	if(i!=0)
                current_order = current_order->next;
				current_order->next=NULL; 
            	current_order->tag = 0 ; 
            	current_order->tag = i+1; 
               invalid : 
                cout << "Dishes #" << current_order->tag << endl;
                if (current_personal->celebration == 1) {
				first_menu(); // Hari Raya
                        cin >> choice_holding;
                        if(choice_holding<1 || choice_holding>9)
                        goto invalid;
                        
                        switch (choice_holding) { // copy and hold  
                            case 1: current_order->food = "Satay(Appertizers)";current_personal->revenue+= 20.00 ; break;
                            case 2: current_order->food = "Popiah(Appertizers)";current_personal->revenue+= 30.00 ;break;
                            case 3: current_order->food = "Keropok Lekor(Appertizers)";current_personal->revenue+= 30.00 ; break;
                            case 4: current_order->food = "Rendang(Mains)";current_personal->revenue+= 70.00 ; break;
                            case 5: current_order->food = "Nasi Lemak(Mains)"; current_personal->revenue+= 80.00 ;break;
                            case 6: current_order->food = "Ayam Masak Merah(Mains)"; current_personal->revenue+= 90.00 ;break;
                            case 7: current_order->food = "Kuih Raya(Desserts)";current_personal->revenue+= 50.00 ;break; break;
                            case 8: current_order->food = "Bubur Pulut Hitam(Desserts)";current_personal->revenue+= 60.00 ;break; break;
                            case 9: current_order->food = "Dodol(Desserts)"; current_personal->revenue+= 70.00 ;break;break;
                    } 
                 }else if (current_personal->celebration == 2) { // CNY
                second_menu(); 
                        cin >> choice_holding;
                         if(choice_holding<1 || choice_holding>9)
                        goto invalid;
                        switch (choice_holding) { 
                            case 1: current_order->food = "Spring Rolls(Appertizers)";current_personal->revenue+= 40.00 ;break;
                            case 2: current_order->food = "Dumplings(Appertizers)";current_personal->revenue+= 40.00 ;break;
                            case 3: current_order->food = "Ngoh Hiang(Appertizers)";current_personal->revenue+= 40.00 ;break;
                            case 4: current_order->food = "Cheese Burger(Desserts)";current_personal->revenue+= 80.00 ;break; 
                            case 5: current_order->food = "Ice Cream Sundae(Desserts)";current_personal->revenue+= 50.00 ;break;
                            case 6: current_order->food = "Chocolate Fondue(Desserts)"; current_personal->revenue+= 50.00 ;break;
                            case 7: current_order->food = "Beef Wellington(Mains)";current_personal->revenue+= 110.00 ;break;
                            case 8: current_order->food = "Lobster Thermidor(Mains)";current_personal->revenue+= 100.00 ;break;
                            case 9: current_order->food = "Coq au Vin(Mains)"; current_personal->revenue+= 120.00 ;break;
                        }
                    }
                 else if (current_personal->celebration == 3) { // Birthday
                      third_menu();
                        cin >> choice_holding;
                         if(choice_holding<1 || choice_holding>9)
                        goto invalid;
                        switch (choice_holding) {
                            case 1: current_order->food = "Cheese Ball(Appertizers)"; break;
                            case 2: current_order->food = "Hot Spinach Dip(Appertizers)"; break;
                            case 3: current_order->food = "Classic Deviled Eggs(Appertizers)"; break;
                            case 4: current_order->food = "Noodles(Mains)"; break;
                            case 5: current_order->food = "Chicken Chop(Mains)"; break;
                            case 6: current_order->food = "Salad(Mains)"; break;
                            case 7: current_order->food = "Ice Blended(Desserts)"; break;
                            case 8: current_order->food = "Chocolate Sundae(Desserts)"; break;
                            case 9: current_order->food = "Oreo Ice Cream(Desserts)"; break;
                        }
                    }
                else if (current_personal->celebration == 4) { // Annual Dinner
                       fouth_menu();
                        cin >> choice_holding;
                         if(choice_holding<1 || choice_holding>9)
                        goto invalid;
                        switch (choice_holding) {
                            case 1: current_order->food = "Bruschetta(Appertizers)"; current_personal->revenue+= 30.00 ;break;
                            case 2: current_order->food = "Stuffed Mushrooms(Appertizers)"; current_personal->revenue+= 30.00 ;break;
                            case 3: current_order->food = "Cheese Platter(Appertizers)"; current_personal->revenue+= 30.00 ;break;
                            case 4: current_order->food = "Grilled Steak(Mains)"; current_personal->revenue+= 30.00 ;break;
                            case 5: current_order->food = "Baked Salmon(Mains)";current_personal->revenue+= 30.00 ;break;
                            case 6: current_order->food = "Vegetarian Lasagna(Mains)";current_personal->revenue+= 30.00 ;break;
                            case 7: current_order->food = "Chocolate Fondue(Desserts)";current_personal->revenue+= 30.00 ;break; 
                            case 8: current_order->food = "Cheesecake(Desserts)";current_personal->revenue+= 30.00 ;break; 
                            case 9: current_order->food = "Fruit Tart(Desserts)";current_personal->revenue+= 30.00 ;break; 
                        }
                    }
                else if (current_personal->celebration == 5) { // Wedding Dinner
                        fifth_menu();
                        cin >> choice_holding;
                         if(choice_holding<1 || choice_holding>9)
                        goto invalid;
                        switch (choice_holding) {
                            case 1: current_order->food = "Shrimp Cocktail(Appertizers)"; current_personal->revenue+= 30.00 ;break;
                            case 2: current_order->food = "Caprese Skewers(Appertizers)";current_personal->revenue+= 30.00 ;break; 
                            case 3: current_order->food = "Mini Quiches(Appertizers)";current_personal->revenue+= 30.00 ;break; 
                            case 4: current_order->food = "Roast Chicken(Mains)";current_personal->revenue+= 30.00 ;break; 
                            case 5: current_order->food = "Beef Wellington(Mains)"; current_personal->revenue+= 30.00 ;break;
                            case 6: current_order->food = "Risotto(Mains)";current_personal->revenue+= 30.00 ;break; 
                            case 7: current_order->food = "Cake(Desserts)"; current_personal->revenue+= 30.00 ;break;
                            case 8: current_order->food = "Tiramisu(Desserts)";current_personal->revenue+= 30.00 ;break; ;
                            case 9: current_order->food = "Macarons(Desserts)"; current_personal->revenue+= 30.00 ;break;
                        }
                    }
                do
                {
                system_pause();
               drink_menu();
                cin >> choice_holding;
                system_pause();
                switch(choice_holding)
                { //menu for drink 
                	case 1 : current_order->drink = "Ice Lemon Tea" ;current_personal->revenue+= 30.00 ;break;
                	case 2 : current_order->drink = "Coca Cola" ; current_personal->revenue+= 30.00 ;break;
                	case 3 : current_order->drink = "Beer" ;current_personal->revenue+= 30.00 ;break; 
                	case 4 : current_order->drink = "Soya" ;current_personal->revenue+= 30.00 ;break; 
                	case 5 : current_order->drink = "100Plus" ;current_personal->revenue+= 30.00 ;break; 
				}
				if(choice_holding<1 || choice_holding>5)
				cout << "Invalid"<<endl ; 
				}while (choice_holding<1 || choice_holding>5);
              
            }
edit :  // part for edit data 
            cout << "----------------------------------" << endl; 
            cout << "Order ID:" << current_personal->OrderID <<endl ; 
            cout << "Name: " << current_personal->name << endl;    
            cout << "Date: " << current_personal->day << endl; 
            cout << "Month: " << current_personal->month << endl; 
            cout << "Phone Number: " << current_personal->phonenumber << endl; 
            cout << "Pax: " << current_personal->pax << endl; 
            cout << "Special Dishes : " << current_personal->special <<endl ; 
            cout << "Celebration: ";                
            switch(current_personal->celebration) {
                case 1 : cout << "Hari Raya Aidilfitri" << endl; break; 
                case 2 : cout << "Chinese New Year" << endl; break;
                case 3 : cout << "Birthday Celebration" << endl; break;
                case 4 : cout << "Annual Dinner" << endl; break;
                case 5 : cout << "Wedding Dinner" << endl; break;
            }
            cout << "Style: ";                
            switch(current_personal->typeBC) {
                case 1 : cout << "Buffet Style" << endl; break;
                case 2 : cout << "Course Style" << endl; break; 
            }
            cout << "Revenue(RM):" << current_personal->revenue << endl ; 
            cout << "----------------------------------" << endl; 

            orderDetail* first ;
			first = current_personal->link;
// Print all order details
orderDetail* temp = current_personal->link;
int dish_number = 0;
while (temp!=NULL) {
    dish_number++; // print all of the details 
    cout << "Dish #" << dish_number << ":" << endl;
    cout <<"Drink:" << temp->drink <<endl;
    cout << "Food: " << temp->food << endl;
    cout << "----------------" << endl;
    temp = temp->next;
    if(temp==current_order)
    {
    cout << "Dish #" << current_order->tag << ":" << endl;
    cout << "Drink:" << current_order->drink << endl; 
    cout << "Food: " << current_order->food << endl;
    cout << "----------------" << endl;
    break;
	}
}
invalid2:
    cout << "Confirmation Order (1-Confirm | 2-Cancel Order | 3-Edit)\n->" <<endl ;  // choose confirm or cancel or edit 
    cin >> choice ; 

if (choice == 1) {
    cout << "You have successfully added an event!" << endl;
    current_personal->OrderID = (current_personal->celebration * 100) + celebrate[current_personal->celebration - 1];
    celebration[current_personal->month - 1][current_personal->celebration - 1]++;
    //...
    // Create a new node for the sorted list
    personalDetail* newNode = new personalDetail;
    newNode->OrderID = current_personal->OrderID;
    newNode->celebration = current_personal->celebration;
    newNode->day = current_personal->day;
    newNode->month = current_personal->month;
    newNode->name = current_personal->name;
    newNode->pax = current_personal->pax;
    newNode->phonenumber = current_personal->phonenumber;
    newNode->revenue = current_personal->revenue;
    newNode->server = current_personal->server;
    newNode->special = current_personal->special;
    newNode->typeBC = current_personal->typeBC;
    newNode->link = nullptr;
//deep copy 
    // Copy the order details
    orderDetail* current_order_copy = current_personal->link;
    orderDetail* newNode_order = nullptr;
    while (current_order_copy!= nullptr) {
        orderDetail* newOrderNode = new orderDetail;
        newOrderNode->tag = current_order_copy->tag;
        newOrderNode->food = current_order_copy->food;
        newOrderNode->drink = current_order_copy->drink;
        newOrderNode->next = nullptr;

        if (newNode_order == nullptr) {
            newNode_order = newOrderNode;
        } else {
            orderDetail* temp = newNode_order;
            while (temp->next!= nullptr) {
                temp = temp->next;
            }
            temp->next = newOrderNode;
        }
	// sorting
        current_order_copy = current_order_copy->next;
    }
    newNode->link = newNode_order;
	
// Add the new node to the sorted list
    if (firstNode == nullptr || current_personal->OrderID < firstNode->OrderID) {
        current_personal->next = firstNode;
        firstNode= current_personal;
    } else {
        personalDetail* temps =firstNode;
        while (temps->next!= nullptr && temps->next->OrderID < current_personal->OrderID) {
            temps = temps->next;
        }
        current_personal->next = temps->next;
        temps->next =current_personal; 
    }
	
    // Add the new node to the sorted list
    if (secondfirst == nullptr || newNode->OrderID < secondfirst->OrderID) {
        newNode->next = secondfirst;
        secondfirst = newNode;
    } else {
        personalDetail* temp = secondfirst;
        while (temp->next!= nullptr && temp->next->OrderID < newNode->OrderID) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}else if (choice==2) { // delete (pop)
	 setColor("33");
    cout << "Deleted Successfully!" << endl;

    if (firstNode == NULL) {
        cout << "Stack is empty. Nothing to delete." << endl;
    } else {
        personalDetail* p = current_personal;

    	prev->link = NULL ; 
    	delete p; 

        lengthNode--;
        system("cls");
        goto menu;
    }
}
    else if(choice==3)
    {
    	 setColor("36");
    	system_pause();  // print edit menu 
    	cout << "Which one do you want to edit?" << endl;
        cout << "1. Name" << endl;
        cout << "2. Date" << endl;
        cout << "3. Month" << endl;
        cout << "4. Phone Number" << endl;
        cout << "5. Type(Buffet or Course)" << endl;
        cout << "6. Special item" << endl;
        cout << "7. Celebration" << endl;
        cout << "8. Pax" << endl;
		cout << "->";
        cin >> choice;

        cout << "Value: ";
        
        switch (choice) {
            case 1: cin >> current_personal->name;  goto edit ;  break;
            case 2: cin >> current_personal->day;  goto edit ;  break;
            case 3: cin >> current_personal->month;  goto edit ;  break;
            case 4: cin >> current_personal->phonenumber;  goto edit ;  break;
            case 5: cin >> current_personal->typeBC;   goto edit ; break;
            case 6: cin >> current_personal->special;  goto edit ;  break;
            case 7: cin >> search->celebration;
                    searchOrder = search->link;
                    while (searchOrder != NULL) {
                    int choice_holding;
                    if (search->celebration == 1) { // Hari Raya
                      first_menu();
                        cin >> choice_holding;
                        switch (choice_holding) {
                            case 1: searchOrder->food = "Satay (Appetizers)"; search->revenue += 20.00; break;
                            case 2: searchOrder->food = "Popiah (Appetizers)"; search->revenue += 30.00; break;
                            case 3: searchOrder->food = "Keropok Lekor (Appetizers)"; search->revenue += 30.00; break;
                            case 4: searchOrder->food = "Rendang (Mains)"; search->revenue += 70.00; break;
                            case 5: searchOrder->food = "Nasi Lemak (Mains)"; search->revenue += 80.00; break;
                            case 6: searchOrder->food = "Ayam Masak Merah (Mains)"; search->revenue += 90.00; break;
                            case 7: searchOrder->food = "Kuih Raya (Desserts)"; search->revenue += 50.00; break;
                            case 8: searchOrder->food = "Bubur Pulut Hitam (Desserts)"; search->revenue += 60.00; break;
                            case 9: searchOrder->food = "Dodol (Desserts)"; search->revenue += 70.00; break;
                        }
                    } else if (search->celebration == 2) { // CNY
                      second_menu();
                        cin >> choice_holding;
                        switch (choice_holding) {
                            case 1: searchOrder->food = "Spring Rolls (Appetizers)"; search->revenue += 40.00; break;
                            case 2: searchOrder->food = "Dumplings (Appetizers)"; search->revenue += 40.00; break;
                            case 3: searchOrder->food = "Ngoh Hiang (Appetizers)"; search->revenue += 40.00; break;
                            case 4: searchOrder->food = "Cheese Burger (Desserts)"; search->revenue += 80.00; break;
                            case 5: searchOrder->food = "Ice Cream Sundae (Desserts)"; search->revenue += 50.00; break;
                            case 6: searchOrder->food = "Chocolate Fondue (Desserts)"; search->revenue += 50.00; break;
                            case 7: searchOrder->food = "Beef Wellington (Mains)"; search->revenue += 110.00; break;
                            case 8: searchOrder->food = "Lobster Thermidor (Mains)"; search->revenue += 100.00; break;
                            case 9: searchOrder->food = "Coq au Vin (Mains)"; search->revenue += 120.00; break;
                        }
                    } else if (search->celebration == 3) { // Birthday
                        third_menu();
						cin >> choice_holding;
                        switch (choice_holding) {
                            case 1: searchOrder->food = "Cheese Ball (Appetizers)"; break;
                            case 2: searchOrder->food = "Hot Spinach Dip (Appetizers)"; break;
                            case 3: searchOrder->food = "Classic Deviled Eggs (Appetizers)"; break;
                            case 4: searchOrder->food = "Noodles (Mains)"; break;
                            case 5: searchOrder->food = "Chicken Chop (Mains)"; break;
                            case 6: searchOrder->food = "Salad (Mains)"; break;
                            case 7: searchOrder->food = "Ice Blended (Desserts)"; break;
                            case 8: searchOrder->food = "Chocolate Sundae (Desserts)"; break;
                            case 9: searchOrder->food = "Oreo Ice Cream (Desserts)"; break;
                        }
                    } else if (search->celebration == 4) { // Annual Dinner
                       fouth_menu();
                        cin >> choice_holding;
                        switch (choice_holding) {
                            case 1: searchOrder->food = "Bruschetta (Appetizers)"; search->revenue += 30.00; break;
                            case 2: searchOrder->food = "Stuffed Mushrooms (Appetizers)"; search->revenue += 30.00; break;
                            case 3: searchOrder->food = "Cheese Platter (Appetizers)"; search->revenue += 30.00; break;
                            case 4: searchOrder->food = "Grilled Steak (Mains)"; search->revenue += 30.00; break;
                            case 5: searchOrder->food = "Baked Salmon (Mains)"; search->revenue += 30.00; break;
                            case 6: searchOrder->food = "Vegetarian Lasagna (Mains)"; search->revenue += 30.00; break;
                            case 7: searchOrder->food = "Chocolate Fondue (Desserts)"; search->revenue += 30.00; break;
                            case 8: searchOrder->food = "Cheesecake (Desserts)"; search->revenue += 30.00; break;
                            case 9: searchOrder->food = "Fruit Tart (Desserts)"; search->revenue += 30.00; break;
                        }
                    } else if (search->celebration == 5) { // Wedding Dinner
                       fifth_menu();
                        cin >> choice_holding;
                        switch (choice_holding) {
                            case 1: searchOrder->food = "Shrimp Cocktail (Appetizers)"; search->revenue += 30.00; break;
                            case 2: searchOrder->food = "Caprese Skewers (Appetizers)"; search->revenue += 30.00; break;
                            case 3: searchOrder->food = "Mini Quiches (Appetizers)"; search->revenue += 30.00; break;
                            case 4: searchOrder->food = "Roast Chicken (Mains)"; search->revenue += 30.00; break;
                            case 5: searchOrder->food = "Beef Wellington (Mains)"; search->revenue += 30.00; break;
                            case 6: searchOrder->food = "Risotto (Mains)"; search->revenue += 30.00; break;
                            case 7: searchOrder->food = "Cake (Desserts)"; search->revenue += 30.00; break;
                            case 8: searchOrder->food = "Tiramisu (Desserts)"; search->revenue += 30.00; break;
                            case 9: searchOrder->food = "Macarons (Desserts)"; search->revenue += 30.00; break;
                        }
                    }
                    searchOrder = searchOrder->next;
                }
                  goto edit ; 
                break;
                case 8: cin >> search->pax;  goto edit ;  break; 
            
	   } // end switch case 
} 
else 
{
	cout<<"Invalid"<<endl ; 
	system_pause();
	goto invalid2;
}
}
	 else if (choice==2)	
	{
		 setColor("33");
		do
		{  // menu for check all the finalized event 
	cout << "View All Event " <<endl ; 
		cout << "1. Sort By Revenue"<<endl ; 
	cout << "2. Sort By Celebration(Event Type)"<<endl ;
	cout << "->"; 
	cin >> choice ;
	if(choice!= 1 && choice !=2)
	cout << "Invalid"<<endl ;
	system_pause(); 
	}while(choice!= 1 && choice !=2);
	if(choice ==1)
	{
	personalDetail *traver = firstNode ; 
	for(int count=1 ; count <= lengthNode ; count++)
	{
		   cout << "----------------------------------" << endl; 
            cout << "Order ID:" << traver->OrderID <<endl ; 
            cout << "Name: " << traver->name << endl;    
            cout << "Date: " << traver->day << endl; 
            cout << "Month: " << traver->month << endl; 
            cout << "Phone Number: " << traver->phonenumber << endl; 
            cout << "Pax: " << traver->pax << endl; 
            cout << "Special Dishes : " << traver->special <<endl ; 
            cout << "Celebration: ";                
            switch(traver->celebration) {
                case 1 : cout << "Hari Raya Aidilfitri" << endl; break; 
                case 2 : cout << "Chinese New Year" << endl; break;
                case 3 : cout << "Birthday Celebration" << endl; break;
                case 4 : cout << "Annual Dinner" << endl; break;
                case 5 : cout << "Wedding Dinner" << endl; break;
            }
            cout << "Style: ";                
            switch(traver->typeBC) {
                case 1 : cout << "Buffet Style" << endl; break;
                case 2 : cout << "Course Style" << endl; break; 
            }
            cout << "Revenue(RM):" << traver->revenue << endl ; 
            cout << "----------------------------------" << endl; 

            orderDetail* first ;
			first = traver->link;
	// Print all order details
	orderDetail* traverse = traver->link;
	while (traverse!=NULL) {
    cout << "Dish #" << traverse->tag << ":" << endl;
    cout <<"Drink:" << traverse->drink <<endl;
    cout << "Food: " << traverse->food << endl;
    cout << "----------------" << endl;
    traverse =traverse->next;
    if(traverse==current_order)
    {
    cout << "Dish #" <<traverse->tag << ":" << endl;
    cout << "Drink:" << traverse->drink << endl; 
    cout << "Food: " << traverse->food << endl;
    cout << "----------------" << endl;
    break;
	}
	}
	system_pause();
	traver=traver->next ; 
	}
		}	
else if (choice == 2) {
    personalDetail* traver = secondfirst;
    for(int count=1 ; count <= lengthNode ; count++) {
        cout << "----------------------------------" << endl;
        cout << "Order ID:" << traver->OrderID << endl;
        cout << "Name: " << traver->name << endl;
        cout << "Date: " << traver->day << endl;
        cout << "Month: " << traver->month << endl;
        cout << "Phone Number: " << traver->phonenumber << endl;
        cout << "Pax: " << traver->pax << endl;
        cout << "Special Dishes : " << traver->special << endl;
        cout << "Celebration: ";
        switch (traver->celebration) {
            case 1: cout << "Hari Raya Aidilfitri" << endl; break;
            case 2: cout << "Chinese New Year" << endl; break;
            case 3: cout << "Birthday Celebration" << endl; break;
            case 4: cout << "Annual Dinner" << endl; break;
            case 5: cout << "Wedding Dinner" << endl; break;
        }
        cout << "Style: ";
        switch (traver->typeBC) {
            case 1: cout << "Buffet Style" << endl; break;
            case 2: cout << "Course Style" << endl; break;
        }
        cout << "Revenue(RM):" << traver->revenue << endl;
        cout << "----------------------------------" << endl;

        orderDetail* traverse = traver->link;
        while (traverse != nullptr) {
            cout << "Dish #" << traverse->tag << ":" << endl;
            cout << "Drink:" << traverse->drink << endl;
            cout << "Food: " << traverse->food << endl;
            cout << "----------------" << endl;
            traverse = traverse->next;
        }
        system_pause();
        traver = traver->next;
    }
}	
	} 
else if (choice == 3) { // function for searching 
	 setColor("36");
int searchOrder;
cout << "Searching" << endl;
cout << "---------------" << endl;
cout << "Order Id" << endl;
cout << "->" ;
cin >> searchOrder;
system_pause();

// Hybrid search setup
int mid = lengthNode / 2;
int highs = (2 * lengthNode) / 3;
int lows = lengthNode / 3;
personalDetail *middle = NULL, *lowNode = NULL, *highNode = NULL;

search = firstNode;
for (int i = 1; i <= lengthNode; i++) {
if (i == lows)
lowNode = search;
else if (i == mid)
middle = search;
else if (i == highs) {
highNode = search;
break;
}
search = search->next;
}

personalDetail* newNode = firstNode;
if (firstNode->OrderID == searchOrder)
newNode = firstNode;
else if (current_personal->OrderID == searchOrder)
newNode = current_personal;
else {
if (searchOrder >= highNode->OrderID) {
newNode = highNode;
while (newNode->OrderID > searchOrder)
newNode = newNode->next;
} else if (searchOrder <= lowNode->OrderID) {
newNode = firstNode;
while (newNode->OrderID < searchOrder)
newNode = newNode->next;
} else if (searchOrder >= middle->OrderID) {
newNode = middle;
while (newNode->OrderID > searchOrder)
newNode = newNode->next;
} else {
newNode = lowNode;
while (newNode->OrderID < searchOrder)
newNode = newNode->next;
}
}

// Perform hybrid search
if (newNode != NULL && newNode->OrderID == searchOrder) {
cout << "Order Found" << endl;
cout << "----------------------------------" << endl;
cout << "Order ID: " << newNode->OrderID << endl;
cout << "Name: " << newNode->name << endl;
cout << "Date: " << newNode->day << endl;
cout << "Month: " << newNode->month << endl;
cout << "Phone Number: " << newNode->phonenumber << endl;
cout << "Pax: " << newNode->pax << endl;
cout << "Special Dishes: " << newNode->special << endl;
cout << "Celebration: ";
switch (newNode->celebration) {
case 1: cout << "Hari Raya Aidilfitri" << endl; break;
case 2: cout << "Chinese New Year" << endl; break;
case 3: cout << "Birthday Celebration" << endl; break;
case 4: cout << "Annual Dinner" << endl; break;
case 5: cout << "Wedding Dinner" << endl; break;
}
cout << "Style: ";
switch (newNode->typeBC) {
case 1: cout << "Buffet Style" << endl; break;
case 2: cout << "Course Style" << endl; break;
}
cout << "Revenue(RM): " << newNode->revenue << endl;
cout << "----------------------------------" << endl;

// Print all order details
orderDetail* temp = newNode->link;
int dish_number = 0;
while (temp != NULL) {
dish_number++;
cout << "Dish #" << dish_number << ":" << endl;
cout << "Drink: " << temp->drink << endl;
cout << "Food: " << temp->food << endl;
cout << "----------------" << endl;
temp = temp->next;
}
} else {
cout << "Order Not Found" << endl;
}
    system_pause();
}
	else if(choice==4)
	{
		 setColor("36"); // print the summary
		cout << "Monthly Summary (Event Type)";
		cout << "-----------------------------------------" <<endl ; 
		for(i=0;i<12;i++)
		{
			if(((i==3)||(i==7))||(i==11))
			system_pause();
			switch(i)
			{
				case 0 : cout << "January Report" << endl;break;
				case 1 : cout << "Febuary Report" << endl;break;
				case 2 : cout << "March Report" << endl;break;
				case 3 : cout << "April Report" << endl;break;
				case 4 : cout << "May Report" << endl;break;
				case 5 : cout << "June Report" << endl;break;
				case 6 : cout << "July Report" << endl;break;
				case 7 : cout << "August Report" << endl;break;
				case 8 : cout << "September Report" << endl;break;
				case 9 : cout << "October Report" << endl;break;
				case 10 : cout << "November Report" << endl;break;
				case 11 : cout << "December Report" << endl;break;
			}
			cout << "---------------" <<endl ; 
			for(j=0;j<5;j++)
			{
				switch(j)
				{
						case 0 :cout << "1. Hari Raya Aidilfitri:"<<celebration[i][j] << endl;break;
						case 1 :cout << "2. Chinese New Year:" <<celebration[i][j]<< endl;break;
						case 2 :cout << "3. Birthday Celebration:" <<celebration[i][j]<< endl;break;
						case 3 :cout << "4. Annual Dinner:" <<celebration[i][j]<< endl;break;
						case 4 :cout << "5. Wedding Dinner:" <<celebration[i][j]<< endl;break;
				}
			}
			cout << "--------------" <<endl ; 
		}
		system_pause();
		cout << "Monthly Summary(Total Revenue)" <<endl ; 
		cout << "------------------------------" <<endl ; 
		for(i=0;i<=11;i++)
		{
			if(((i==3)||(i==7))||(i==11))
			system_pause();
				switch(i)
			{
				case 0 : cout << "January Report" << endl;break;
				case 1 : cout << "Febuary Report" << endl;break;
				case 2 : cout << "March Report" << endl;break;
				case 3 : cout << "April Report" << endl;break;
				case 4 : cout << "May Report" << endl;break;
				case 5 : cout << "June Report" << endl;break;
				case 6 : cout << "July Report" << endl;break;
				case 7 : cout << "August Report" << endl;break;
				case 8 : cout << "September Report" << endl;break;
				case 9 : cout << "October Report" << endl;break;
				case 10 : cout << "November Report" << endl;break;
				case 11 : cout << "December Report" << endl;break;
			}
			cout << "Revenue:" << monthRevenue[i] <<endl ; 
			cout << "-------------------------\n\n" <<endl ; 
		}
		goto menu ; 
	}
	else if(choice==5) // exit system when return 0 
	return 0 ; 
	else 
	cout << "Invalid!!!" <<endl ; 
	system_pause();
	goto menu ; 
}

void system_pause() { // function that clear screen 
    system("pause");
    system("cls");
}
