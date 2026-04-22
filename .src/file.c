//ĐỌC FILE:
#include <stdio.h>
#include "../.inc/file.h"
void hienThiDanhSach(char duongDan[]) 
{
    FILE *f = fopen(duongDan, "r");
    if (f == NULL) 
    {
        printf("Loi: khong tim thay file tai duong dan: %s\n", duongDan);
        return;
    }
    char ten[50];
    int sl;

    printf("--- DANH SACH KHO HANG ---\n");
    while (fscanf(f, "%s %d", ten, &sl) == 2) 
    {
        printf("San pham: %s | So luong: %d\n", ten, sl);
    }
    fclose(f);
}
int main() 
{
    char duongDan[100];
    printf("Nhap duong dan file (vd: io/products.dat): ");
    scanf("%s", duongDan);
    hienThiDanhSach(duongDan);
    return 0;
}
//GHI FILE:
void ghiMoiHoanToan(char duongDan[], char ten[], int sl) 
{
    FILE *f = fopen(duongDan, "w");
    if (f == NULL) 
    {
        printf("Loi: Khong tim thay hoac khong mo duoc file!\n");
        return; 
    }
    fprintf(f, "%s %d\n", ten, sl);
    fclose(f);
    printf("Da ghi moi san pham: %s thanh cong!\n", ten);
}
int main() 
{
    char duongDan[100] = "io/products.dat"; 
    char tenSP[50];
    int soLuong;
    printf("--- CHE DO GHI DE (XOA CU) ---\n");
    printf("Nhap ten san pham: ");
    scanf("%s", tenSP);
    printf("Nhap so luong: ");
    scanf("%d", &soLuong);
    ghiMoiHoanToan(duongDan, tenSP, soLuong);

    return 0;
}