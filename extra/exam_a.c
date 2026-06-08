#include <stdio.h>


// SORU 1
/*
Bir karakter dizisi (string) içindeki sözcük sayısını döndüren 
int word_count(char *s) fonksiyonunu yazınız. 
Birden fazla ardışık boşluk olabileceğini göz önünde bulundurunuz.
Örnek: " merhaba     dünya " → 2
*/
int word_count(char *s) {
    int count = 0;
    char *ptr = s;
    while (*ptr) {
        if (*ptr == ' ' && ptr != s && *(ptr - 1) != ' ') count++;
        ptr++;
    } if (ptr != s && *(ptr - 1) != ' ') return count + 1;
    return count;
}


/*
char *get_nth_word_end(char *s, int n) fonksiyonunu yazınız. 
Bu fonksiyon, s dizisinde n. sözcüğün son karakterini gösteren pointer'ı döndürmelidir. 
Sözcük bulunamazsa NULL döndürünüz.
*/
char *get_nth_word_end(char *s, int n) {
    int count = 0;
    while (*s) {
        if (*s == ' ' && *(s - 1) != ' ') {
            count++;
            if (count == n) return s - 1;
        } s++;
    } if (*(s - 1) != ' ') {
        count++;
        if (count == n) return s - 1;
    } return NULL;
}


/*
void reverse_nth_word(char *dest, char *src, int n) fonksiyonunu yazınız. 
src içindeki n. sözcüğü tersten alıp dest'e kopyalamalıdır. 
Yukarıdaki fonksiyonları kullanabilirsiniz.
Örnek: src = "ali veli ayse", n = 2 → dest = "ilev"
*/
void reverse_nth_word(char *dest, char *src, int n) {
    char *end = get_nth_word_end(src, n);
    char *start;
    if (end == NULL) {
        *dest = '\0';
        return;
    } if (n == 1) {
        start = src;
        while (*start == ' ')
            start++;
    } else start = get_nth_word_end(src, n - 1) + 2;
    while (end >= start) {
        *dest = *end;
        dest++;
        end--;
    } *dest = '\0';
}


// SORU 2
/* 
Bir tamsayının basamaklarının çarpımını hesaplayan 
int digit_product(int n) rekursif fonksiyonunu yazınız. 
n'nin negatif olmadığını varsayabilirsiniz.
Örnek: digit_product(347) → 84
*/
int digit_product(int n) {
    if (n == 0) return 1;
    return (n % 10) * digit_product(n / 10);
}


/*
Bir dizideki elemanların basamak çarpımlarını toplayan 
int sum_digit_products(int A[], int n) rekursif fonksiyonunu yazınız. 
Dizide negatif değerler olabilir; bu değerler atlanmalı (0 sayılmamalı), 
dizi sonuna gelindiğinde 0 döndürülmelidir.
*/
int sum_digit_products(int A[], int n) {
    if (n == 0) return 0;
    int product = digit_product(A[0]);
    if (A[0] < 0) product = 0;
    return product + sum_digit_products(A + 1, n - 1);
}


/*
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
int mystery(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}



// SORU 3
/*
Aşağıdaki yapıyı tanımlayınız: 
Student — char name[50], int id, float gpa alanlarına sahip olmalıdır.
*/
typedef struct {
    char name[50];
    int id;
    float gpa;
} Student;


/*
void write_students(Student arr[], int n, char *filename) fonksiyonunu yazınız. 
Her öğrenciyi "isim id gpa\n" formatında dosyaya yazmalıdır.
*/
void write_students(Student arr[], int n, char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Dosya açılamadı");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f\n", arr[i].name, arr[i].id, arr[i].gpa);
    }
    fclose(file);
}

void write_student2(Student arr[], int n, char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Dosya açılamadı");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f\n", arr[i].name, arr[i].id, arr[i].gpa);
    }
}


/*
Student find_top(char *filename) fonksiyonunu yazınız. 
Dosyayı okuyarak GPA'sı en yüksek öğrenciyi döndürmelidir. 
Dosyanın en az bir satır içerdiğini varsayabilirsiniz.
*/

float find_top(char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Dosya açılamadı");
        return -1;
    }
    Student top_student;
    fscanf(file, "%s %d %f", top_student.name, &top_student.id, &top_student.gpa);
    while (!feof(file)) {
        Student current;
        fscanf(file, "%s %d %f", current.name, &current.id, &current.gpa);
        if (current.gpa > top_student.gpa) {
            top_student = current;
        }
    }
    fclose(file);
    return top_student.gpa;
}




int main() {

    char str[] = " merhaba     dünya ";
    printf("Word count: %d\n", word_count(str));

    char dest[50];
    reverse_nth_word(dest, str, 2);
    printf("Reversed 2nd word: %s\n", dest);

    int A[] = {123, -45, 67};
    printf("Sum of digit products: %d\n", sum_digit_products(A, 3));

    printf("mystery(0b10110110) = %d\n", mystery(0b10110110)); // Output: 5
    printf("mystery(0b11111111) = %d\n", mystery(0b11111111)); // Output: 8
    // Fonksiyonun amacı: Verilen bir tamsayıdaki 1 bitlerinin sayısını döndürür.

    return 0;
}