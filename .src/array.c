#include "../.inc/array.h"
#include <string.h>

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

void DeleteProduct(ProductArray *array, int ProductID) {
  Product *product_slot = array->ptr + ProductID;
  // Flag as deleted, reset all the attributes
  product_slot->lowStockThreshold = -1;
  product_slot->quantity = 0;
}
