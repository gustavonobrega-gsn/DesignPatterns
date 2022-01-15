#include "../inc/ProxyProduct.hpp"

int main()
{
	AbstractProduct* proxy_product = new ProxyProduct();
	proxy_product->operation();

	return 0;
}
