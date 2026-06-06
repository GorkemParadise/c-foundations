/*
SORU 1

void swap(int *a, int *b) fonksiyonunu pointer kullanarak yazınız. 
Ardından bu fonksiyonu kullanan 
void bubble_sort(int A[], int n) fonksiyonunu yazınız.



int *find_max_ptr(int A[], int n) fonksiyonunu yazınız. 
Dizideki en büyük elemanın adresini döndürmelidir. 
Birden fazla maksimum değer varsa ilkinin adresini döndürünüz.
Ardından main'de bu pointer'ı kullanarak maksimum değeri ikiye katlayınız (dizi değişmeli).



Dizideki ilk kez üç kez tekrar eden elemanı bulan, 
ardından bu elemanın birinci ve ikinci tekrarı arasındaki elemanların toplamı ile ikinci ve üçüncü tekrarı arasındaki toplamın farkını döndüren 
int triple_diff(int A[], int size) fonksiyonunu yazınız.

Örnek: A = {1, 2, 9, 12, 13, 9, 15, 16, 9, 5} → -6
*/



/*
SORU 2

Bir dizinin maksimum elemanını recursive olarak bulan 
int max_recursive(int A[], int n) fonksiyonunu yazınız. 
n eleman sayısıdır.



Bir tamsayının ikili gösterimindeki 1 bitlerinin sayısını döndüren 
int count_ones(unsigned int n) recursive fonksiyonunu yazınız (döngü kullanmayınız).



Aşağıdaki fonksiyonun çıktısını yazınız ve her satırın neden o değeri ürettiğini kısaca açıklayınız:

int main() {
    unsigned int x = 0xAC;  10101100 
    printf("%d\n", x & 0x0F);
    printf("%d\n", x | 0x03);
    printf("%d\n", x ^ 0xFF);
    printf("%d\n", x >> 2);
    printf("%d\n", ~x & 0xFF);
    return 0;
}
*/



/*
SORU 3

Aşağıdaki yapıyı tanımlayınız: 
Product — char name[60], int code, double price, int stock 
alanlarına sahip olmalıdır.



int load_products(char *filename, Product arr[], int max) fonksiyonunu yazınız. 
Dosyadan ürünleri okuyup diziye doldurmali, yüklenen ürün sayısını döndürmelidir. 
Her satır "isim kod fiyat stok" formatındadır.



void save_low_stock(Product arr[], int n, int threshold, char *outfile) fonksiyonunu yazınız. 
Stok miktarı threshold'dan düşük olan ürünleri aynı formatta yeni bir dosyaya kaydetmelidir.
*/

