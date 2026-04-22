#include "../.inc/array.h"
#include <string.h>

// number of increased slot after each allocate requests
#define SLOT_INCREMENT 20

int max_int(int a, int b) { return (a > b) ? a : b; }

void AddProduct(ProductArray *array, int ProductID, char *productName,
                char *Category, int quantity, unsigned long int priceImport,
                unsigned long int priceSelling) {

  // if reach its maximum capacity, try to return a status or something
  if (array->quantity == array->maxQuantity) {
    return;
  }

  // if the current capacity is insufficient, ask the system to allocate more
  // storing resources (alloc)
  if (array->quantity >= array->currentmaxQuantity) {
    array->currentmaxQuantity +=
        max_int(array->maxQuantity, array->currentmaxQuantity + SLOT_INCREMENT);
  }

  // ID | Name | Category | quantity | Price Import | Price Selling
  Product *product_slot = &array->ptr[array->quantity];
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
