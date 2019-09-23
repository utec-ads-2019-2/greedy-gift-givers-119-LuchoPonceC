#include <bits/stdc++.h>

using namespace std;

typedef unordered_map<string,int> mapa;

int main(){
	int invitados,dinero,cantidad,repartido,temporal;
	string nombre;
	vector<string> nombres;
	while(cin>>invitados){
		mapa personas;
		std::cout<<std::endl;
		for(int i=0;i<invitados;i++){
			//std::cout<<nombre<<std::endl;
			cin>>nombre;
			personas.insert({nombre,0});
			nombres.push_back(nombre);
			

		}


		for(int i=0;i<invitados;i++){
			cin>>nombre>>dinero>>repartido;
			if(repartido != 0 and dinero % repartido != 0 ){
				temporal = dinero/repartido;
				dinero = repartido*temporal;
			}

			if(repartido != 0){
				personas[nombre]-=dinero;
				for(int j=0;j<repartido;j++){
					cin>>nombre;
					personas[nombre]+=(dinero/repartido);
				}
			}
			
		}

		for(int i=0; i<nombres.size() ; i++){
			std::cout<<nombres[i]<<" "<<personas[nombres[i]]<<std::endl;
		}
		
		nombres.clear();
		personas.clear();
	
	}
}