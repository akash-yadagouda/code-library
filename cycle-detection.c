bool has_cycle(Node* a) {
	Node *head = a;
	if (!a || !a->next) {
		return NULL;
	}

	Node *t = a->next;
	Node *b = a->next->next;

	while(b && b != t) {
		if (!b->next) {
			return NULL;
		}
		b = b->next->next;
		t = t->next;
	}

	if (!b) {
		return NULL;
	}

	t = head;
	while(t != b) {
		t = t->next;
		b = b->next;
	}
	return t;
}
