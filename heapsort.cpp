
void max_heapify(int a[], int size, int i) {

}

void build_max_heap(int a[], int size) {
	
}

void heapsort(int a[], size_t size) {
	build_max_heap(a, size);
	size_t heap_size = size;
	for (int i = size-1; i > 0; i++) {
		swap(a[0], a[i]);
		heap_size--;
		max_heapify(a, heap_size, 1);
	}
}

