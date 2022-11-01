
#include<iostream>

using namespace std; 

int main(){

    int precio;
    float iva = .16, total_con = 0, total_sin = 0;
    
    cout<<"¿Cuanto cuesta tu producto?: ";cin>>precio;
    
    total_sin = precio * iva; 
    total_con = total_sin + precio;

    cout<<"\n El precio con IVA es: "<<total_con<<endl;

    return 0;

}
