#include <iostream>
#include <typeinfo>

//C��� �̸��� Ŭ������ �����.
class C {
public:
	int x;
};

int i = 1;//��� ������ Ȯ���ϱ� ���� ���� ���������̴�.

//�Լ� ���ø��� �����. �Լ� ���ø��� ���ο� �μ��� Ÿ���� ����ϴ� ����� �����Ѵ�.
template<class T> void f(T) {
	std::cout << i++ << ".TŸ�� : " << typeid(T).name() << std::endl;
}

int main() {
	C a = { 0 };
	const C b = { 0 };
	C& c = a;
	const C& d = b;

	f(a); f(&a); f(b); f(&b); f(c); f(d);
	f(C{ 10 });//���� ������ �����Ͽ� �Լ��� �μ��� �����Ѵ�. 
}


//����Ÿ���� '������ Ÿ��'���� ���� �����ڿ� �̵� ������ �׸��� ���� �������� �μ��� ����Ѵ�. 
//���� �ݵ�� ������ �ʿ��� Ÿ���̴�. 