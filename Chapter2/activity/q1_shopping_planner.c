#include<stdio.h>
int main()
{
    int Shopping_Budget, Product_price , Piece;
    printf("Enter your budget: ");
    scanf("%d", &Shopping_Budget);
    printf("Enter Product price:");
    scanf("%d", &Product_price);
    Piece = Shopping_Budget / Product_price; // หาจำนวนชิ้นที่ซื้อได้
    printf("You can buy %d pieces\n", Piece);
    printf("Your change is %d baht\n ",Shopping_Budget - (Piece * Product_price)); // หาจำนวนเงินทอน
    return 0;
}