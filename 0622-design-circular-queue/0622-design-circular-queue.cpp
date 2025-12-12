class MyCircularQueue {
private:
    vector<int> data; // Verileri tutacağımız hafıza
    int head;         // Kuyruğun başı (Pop yapılacak yer)
    int count;        // Şu an kuyrukta kaç eleman var?
    int capacity;     // Kuyruğun maksimum kapasitesi (K)

public:
    // 1. Kurucu (Constructor): Hafızayı ayır
    MyCircularQueue(int k) {
        data.resize(k);
        capacity = k;
        head = 0;
        count = 0;
    }
    
    // 2. Ekleme (EnQueue): Kuyruğun arkasına ekle
    bool enQueue(int value) {
        if (isFull()) return false; // Yer yoksa ekleyemeyiz
        
        // Mantık: Kuyruğun sonu neresi?
        // (Başlangıç + Mevcut Sayı) % Kapasite
        // Örn: Başlangıç 2, 3 eleman var. Sonraki boş yer (2+3)%5 = 0. indeks
        int tail = (head + count) % capacity;
        data[tail] = value;
        count++;
        return true;
    }
    
    // 3. Çıkarma (DeQueue): Kuyruğun başından sil
    bool deQueue() {
        if (isEmpty()) return false;
        
        // Başı bir adım sağa kaydır (Dairesel olarak)
        head = (head + 1) % capacity;
        count--;
        return true;
    }
    
    // 4. En Öndeki Eleman (Front)
    int Front() {
        if (isEmpty()) return -1;
        return data[head];
    }
    
    // 5. En Arkadaki Eleman (Rear)
    int Rear() {
        if (isEmpty()) return -1;
        
        // Burası biraz trikli: Son eleman, (head + count - 1) konumundadır.
        // Modulo alarak dairesel karşılığını buluyoruz.
        int tailIndex = (head + count - 1) % capacity;
        return data[tailIndex];
    }
    
    // 6. Boş mu?
    bool isEmpty() {
        return count == 0;
    }
    
    // 7. Dolu mu?
    bool isFull() {
        return count == capacity;
    }
};