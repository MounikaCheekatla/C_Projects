#include <stdio.h>

int main()
{
char name[50];
int phone_number;
int customer_id;

int body_soap;
int body_spray;
int hair_cream;
int hair_spray;

int sugar;
int tea;
int coffee;
int rice;
int wheat;

int pepsi;
int sprite;
int coke;
int mojitos;
int thumbs_up;

int total;
int cosmetics_total;
int groceries_total;
int beverages_total;

printf("-----------------\n");
printf("BILLING SYSTEM\n");
printf("-----------------\n");
printf("Customer Details\n\n");

printf("Customer Name : ");
scanf("%s", &name);
printf("Customer Number : ");
scanf("%d", &phone_number);
printf("Customer ID : ");
scanf("%d", &customer_id);

printf("-----------------\n");

printf("COSMETICS\n\n");

printf("Body Soap ( Rs 20 ) : ");
scanf("%d", &body_soap);
printf("Body Spray ( Rs 70 ) : ");
scanf("%d", &body_spray);
printf("Hair Cream ( Rs 50 ) : ");
scanf("%d", &hair_cream);
printf("Hair Spray ( Rs 80 ) : ");
scanf("%d", &hair_spray);

printf("-----------------\n");

printf("GROCERIES\n\n");

printf("Sugar ( Rs 40 ) : ");
scanf("%d", &sugar);
printf("Tea ( Rs 30) : ");
scanf("%d", &tea);
printf("Coffee ( Rs 50) : ");
scanf("%d", &coffee);
printf("Rice ( Rs 900) : ");
scanf("%d", &rice);
printf("Wheat ( Rs 250) : ");
scanf("%d", &wheat);

printf("-----------------\n");

printf("BEVERAGES\n\n");

printf("Pepsi ( Rs 40) : ");
scanf("%d", &pepsi);
printf("Sprite ( Rs 45) : ");
scanf("%d", &sprite);
printf("Coke ( Rs 25) : ");
scanf("%d", &coke);
printf("Mojitos ( Rs 30) : ");
scanf("%d", &mojitos);
printf("Thumbs-up ( Rs 45) : ");
scanf("%d", &thumbs_up);

printf("-----------------\n");

int boso;
int bosp;
int hc;
int hsp;

boso = 20 * body_soap;
bosp = 70 * body_spray;
hc = 50 * hair_cream;
hsp = 80 * hair_spray;
cosmetics_total = boso + bosp + hc + hsp;

printf("Body Soap : ");
printf("%d RS\n", boso);
printf("Body Spray : ");
printf("%d RS\n", bosp);
printf("Hair Cream : ");
printf("%d RS\n", hc);
printf("Hair Spray : ");
printf("%d RS\n", hsp);
printf("Total Cosmetic Price : ");
printf("%d RS\n", cosmetics_total);

printf("-----------------\n");

int s;
int t;
int c;
int r;
int w;

s = 40 * sugar;
t = 30 * tea;
c = 50 * coffee;
r = 900 * rice;
w = 250 * wheat;
groceries_total = s + t + c + r + w;

printf("Sugar : ");
printf("%d RS\n", s);
printf("Tea : ");
printf("%d RS\n", t);
printf("Coffee : ");
printf("%d RS\n", c);
printf("Rice : ");
printf("%d RS\n", r);
printf("Wheat : ");
printf("%d RS\n", w);
printf("Total Grocery Price : ");
printf("%d RS\n", groceries_total);

printf("-----------------\n");

int pep;
int spr;
int cok;
int moj;
int thu;

pep = 40 * pepsi;
spr = 45 * sprite;
cok = 25 * coke;
moj = 30 * mojitos;
thu = 45 * thumbs_up;
beverages_total = pep + spr + cok + moj + thu;

printf("Pepsi : ");
printf("%d RS\n", pep);
printf("Sprite : ");
printf("%d RS\n", spr);
printf("Coke : ");
printf("%d RS\n", cok);
printf("Mojito : ");
printf("%d RS\n", moj);
printf("Thumbs-up : ");
printf("%d RS\n", thu);
printf("Total Beverages Price : ");
printf("%d RS\n", beverages_total);

printf("-----------------\n");

total = cosmetics_total + groceries_total + beverages_total;

printf("Total Amount : ");
printf("%d RS\n", total);

printf("-----------------\n");

printf("------------------------------------------------------------\n");

printf("RK SUPER MARKET\n\n");

printf("Customer Name : ");
printf("%s\n", name);
printf("Customer Number : ");
printf("%d\n", phone_number);
printf("Customer Id : ");
printf("%d\n", customer_id);

printf("Product Name                        Quantity                        Price\n\n");
printf("Body Soap                           %d                              %d\n", body_soap, boso);
printf("Body Spray                          %d                              %d\n", body_spray, bosp);
printf("Hair Cream                          %d                              %d\n", hair_cream, hc);
printf("Hair Spray                          %d                              %d\n", hair_spray, hsp);
printf("Sugar                               %d                              %d\n", sugar, s);
printf("Tea                                 %d                              %d\n", tea, t);
printf("Coffee                              %d                              %d\n", coffee, c);
printf("Rice                                %d                              %d\n", rice, r);
printf("Wheat                               %d                              %d\n", wheat, w);
printf("Pepsi                               %d                              %d\n", pepsi, pep);
printf("Sprite                              %d                              %d\n", sprite, spr);
printf("coke                                %d                              %d\n", coke, cok);
printf("Mojitos                             %d                              %d\n", mojitos, moj);
printf("Thumbs-up                           %d                              %d\n", thumbs_up, thu);

printf("Cosmetic Total Price : %d\n\n", cosmetics_total);

printf("Grocery Total Price : %d\n\n", groceries_total);

printf("Beverage Total Price : %d\n\n", beverages_total);

printf("Total Price : %d\n\n", total);

printf("------------------------------------------------------------\n");

return 0;
}
