/*
SORU 1

int my_strlen(char *s) — string uzunluğunu döndürür. 
Pointer aritmetiği kullanınız, s[i] gösterimi yasak.



char *find_char(char *s, char c) — s içinde ilk c karakterinin adresini döndürür; bulunamazsa NULL.
Örnek: find_char("merhaba", 'r') → &s[2]



char *word_start(char *s, int n) — s içindeki n. sözcüğün ilk karakterinin adresini döndürür (1-indexed). 
Sözcük yoksa NULL. Birden fazla ardışık boşluk olabilir.
Örnek: word_start(" ali   veli ayse", 2) → "veli ayse"'nin başına işaret eden pointer
*/




/*
SORU 2

Bir tamsayının tersine çevrilmiş basamak toplamını recursive döndüren 
int rev_digit_sum(int n) fonksiyonunu yazınız.
Mantık: her recursion çağrıda en soldaki basamağı al. 
Yani rev_digit_sum(347) = 3 + 4 + 7 = 14 — ama bunu sağdan değil soldan sökerek yapmalısın.



Bir dizideki çift indisli (0, 2, 4, …) elemanların basamak toplamları toplamını recursion hesaplayan 
int even_index_digit_sum(int A[], int n) fonksiyonunu yazınız. 
Negatif eleman varsa değerinin mutlak değerini kullanınız. 
n = son geçerli indis.



Aşağıdaki recursion fonksiyonu n = 6 için elle çalıştırınız. Her çağrı için hangi dalın seçildiğini ve dönüş değerini gösteriniz.

int f(int n) {
    if (n == 0) return 0;
    if (n % 2 == 0)
        return (n & 0xF) + f(n / 2);
    else
        return f(n - 1) ^ f(n - 3);
}
*/




/*
SORU 3

9×9'luk bir ızgara görülmektedir. 
Programa n verilecek (1 ≤ n ≤ 4); program bu ızgara üzerinde aşağıdaki motifi printf ile çizdirecektir:

Örnek çıktı — n = 2 :

. . . . . . . . .
. . . . . . . . .
. . * * * * * . .
. . * . . . * . .
. . * . * . * . .
. . * . . . * . .
. . * * * * * . .
. . . . . . . . .
. . . . . . . . .

Örnek çıktı — n = 3 :

. . . . . . . . .
. * * * * * * * .
. * . . . . . * .
. * . * * * . * .
. * . * . * . * .
. * . * * * . * .
. * . . . . . * .
. * * * * * * * .
. . . . . . . . .

Kural: Kare her zaman 9×9 ızgara üzerine ortalanmış, 
n iç içe kare sayısını belirtir. n=1 → sadece merkez *, n=2 → 5×5 çerçeve + merkez, n=3 → 7×7 + 5×5 çerçeve + merkez, n=4 → tam 9×9.

void print_row(int row, int col, int left, int right, int top, int bot) 
fonksiyonunu recursionla yazınız. 
Verilen satırdaki bir kolonu yazdırır; satır sona erince yeni satır basar. Döngü yasak.



void print_grid(int row, int left, int right, int top, int bot) fonksiyonunu recursionla yazınız. Satırları teker teker print_row'a iletir.




void draw_motif(int n) fonksiyonunu yazınız. n adet iç içe kare için sınırları hesaplayıp print_grid'i çağırmalıdır. 
Birden fazla katman varken her katman öncekinin üzerine baskı yapar — merkez her zaman *.
*/