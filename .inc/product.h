#ifndef PRODUCT_H
#define PRODUCT_H

#define MAX_STRING_LENGTH 50

typedef struct {
  unsigned int productID;
  char productName[MAX_STRING_LENGTH];
  char Catergory[MAX_STRING_LENGTH];
  unsigned int quantity;
  unsigned long int priceImport;
  unsigned long int priceSelling;
  unsigned int lowStockThreshold;
} Product;

#endif
