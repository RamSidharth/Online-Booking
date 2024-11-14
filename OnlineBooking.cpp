
#include <iostream>

using namespace std;

class Booking{
    public:
    int orderid;
    char orderdate[100]="1 - 1 - 2025";
    int totalamount;
    
    void display(){
        cout<<"\nOrder ID         : "<<orderid;
        cout<<"\nOrder Date       : "<<orderdate;
        cout<<"\nTotal Amount     : "<<totalamount;
    }
};

class food:public Booking{
    public:
    void showmenu(){
        // int q1,q2,q3,q4,q5,q6,gst;
        cout<<"\n---------------Food Menu----------------------";
        cout<<"\n\nSno-----Dish-------------------------------Price\n";
        cout<<"\n1  Veg Biriyani.............................170 ";
        cout<<"\n2  Mushroom Fried Rice......................200 ";
        cout<<"\n3  Macaronoi................................200 ";
        cout<<"\n4  Garlic Pizza.............................200 ";
        cout<<"\n5  Cheese Burger............................130 ";
        cout<<"\n6  MilkShake (Any variety)..................100 ";
    }
    // void bill(){
    //     cout<<"\n---------HERE IS YOUR IS BILL----------";
    //     cout<<"\n.................. ";
    // }
};

class electronics:public Booking{
    public:
    void showmenu(){
        // int q1,q2,q3,q4,q5,q6,gst;
        cout<<"\n---------------Electronics Item----------------------";
        cout<<"\n\nSno-----Product-------------------------------Price\n";
        cout<<"\n1   Cable Holders..............................70 ";
        cout<<"\n2   RGB Lights.................................200 ";
        cout<<"\n3   Processor..................................30000 ";
        cout<<"\n4   Graphics Card..............................200000 ";
        cout<<"\n5   Mother Board...............................13000 ";
        cout<<"\n6   RAM........................................10000 ";
        cout<<"\n7   Storage Unit...............................2000 ";
        cout<<"\n8   Power Supply...............................2000 ";
        cout<<"\n9   Thermal paste..............................200 ";
        cout<<"\n10  Cabinet....................................8000 ";
        cout<<"\n11  Monitor....................................12000 ";
        cout<<"\n12  Keyboard & Mouse...........................2300 ";
        
        
    }
   
};
class cloths:public Booking{
    public:
    void showmenu(){
        // int q1,q2,q3,q4,q5,q6,gst;
        cout<<"\n---------------Cloths Collection ----------------------";
        cout<<"\n\nSno-----Dress Name-------------------------------Price\n";
        cout<<"\n1  Shirt............................................1500 ";
        cout<<"\n2  Pant.............................................2000 ";
        cout<<"\n3  T-Shirt..........................................700 ";
        cout<<"\n4  Trousers.........................................400 ";
        cout<<"\n5  Shoe.............................................4000 ";
        cout<<"\n6  Socks(3 Pairs)...................................90 ";
        cout<<"\n7  Slippers.........................................350 ";
        cout<<"\n8  Cap..............................................1000 ";
    }
    
};

int main() {
    
    int i=1,j=1,k=1;
    food fcust[1000]={};
    electronics ecust[1000]={};
    cloths ccust[1000]={};
    
    
    while(1){
        
        int temp1; 
        
        cout<<"\n\n\n   --------Welcome to Ram Solutions--------";
        cout<<"\n What Service would you like to Avail ?";
        cout<<"\n 1 Food and Beverages ";
        cout<<"\n 2 Elecronics ";
        cout<<"\n 3 Clothings";
        cout<<"\n 4 Check a Bill Detail";
        
        cout<<"\n\nEnter a number (1-4) : ";
        cin>>temp1;
        if(temp1==1){
            int fooditem[6]={};
            int foodprice[6]={};
            int foodquant[6]={};
            int amount=0;
            
            fcust[i++].showmenu();
            while(1){
                int temp2;
                cout<<"\nEnter the Food item number (Press 0 to end ordering) : ";
                cin>>temp2;
                if(temp2==1){
                    int quant;
                    cout<<"\nEnter the Quantity : ";
                    cin>>quant;
                    fooditem[temp2-1]=1;
                    foodprice[temp2-1]+=quant*170;
                    amount+=quant*170;
                    foodquant[temp2-1]=quant;
                }
                else if(temp2==2){
                    int quant;
                    cout<<"\nEnter the Quantity : ";
                    cin>>quant;
                    fooditem[temp2-1]=1;
                    foodprice[temp2-1]+=quant*200;
                    amount+=quant*200;
                    foodquant[temp2-1]=quant;
                }
                else if(temp2==3){
                    int quant;
                    cout<<"\nEnter the Quantity : ";
                    cin>>quant;
                    fooditem[temp2-1]=1;
                    foodprice[temp2-1]+=quant*200;
                    amount+=quant*200;
                    foodquant[temp2-1]=quant;
                }
                else if(temp2==4){
                    int quant;
                    cout<<"\nEnter the Quantity : ";
                    cin>>quant;
                    fooditem[temp2-1]=1;
                    foodprice[temp2-1]+=quant*200;
                    amount+=quant*200;
                    foodquant[temp2-1]=quant;
                }
                else if(temp2==5){
                    int quant;
                    cout<<"\nEnter the Quantity : ";
                    cin>>quant;
                    fooditem[temp2-1]=1;
                    foodprice[temp2-1]+=quant*130;
                    amount+=quant*130;
                    foodquant[temp2-1]=quant;
                }
                else if(temp2==6){
                    int quant;
                    cout<<"\nEnter the Quantity : ";
                    cin>>quant;
                    fooditem[temp2-1]=1;
                    foodprice[temp2-1]+=quant*100;
                    amount+=quant*100;
                    foodquant[temp2-1]=quant;
                }
                else{
                    cout<<"\nThank You For Ordering ";
                    break;
                }
                
            }
            int p=1;
            cout<<"\n-----------Your Bill-----------";
            cout<<"\nSno....Dish...................Quantity....Amount\n";
            if(fooditem[0]==1){
                cout<<p++<<"  Veg Biriyani                    "<<foodquant[0]<<"      "<<foodprice[0]<<"\n";
            }
            if(fooditem[1]==1){
                cout<<p++<<"  Mushroom Fried Rice             "<<foodquant[1]<<"      "<<foodprice[1]<<"\n";
            }
            if(fooditem[2]==1){
                cout<<p++<<"  Macaronoi                       "<<foodquant[2]<<"      "<<foodprice[2]<<"\n";
            }
            if(fooditem[3]==1){
                cout<<p++<<"  Garlic Pizza                    "<<foodquant[3]<<"      "<<foodprice[3]<<"\n";
            }
            if(fooditem[4]==1){
                cout<<p++<<"  Cheese Burger                   "<<foodquant[4]<<"      "<<foodprice[4]<<"\n";
            }
            if(fooditem[5]==1){
                cout<<p++<<"  MilkShake                       "<<foodquant[5]<<"      "<<foodprice[5]<<"\n";
            }
            
            cout<<"\nGST                               12%     "<<amount*0.12;
            
            
            cout<<"\nDiscount                          10%     "<<amount*0.10;
            
            
            cout<<"\nTotal Amount                              "<<(amount*0.02)+amount;
            
            
            cout<<"\n\nThank You for Visiting us Hope we See you Again";
            
          
          
          
            
        }
        else if(temp1==2){
            
            
            
            
            
            
            
            
        }
        else if(temp1==3){
            
            
            
            
         
         
         
            
        }
        else if(temp1==4){
            
            
            
            
            
        }
        else{
            cout<<"\nInValid Input";
        }
        
        
    }
    
    

    return 0;
    
}


