#include "../inc/ProductProvider.hpp"

#include <iostream>

int main()
{
    ProductProvider productProvider;
    std::vector<Product*> product_vector;

    for(int i = 0 ; i < 3 ; i++)
    {
    	product_vector.push_back(productProvider.get_product());
    	std::cout << "Client has Product on address: " << product_vector[i] << std::endl << std::endl;
    }

    productProvider.return_product(product_vector.back());
    std::cout << std::endl;

    Product* product = productProvider.get_product();
    std::cout << "Client has Product on address: " << product << std::endl << std::endl;

    productProvider.return_product(product);

    for(Product* product : product_vector)
    {
    	productProvider.return_product(product);
    }

    std::cout << std::endl;

	return 0;
}
