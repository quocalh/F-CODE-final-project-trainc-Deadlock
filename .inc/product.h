#ifndef PRODUCT_H
#define PRODUCT_H

typedef struct {
  char productID[50];
  char productName[50];
  char Catergory[50];
  int quantity;
  unsigned long int priceImport;
  unsigned long int priceSelling;
} Product;

#endif
