void citire()
{
FILE *fis;
unsigned short nNume;
if((fis=fopen("produse.dat","r"))==NULL)return;
for(;;){
if(fread(&nNume,sizeof(unsigned short),1,fis)==0){
fclose(fis);
return;
}
char *pNume=(char*)malloc((nNume+1)*sizeof(char));
if(pNume==NULL){
printf("memorie insuficienta");
fclose(fis);
eliberare();
exit(EXIT_FAILURE);
}
fread(pNume,sizeof(char),nNume,fis);
pNume[nNume]='\0';
produse[nProduse].nume=pNume;
fread(&produse[nProduse].pret,sizeof(float),1,fis);
nProduse++;
}
}
int main()
{
int optiune;
citire();
do{
printf("optiune: ");
scanf("%d",&optiune);
getchar();
switch(optiune){
case 1:adaugare();break;
case 2:afisare();break;
case 3:scriere();eliberare();break;
default:printf("optiune invalida\n");
}
}while(optiune!=3);
return 0;
}
