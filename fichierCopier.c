#include<stdlib.h>
#include<stdio.h>

struct voiture
{
	int numero;
	char marque[30];
	float prix;
};
struct voiture v;

int main()
{
	FILE *f;
	FILE *fs;
	int i;
	struct voiture c;
	c.prix=0;
	//modification
	f=fopen("Entree.txt","r");
	fs=fopen("copie.txt","w");
	for(i=0;i<3;i++)
	{
		fscanf(f,"%d",&v.numero);
		fscanf(f,"%s",v.marque);
		fscanf(f,"%f",&v.prix);
		printf("%d %s %f\n",v.numero,v.marque,v.prix);
		if(i==1)
		v.prix=8000;
		fprintf(fs,"%d %s %f\n",v.numero,v.marque,v.prix);
	}
/*	printf("veuillez entrer le noveau enregistrement");
	
		scanf("%d",&v.numero);
		scanf("%s",v.marque);
		scanf("%f",&v.prix);
		
		fprintf(fs,"%d ",v.numero);
		fprintf(fs,"%s ",v.marque);
		fprintf(fs,"%f\n",v.prix);*/
		

	
	
	//printf("%d %s %f\n",c.numero,c.marque,c.prix);
/*	fs=fopen("Sortie.txt","w");
	fprintf(fs,"%d %s %f",c.numero,c.marque,c.prix);*/
	
	fclose(f);
	fclose(fs);
	
	getch();
}
