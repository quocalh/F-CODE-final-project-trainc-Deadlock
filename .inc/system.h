#ifndef SYSTEM_H
#define SYSTEM_H

#include "../.inc/product.h"
#include "../.inc/time_handler.h"

// SINGLETON
typedef struct {
  Product *products;
  int ProductCount;
  TimeHandler timeHandler;

  int ID_generator;

} System;

// to modify products
void AddNewProduct(System *system, unsigned int ProductID, char Category[50],
                   unsigned int quantity, unsigned long int importPrice,
                   unsigned long int sellingPrice,
                   unsigned int lowStockThreshold); // sparse set functions
void ModifyProduct(System *system, unsigned int ProductID, char Category[50],
                   unsigned long int importPrice, unsigned long sellingPrice,
                   unsigned int lowStockThreshold);
void DeleteProduct(System *system, char *ProductID); // sparse set functions

//
void ImportProduct(System *system, int Quantity, char *ProductID);
void ExportProduct(System *system, int Quantity, char *ProductID);

void DisplayProducts(System *system);

void SearchItem(System *system); // case insensitive
void WarningOutofStock(System *system);

void ImportData(System *system);
void ExportData(System *system);

void DisplayProductLog(System *system);
void ComputeProfit(System *system);

void SetLowStockThreshold(System *system);
void DisplayProductCatergorized(System *system);

void DisplaySortedByAlphabeticOrder(System *system);
void DisplaySortedByStockQuantity(System *system);

void ExportStockRemained(System *system);
void ExportTransactionHistory(System *system);

void ExitGracefully(System *system);

#endif
