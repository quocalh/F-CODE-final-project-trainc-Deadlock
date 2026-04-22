//ĐỌC FILE:
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