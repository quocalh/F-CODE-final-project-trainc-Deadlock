#include "../.inc/array.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// typedef struct {
//   Product *ptr;
//   int quantity;
// } ProductArray;

// typedef struct {
//   char productID[50];
//   char productName[50];
//   char Catergory[50];
//   int quantity;
//   unsigned long int priceImport;
//   unsigned long int priceSelling;
// } Product;

void AddProduct(ProductArray *array, int ProductID, char *productName,
                char *Category, int quantity, unsigned long int priceImport,
                unsigned long int priceSelling) {
  Product *product_slot = &array->ptr[array->quantity];

  // ID | Name | Category | quantity | Price Import | Price Selling
  product_slot->productID = ProductID;
  strcpy(product_slot->productName, productName);
  strcpy(product_slot->Catergory, Category);
  product_slot->quantity = quantity;
  product_slot->priceImport = priceImport;
  product_slot->priceSelling = priceSelling;

  array->quantity++;
}
void DeleteProduct(ProductArray *array, int ProductID);
