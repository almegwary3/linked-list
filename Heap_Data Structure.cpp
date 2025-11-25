// 
#include <iostream>
#include <vector>
using namespace std;

void heapifyUp(vector<int>& heap, int i) {
    int parent = (i - 1) / 2;
    if (i > 0 && heap[i] > heap[parent]) {
        swap(heap[i], heap[parent]);
        heapifyUp(heap, parent);
    }
}

void heapifyDown(vector<int>& heap, int i, int n) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && heap[left] > heap[largest])
        largest = left;

    if (right < n && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapifyDown(heap, largest, n);
    }
}

void insertHeap(vector<int>& heap, int value) {
    heap.push_back(value);               
    heapifyUp(heap, heap.size() - 1);      
}

void deleteRoot(vector<int>& heap) {
    int n = heap.size();
    if (n == 0) return;                  
    heap[0] = heap[n - 1];               
    heap.pop_back();                     
    heapifyDown(heap, 0, heap.size());   
}

//  دالة لعرض الهيب
void printHeap(const vector<int>& heap) {
    for (int x : heap) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> heap;

    // إضافة عناصر
    insertHeap(heap, 50);
    insertHeap(heap, 30);
    insertHeap(heap, 20);
    insertHeap(heap, 40);
    insertHeap(heap, 60);

    cout << "Heap بعد الإضافة: ";
    printHeap(heap);  // المفروض الجذر أكبر عنصر

    // حذف الجذر
    deleteRoot(heap);
    cout << "Heap بعد الحذف:   ";
    printHeap(heap);

    // إضافة عنصر جديد بعد الحذف
    insertHeap(heap, 55);
    cout << "Heap بعد إضافة 55: ";
    printHeap(heap);
}
