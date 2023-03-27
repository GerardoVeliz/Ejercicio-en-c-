//Nombre: Gerardo Veliz
//Trabajo nro.: ejercicio de clase
//Descripcion:
/*LAS AUTORIDADES DE LA CARRERA TUP DE LA UTN ESTAN REALIZANDO UN ANALISIS DE LOS CURSOS VIRTUALES DE LA
DISTINTAS MATERIAS POR CADA UNA DE LAS 20 MATERIAS DE LA CARRERA TIENE LA SIGUIENTE INFORMACION.

-NUMERO DE MATERIA (ENTRE 1 Y 20) , NOMBRE, CANTIDAD DE ALUMNOS INSCRIPTOS,CANTIDAD DE PROFESORES.

ADEMAS POR CADA INGRESO DE LOS ESTUDIANTES AL AULA VIRTUAL SE REGISTRA LO SIEGUIENTE:
-LEGAJO,FECHA DE ACCESO(DIA Y MES ), NUMERO DE LA MATERIA QUE INGRESO , CANTIDAD DE HORAS(NUMERO REAL)

EL FIN DE LOS DATOS SE INDICA CON UN NUMERO DE LEGAJO IGUAL A 0.

SE QUIERE RESPONDER A LAS SIGUIENTES PREGUNTAS.

A- LAS MATERIAS QUE NO TUVIERON ACCESO DE ALUMNOS NUNCA.
B-LA MATERIA QUE MAS CANTIDAD DE HORAS REGISTRO DE ACCESO DE ALUMNOS.
C- POR CADA MATERIA Y DIA DE MARZO, LA CANTIDAD DE ACCESO DE ALUMNOS A LAS AULAS VIRTUALES.

-HACER UN PROGRAMA EN EL MARCO DE UN PROYECTO DE CODEBLOCKS CON UN MENU CON OPCIONES PARA CARGAR LOS DATOS,
MOSTRAR CADA PUNTO Y SALIR DEL PROGRAMA.*/

#include <iostream>
#include <cstring>
using namespace std ;

    //FUNCIONES
    void mostrarMatriz(char mNombre [][30]){
    for (int x=0 ; x<5 ;x++){
        for(int y=0;y<30;y++){
            cout << mNombre[x][y];
        }
        cout<< endl ;
    }


    }
    void mostrarAccesosMarzo(int  matriz [][31]){
    for(int x=0;x<20;x++){
            cout << "Materia: " << x+1;
        for (int y =0 ; y<31;y++){
            cout <<"\t"<< matriz [x][y];
        }
    cout << endl ;
    }
    }
    void mostrarVectores(int vNum[],int tam){

    for (int x=0 ;x<tam;x++){
        cout << vNum[x]<< endl ;
    }
    }
    int buscarNroMAteria(int v[],int tam,int nroBuscado){

    for (int x=0;x<tam;x++){
        if (v[x]== nroBuscado){
            return x ;
        }

    }
    return -1 ;

}

    int main (){
    int opciones;
//materias :
	const int tam=20 ;

	int vNroMateria[tam]={};
	int vCantidadAlumnos[tam]={};
	int  vCantidadProfesores[tam]={};
	char mNombreMaterias [20][30]={};


	int vCantidadTotalHsMaterias[20]={};
// alumnos:

    int dia, mes , legajo , numMateria,cantidaHoras;
    int mCantidadAccesosMarzo[20][31]={};


	do{
			cout << "Menu: " << endl ;
			cout << "-----------------------------------------------"<< endl ;
			cout << "1-Cargar materias: " << endl ;
			cout << "2-Mostrar 1er lote: "<< endl ;
			cout << "3-Cargar alumnos: "<< endl ;
			cout << "0-Salir.";
			cout << "------------------------------------------------"<< endl ;
			cout << "Elegi una opcion: ";
			cin >> opciones;
			system("cls");

			switch(opciones){
		case 1:
			for (int x=0 ; x<5;x++){

            char vNombreMateria[30]={};

			cout << "Ingrese el numero de la materia: "<< endl ;
			cin >>vNroMateria[x];
			cout << "Ingrese la cantidad de profesores: "<< endl ;
			cin >>vCantidadProfesores[x];
			cout << "Ingrese cantidad de alumnos: "<< endl ;
			cin >>vCantidadAlumnos[x];
			cin.ignore();
			cout << "Ingrese el nombre de la materia"<< endl ;
			cin.getline (vNombreMateria,30);

			//cargar la matriz con nombre de la materia
			for (int y =0 ; y<30;y++){
                mNombreMaterias[x][y]=vNombreMateria[y];
			}

            system("pause");
            system("cls");
			}
			system("pause");
            system("cls");
			break;
		case 2:
		    cout << "materias cargadas : "<< endl ;
		    mostrarMatriz(mNombreMaterias);
		    cout<< endl <<"numero de materia, cantidad de alumnos y cantidad de profesores: "<<endl ;
		    mostrarVectores(vNroMateria,tam);
            cout << endl ;
            mostrarVectores(vCantidadAlumnos,tam);
            cout << endl ;
            mostrarVectores(vCantidadProfesores,tam);
            system("pause");
            system("cls");
			break;
        case 3:
            bool f=false;
            int maxHoras;
            int maxNroMateria;
            int cont=0 ;
            int nroIndice;
            cout <<"MENU ALUMNO" << endl ;
            cout <<"---------------------"<<endl ;
             cout<< "ingrese Legajo: ";
                cin>>legajo ;
            while (legajo!=0){
                cout<< "ingrese fecha de acceso(dia del 1 al 31): ";
                cin>>dia ;
                cout<< "ingrese fecha de acceso(mes del 1 al 12):";
                cin>> mes;
                cout<< "ingrese el numero de la materia que ingreso: ";
                cin>> numMateria;
                cout<< "ingrese cantidad de horas(numero real): ";
                cin>> cantidaHoras;

                cout<< "----------------------"<<"Punto A B y C"<<"----------------------"<<endl;

//punto a y b
                vCantidadTotalHsMaterias[numMateria-1]+=cantidaHoras;
//punto c
                if (mes == 3){
                        mCantidadAccesosMarzo[numMateria-1][dia-1]+=1;

                }





    cout <<
//punto a materias que nunca tuvieron ingresos:
    for (int x=0 ; x<20;x++){
    if (vCantidadTotalHsMaterias[x]==0){
        cout<<"numero de materia no ingresada aun: " << x+1<<endl ;   ;
    }
}
        cout<<endl;
//punto b: materia con mayor cantidad de horas :
    for (int x=0 ; x<20;x++){
        if (f==false){
                maxHoras=vCantidadTotalHsMaterias[x];
                maxNroMateria=x+1;
                f=true;

        } if (vCantidadTotalHsMaterias[x]>maxHoras){
                maxHoras=vCantidadTotalHsMaterias[x];
                maxNroMateria=x+1;
        }
    }
    nroIndice=buscarNroMAteria(vNroMateria,tam,maxNroMateria);
    cout << "La materia con mas cantidad de horas es la materia: ";
    for (int x=0;x<30;x++){
        cout<<mNombreMaterias[nroIndice][x];
    }
   // cout << "la materia con mas cantidad de hora es la numero : " << vNombreMateria[nroIndice]<< endl ;

//punto c: materias con accesos en marzo por dia por mateeria
        cout <<endl ;
        mostrarAccesosMarzo(mCantidadAccesosMarzo);


            system ("pause");
            system ("cls");

//pido el legajo para ver si cortos
                cout<< "ingrese Legajo: ";
                cin>>legajo ;
            }
            system ("pause");
            system ("cls");
            break;

			}


		}while (opciones!=0);





return 0;
}
