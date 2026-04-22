#ifndef ARRAY_H
#define ARRAY_H

#include "../.inc/product.h"

// missed opportunity to utilize a sparse set, bruh bruh bruh bruh bruh
// nah, this is it, i will handle the sparse set thingy
// whatever

typedef struct {
  Product *ptr;
  int quantity;
  int currentmaxQuantity;
  int maxQuantity;
} ProductArray;

void AddProduct(ProductArray *array, int ProductID, char *productName,
                char *Category, int quantity, unsigned long int priceImport,
                unsigned long int priceSelling);

void DeleteProduct(ProductArray *array, int ProductID);

#endif
