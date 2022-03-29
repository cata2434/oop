

static void testCapacity() {
	DynamicArray da;
	assert(da.length == 0);
	for (int i = 0; i < 10; i++)
		da.append(offer());
	assert(da.length() == 10);
	assert(da.data != nullptr);

}

static void testDestructor() {
	DynamicArray da;
	da.~DynamicArray();
	assert(da.data == nullptr);
}

static void testCapacityDeepCopyOfOther() {
	// line 46
	DynamicArray da_test;
	DynamicArray da(da_test);
	assert(da2.length() == da_test.length());
	assert(da2.capacity() == da_test.capacity());

	for (int i = 0; i < da2.capacity(); i++)
		assert(da2.get(i) != NULL);

}

static void testAssignmentOperator() {
	// line 29

	for (int i = 0; i < da2.capacity(); i++)
		assert(da2.get(i) != NULL);

}
