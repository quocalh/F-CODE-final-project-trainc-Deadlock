#ifndef SYSTEM_H
#define SYSTEM_H

#include "../.inc/product.h"
#include "../.inc/time.h"

// SINGLETON
typedef struct {
  Product *products;
  int ProductCount;
  TimeHandler timeHandler;

} System;

void AddItem(System *system, Product newProduct);
void ModifyItem(System *system, char *ProdudctID);
void DeleteProduct(System *system, char *ProductID);

void ImportItem(System *system, int Quantity, char *ProductID);
void ExportItem(System *system, int Quantity, char *ProductID);

void DisplayStocks(System *system);

void WarningOutofStock(System *system);
void SearchItem(System *system); // case insensitive

void ImportData(System *system);
void ExportData(System *system);

void DisplayProductLog(System *system);
void ComputeProfit(System *system);

void SetLowStockThreshold(System *system);
void DisplayProductCatergorized(System *system);

void DisplayProductAlphabeticOrder(System *system);
void DisplayStockRemainOrder(System *system);

void ExportStockRemained(System *system);
void ExportTransactionHistory(System *system);

void ExitGracefully(System *system);

#endif
