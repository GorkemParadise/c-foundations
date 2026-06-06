/*
SORU 1

Bir karakter dizisi (string) içindeki sözcük sayısını döndüren 
int word_count(char *s) fonksiyonunu yazınız. 
Birden fazla ardışık boşluk olabileceğini göz önünde bulundurunuz.
Örnek: " merhaba     dünya " → 2



char *get_nth_word_end(char *s, int n) fonksiyonunu yazınız. 
Bu fonksiyon, s dizisinde n. sözcüğün son karakterini gösteren pointer'ı döndürmelidir. 
Sözcük bulunamazsa NULL döndürünüz.



void reverse_nth_word(char *dest, char *src, int n) fonksiyonunu yazınız. 
src içindeki n. sözcüğü tersten alıp dest'e kopyalamalıdır. 
Yukarıdaki fonksiyonları kullanabilirsiniz.
Örnek: src = "ali veli ayse", n = 2 → dest = "ilev"
*/




/* 
SORU 2

Bir tamsayının basamaklarının çarpımını hesaplayan 
int digit_product(int n) rekursif fonksiyonunu yazınız. 
n'nin negatif olmadığını varsayabilirsiniz.
Örnek: digit_product(347) → 84



Bir dizideki elemanların basamak çarpımlarını toplayan 
int sum_digit_products(int A[], int n) rekursif fonksiyonunu yazınız. 
Dizide negatif değerler olabilir; bu değerler atlanmalı (0 sayılmamalı), 
dizi sonuna gelindiğinde 0 döndürülmelidir.



Aşağıdaki fonksiyonun ne yaptığını açıklayınız 
ve örnek bir girdi için elle çalıştırınız (n = 0b10110110):

int mystery(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
*/




/*
SORU 3

Aşağıdaki yapıyı tanımlayınız: 
Student — char name[50], int id, float gpa alanlarına sahip olmalıdır.



void write_students(Student arr[], int n, char *filename) fonksiyonunu yazınız. 
Her öğrenciyi "isim id gpa\n" formatında dosyaya yazmalıdır.



Student find_top(char *filename) fonksiyonunu yazınız. 
Dosyayı okuyarak GPA'sı en yüksek öğrenciyi döndürmelidir. 
Dosyanın en az bir satır içerdiğini varsayabilirsiniz.

*/