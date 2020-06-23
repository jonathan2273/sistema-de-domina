#include<stdio.h>
#include<stdlib.h>
int main(){
	
		int x=0;
	do
	{
	        printf("\n Menu \n");
	        printf("1. Nombre_Empleado");
	        printf("2. Turno_Empleado");
	        printf("3. Sucursal_Empleado");
	        printf("4. Departamento_Empleado");
	        printf("5. Puesto_Empleado");
            printf("6. Salario_Empleado");
	        printf("7. Desempeño_Empledo");
	        printf("8. NmSeguroSocial_Empleado");
	        printf("9. Antiguedad_Empleado");
	        printf("10. Salir");
	        int Nombre_Empleado, Turno_Empleado, Sucursal_Empleado, Departamento_Empleado, Puesto_Empleado, Salario_Empleado,Desempenio_Empleado,NmSeguroSocial_Empleado, Antiguedad_Empleado, Salir;
	        printf("Elija una opcion: ");
	        scanf("%d", &x);
	   switch(x)
	   {
		case 1:
			printf("\nIngresa tu nombre: ");
			scanf("%d", &Nombre_Empleado);
			break;
		case 2:
			printf("\n¿En que turno laboras?: ");
			scanf("%d", &Turno_Empleado);
			break;
		case 3:
			printf("\n¿En que sucursal te encuentras?: ");
			scanf("%d", &Sucursal_Empleado);
			break;
		case 4:
			printf("\n¿En que departamento de venta te encuentras?: ");
			scanf("%d", &Departamento_Empleado);
			break;
		case 5:
			printf("\n¿Cúal es tu puesto laboral: ");
			scanf("%d", &Puesto_Empleado);
			break;
		case 6:
			printf("\n¿Cuanto ganas?: ");
			scanf("%d", &Salario_Empleado);
			break;
		case 7:
			printf("\n¿Eres proactivo o poco activo?: ");
			scanf("%d", &Desempenio_Empleado);
			break;
		case 8:
			printf("\n¿Eres asegurado y cual es tu numero de Seguridad Social?: ");
			scanf("%d", &NmSeguroSocial_Empleado);
			break;
		case 9:
			printf("\n¿Cuanto tiempo llevas trabajando?: ");
			scanf("%d", &Antiguedad_Empleado);
			break;
		case 10:
			printf("\nGracias por ingresar tus datos, en un momento tendras tu formato de Nomina: ");
			scanf("%d", &Salir);
			break;
			default:
				printf("Opcion incorrecta, ingresa de nuevo\n");
        }
			
	}while(x<=9&&x>0);
	return 0;
}
