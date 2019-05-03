#include <fstream>
#include <iostream>

using namespace std;

int main (){
 
  fstream leerarchivo;
  string line;
 
  leerarchivo.open("Archivo_de_prueba.txt" );
 
  while (leerarchivo){
     
      getline (leerarchivo, line);
     
     
      cout<<line<<endl; 
         
     
     
  }
 
  
 leerarchivo.close ();



return 0;
}
