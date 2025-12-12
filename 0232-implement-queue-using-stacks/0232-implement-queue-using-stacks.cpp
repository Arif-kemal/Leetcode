class MyQueue {
    stack<int>s1;
    stack<int>s2;
public:MyQueue() {
        // Constructor (gerekirse init işlemleri)
    }
    
    // Kuyruğun arkasına eleman ekle
    void push(int x) {
        s1.push(x);
    }
    
    // Kuyruğun önünden eleman çıkar ve döndür
    int pop() {
        // Eğer çıkış kutusu boşsa, giriştekileri aktar
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        // Artık s2'nin tepesinde en eski eleman var
        int deger = s2.top();
        s2.pop();
        return deger;
    }
    
    // Kuyruğun önündeki elemanı silmeden göster
    int peek() {
        // Pop ile aynı mantık, sadece silme (s2.pop) kısmı yok
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    
    // Kuyruk tamamen boş mu?
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */